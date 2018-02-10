//
//  UIImage+JJUIImageCategory.h
//  JJUIImage_demo1
//
//  Created by lucy on 2018/2/10.
//  Copyright © 2018年 com.daoKeLegend. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (JJUIImageCategory)

+ (UIImage *)sd_animatedGIFNamed:(NSString *)name;

+ (UIImage *)jj_sd_animatedGIFWithData:(NSData *)data;

- (UIImage *)sd_animatedImageByScalingAndCroppingToSize:(CGSize)size;

@end
