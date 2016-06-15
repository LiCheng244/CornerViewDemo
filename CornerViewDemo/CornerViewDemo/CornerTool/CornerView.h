//
//  CornerView.h
//  CornerViewDemo
//
//  Created by LiCheng on 16/6/15.
//  Copyright © 2016年 Li_Cheng. All rights reserved.
//
//
//  自定义可视化 圆角view
//

#import <UIKit/UIKit.h>

IB_DESIGNABLE  // 动态刷新

@interface CornerView : UIView

/**
 *  加上IBInspectable就可以可视化显示相关的属性
 */

/** 可视化设置边框宽度 */
@property (nonatomic, assign)IBInspectable CGFloat borderWidth;

/** 可视化设置边框颜色 */
@property (nonatomic, strong)IBInspectable UIColor *borderColor;

/** 可视化设置圆角 */
@property (nonatomic, assign)IBInspectable CGFloat cornerRadius;

@end
