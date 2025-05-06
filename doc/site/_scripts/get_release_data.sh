#!/bin/bash

SCRIPT_DIR=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )
DATA_FILE="$SCRIPT_DIR/../_data/latest_release.json"

echo "> writing $DATA_FILE"

rm $DATA_FILE
<<<<<<< HEAD
curl -s https://api.github.com/repos/beyond-all-reason/RecoilEngine/releases/latest \
=======
curl -s https://api.github.com/repos/beyond-all-reason/RecoilEngine/releases/latest  \
>>>>>>> 0aa5469497c42b9066a304f13f76ea460aa69b07
  > $DATA_FILE
