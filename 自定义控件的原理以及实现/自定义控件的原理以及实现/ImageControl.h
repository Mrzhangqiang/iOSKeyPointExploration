//
//  ImageControl.h
//  自定义控件的原理以及实现
//
//  Created by huangchengdu on 15/12/21.
//  Copyright © 2015年 huangchengdu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ImageControl : UIControl
-(instancetype)initWithFrame:(CGRect)frame title:(NSString *)title image:(UIImage *)image;
@end
