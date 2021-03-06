
/*
 * Copyright 2011 Google Inc.
 *
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */
#ifndef SkGLDevice_FBO_DEFINED
#define SkGLDevice_FBO_DEFINED

#include "SkGLDevice.h"

class SkGLDevice_FBO : public SkGLDevice {
public:
    SkGLDevice_FBO(const SkBitmap& bitmap, bool offscreen);
    virtual ~SkGLDevice_FBO();

    // overrides from SkGLDevice
    virtual void gainFocus(SkCanvas*);
    virtual TexOrientation bindDeviceAsTexture();

private:
    GLuint  fFBO;
    GLuint  fTextureID;

    typedef SkGLDevice INHERITED;
};

#endif

