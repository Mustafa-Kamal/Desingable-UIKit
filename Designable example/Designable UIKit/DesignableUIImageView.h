//
//  DesignableUIImageView.h
//  EarMashin
//
//  Created by Mustafa Kamal Ismail Ahmed on 12/6/14.
//  Copyright (c) 2014 Mustafa Kamal Ismail Ahmed. All rights reserved.
//

#import <UIKit/UIKit.h>
IB_DESIGNABLE

@interface DesignableUIImageView : UIImageView
@property (nonatomic) IBInspectable CGFloat borderWidth;
@property (nonatomic) IBInspectable UIColor *borderColor;
@property (nonatomic) IBInspectable CGFloat cornerRadius;
@property (nonatomic) IBInspectable BOOL isCircle;
@end
