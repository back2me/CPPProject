char** inHinhCanhQuat(int chieuCao){
	char ** ketQua = new char*[chieuCao * 2];
	for (int i = 0; i < chieuCao * 2; i++){
		ketQua[i] = new char[chieuCao * 2];
	}
	for (int hang = 0; hang < chieuCao * 2; hang++){
		for (int cot = 0; cot < chieuCao * 2; cot++){
			if (hang >= chieuCao){
				if ((cot < chieuCao * 2 - hang) || (cot >= chieuCao && (cot < hang + 1))){
					ketQua[hang][cot] = '*';
				}
				else{
					ketQua[hang][cot] = ' ';
				}
			}
			else{
				if ((cot >= hang && cot < chieuCao) || (cot >= chieuCao * 2 - hang - 1)){
					ketQua[hang][cot] = '*';
				}
				else {
					ketQua[hang][cot] = ' ';
				}
			}
		}
	}
	return ketQua;
}
