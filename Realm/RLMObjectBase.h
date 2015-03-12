////////////////////////////////////////////////////////////////////////////
//
// Copyright 2014 Realm Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
////////////////////////////////////////////////////////////////////////////

#import <Foundation/Foundation.h>

@class RLMRealm;
@class RLMSchema;
@class RLMObjectSchema;

@interface RLMObjectBase : NSObject
@property (nonatomic, readonly, getter = isInvalidated) BOOL invalidated;

- (instancetype)init;

- (id)objectForKeyedSubscript:(NSString *)key;
- (void)setObject:(id)obj forKeyedSubscript:(NSString *)key;

+ (NSString *)className;

@end



Class RLMObjectUtilClass(BOOL isSwift);

@interface RLMObjectUtil : NSObject

+ (NSString *)primaryKeyForClass:(Class)cls;
+ (NSArray *)ignoredPropertiesForClass:(Class)cls;
+ (NSArray *)indexedPropertiesForClass:(Class)cls;

+ (NSArray *)getGenericListPropertyNames:(id)obj;

@end
