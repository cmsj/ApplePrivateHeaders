/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LaunchServices/LaunchServices-Structs.h>
#import <LaunchServices/LSPropertyList.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/LSDetachable.h>

@class NSDictionary;

@interface _LSLazyPropertyList : LSPropertyList <NSCopying, NSSecureCoding, LSDetachable>

@property (readonly) NSDictionary * propertyList; 
+(char)supportsSecureCoding;
+(id)lazyPropertyListWithContext:(LSContext*)arg1 unit:(unsigned)arg2 ;
+(id)lazyPropertyListWithPropertyList:(id)arg1 ;
+(id)lazyPropertyList;
+(id)lazyPropertyListWithPropertyListData:(id)arg1 ;
+(id)lazyPropertyListWithPropertyListURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
+(id)lazyPropertyListWithPropertyListURL:(id)arg1 ;
+(id)lazyPropertyListWithLazyPropertyLists:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)detach;
-(id)objectForKey:(id)arg1 ofClass:(Class)arg2 ;
-(id)objectForKey:(id)arg1 ofClass:(Class)arg2 valuesOfClass:(Class)arg3 ;
-(id)_expensiveDictionaryRepresentation;
-(NSDictionary *)propertyList;
-(id)objectsForKeys:(id)arg1 ;
-(id)uncheckedObjectsForKeys:(id)arg1 ;
-(char)_getPropertyList:(id*)arg1 ;
-(char)_getValue:(id*)arg1 forPropertyListKey:(id)arg2 ;
@end

