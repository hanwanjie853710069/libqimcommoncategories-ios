//
//  NSData+HookContentsOfFile.h
//  STChatIphone
//
//  Created by 李海彬 on 2018/2/6.
//

#import <Foundation/Foundation.h>

@interface NSData (STIMHookContentsOfFile)

+(instancetype)dataWithContentsOfFile:(NSString *)path;

@end
