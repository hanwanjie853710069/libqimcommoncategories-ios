//
//  NSObject+STIMRuntime.h
//  STChatIphone
//
//  Created by 李海彬 on 2017/9/13.
//
//

#import <Foundation/Foundation.h>

@interface NSObject (STIMRuntime)

/**
 获取所有的属性及属性值
 
 @return 所有的属性及属性值
 */
- (NSString *)stimDB_properties_aps;


/**
 清空所有属性值
 */
- (void)stimDB_clearPropertyValue;

/**
 重置所有成员变量
 */
- (void)stimDB_resetIvarList;

@end
