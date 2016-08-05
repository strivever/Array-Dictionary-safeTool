//
//  NSObject+ImpChangeTool.h
//  KVOTest
//
//  Created by StriEver on 16/8/1.
//  Copyright © 2016年 StriEver. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (ImpChangeTool)
/**
 *  交换两个函数实现指针  参数均为NSString类型
 *
 *  @param systemMethodString 系统方法名string
 *  @param systemClassString  系统实现方法类名string
 *  @param safeMethodString   自定义hook方法名string
 *  @param targetClassString  目标实现类名string
 */
+ (void)SwizzlingMethod:(NSString *)systemMethodString systemClassString:(NSString *)systemClassString toSafeMethodString:(NSString *)safeMethodString targetClassString:(NSString *)targetClassString;
@end
