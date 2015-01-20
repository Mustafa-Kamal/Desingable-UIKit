//
//  DesignableUIView.m
//  EarMashin
//
//  Created by Mustafa Kamal Ismail Ahmed on 12/6/14.
//  Copyright (c) 2014 Mustafa Kamal Ismail Ahmed. All rights reserved.
//

#import "DesignableUIView.h"

@implementation DesignableUIView
- (void)setBorderWidth:(CGFloat)borderWidth
{
    _borderWidth = borderWidth;
    self.layer.borderWidth = borderWidth;
}

- (void)setBorderColor:(UIColor *)borderColor
{
    _borderColor = borderColor;
    self.layer.borderColor = borderColor.CGColor;
}

- (void)setCornerRadius:(CGFloat)cornerRadius
{
    _cornerRadius = cornerRadius;
    self.layer.cornerRadius = cornerRadius;
}

- (void)setIsCircle:(BOOL)isCircle
{
    _isCircle = isCircle;
    if (isCircle) {
        self.layer.cornerRadius = self.frame.size.width / 2;
    }
    else
    {
        self.layer.cornerRadius = self.cornerRadius;
    }
}
@end
