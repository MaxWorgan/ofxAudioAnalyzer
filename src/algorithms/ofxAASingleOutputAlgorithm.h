/*
 * Copyright (C) 2019 Leo Zimmerman [http://www.leozimmerman.com.ar]
 *
 * ofxAudioAnalyzer is free software: you can redistribute it and/or modify it under
 * the terms of the GNU Affero General Public License as published by the Free
 * Software Foundation (FSF), either version 3 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the Affero GNU General Public License
 * version 3 along with this program.  If not, see http://www.gnu.org/licenses/
 *
 * ---------------------------------------------------------------
 *
 * This project uses Essentia, copyrighted by Music Technology Group - Universitat Pompeu Fabra
 * using GNU Affero General Public License.
 * See http://essentia.upf.edu for documentation.
 *
 */

#pragma once

#include "ofxAABaseAlgorithm.h"

class ofxAASingleOutputAlgorithm : public ofxAABaseAlgorithm {
public:
    
    ofxAASingleOutputAlgorithm(ofxaa::AlgorithmType algorithmType, int samplerate, int framesize);
    
    void compute() override;
    
    Real outputValue;
    
    float getValue(float smooth, bool normalized);
    
private:
    
    
    float valueNormalized();
    void smoothValue(float& valueToSmooth, float& smoothedValue, float smthAmnt);
    
    float _smoothedValue;
    float _smoothedNormValue;
    
};
