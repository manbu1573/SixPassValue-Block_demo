//
//  SecondViewController.h
//  SixPassValue-Block_demo
//
//  Created by lanou3g on 15/9/17.
//  Copyright (c) 2015年 lanou3g. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^PassvalueBlock)(NSString *);
@interface SecondViewController : UIViewController
//声明Block属性

@property (nonatomic,copy)PassvalueBlock passvalueBlock;

@end
