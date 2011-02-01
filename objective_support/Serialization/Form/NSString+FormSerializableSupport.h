//
//  NSString+FormSerializableSupport.h
//  active_resource
//
//  Created by James Burka on 1/6/09.
//  Copyright 2009 Burkaprojects. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface NSString(FormSerializableSupport) 

- (NSString *)toFormValue;
- (NSString *)toFormElementAs:(NSString *)rootName excludingInArray:(NSArray *)exclusions withTranslations:(NSDictionary *)keyTranslations;


@end
