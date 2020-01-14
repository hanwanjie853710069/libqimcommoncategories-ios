//
//  UIApplication+STIMApplication.m
//  STIMCommonCategories
//
//  Created by 李海彬 on 2018/9/16.
//  Copyright © 2018年 STIM. All rights reserved.
//

#import "UIApplication+STIMApplication.h"

@implementation UIApplication (STIMApplication)

- (UIWindow *)mainWindow{
    return self.delegate.window;
}

- (UINavigationController *)visibleNavigationController {
    return [[self visibleViewController] navigationController];
}

- (UIViewController *)visibleViewController {
    UIViewController *rootviewcontroller = [self.mainWindow rootViewController];
    return [self getVisibleViewControllerFrom:rootviewcontroller];
}

//逐层遍历，获取当前所在控制器
- (UIViewController *)getVisibleViewControllerFrom:(UIViewController *)vc {
    if ([vc isKindOfClass:[UINavigationController class]]) {
        return [self getVisibleViewControllerFrom:[((UINavigationController *) vc)visibleViewController]];
    }else if ([vc isKindOfClass:[UITabBarController class]]){
        return [self getVisibleViewControllerFrom:[((UITabBarController *) vc)selectedViewController]];
    }else{
        if (vc.presentedViewController) {
            return [self getVisibleViewControllerFrom:vc.presentedViewController];
        }else{
            return vc;
        }
    }
}

@end
