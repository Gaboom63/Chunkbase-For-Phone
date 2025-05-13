from flask import Flask, request, jsonify
from flask_cors import CORS
import subprocess

app = Flask(__name__)
CORS(app)

CUBIOMES_PATH = './cubiomes-viewer/cubiomes-viewer'  # Adjust if moved

@app.route('/generate', methods=['POST'])
def generate():
    data = request.get_json()
    seed_input = data.get('seed', '').strip()
    x = str(data.get('x', '0'))
    z = str(data.get('z', '0'))

    # Try parsing as int, otherwise convert string seed to long
    try:
        seed = str(int(seed_input))
    except ValueError:
        seed = str(int.from_bytes(seed_input.encode('utf-8'), 'big') & ((1 << 64) - 1))

    try:
        result = subprocess.run(
            [CUBIOMES_PATH, '--biome', seed, x, z],
            stdout=subprocess.PIPE,
            stderr=subprocess.PIPE,
            text=True
        )

        if result.returncode != 0:
            return jsonify({'error': result.stderr}), 500

        return jsonify({'output': result.stdout})

    except Exception as e:
        return jsonify({'error': str(e)}), 500
