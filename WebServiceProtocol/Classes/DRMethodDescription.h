//
//  DRMethodDescription.h
//  WebServiceProtocol
//
//  Created by Nate Petersen on 9/3/15.
//  Copyright © 2015 Digital Rickshaw. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DRMethodDescription : NSObject

@property(nonatomic,strong,readonly) NSArray* parameterNames;
@property(nonatomic,strong,readonly) NSString* returnType;
@property(nonatomic,strong,readonly) NSDictionary* annotations;

- (instancetype)initWithDictionary:(NSDictionary*)dictionary;

- (NSString*)httpMethod;

- (NSString*)parameterizedPathForInvocation:(NSInvocation*)invocation;

@end
