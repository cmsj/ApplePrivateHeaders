/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/Versions/A/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AppleMediaServices-Structs.h>
#import <AppleMediaServices/AMSSQLitePropertyPredicate.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AMSSQLiteComparisonPredicate : AMSSQLitePropertyPredicate <NSCopying> {

	long long _comparisonType;
	id _value;

}

@property (nonatomic,readonly) long long comparisonType;              //@synthesize comparisonType=_comparisonType - In the implementation block
@property (nonatomic,readonly) id value;                              //@synthesize value=_value - In the implementation block
+(id)predicateWithProperty:(id)arg1 equalToValue:(id)arg2 ;
+(id)predicateWithProperty:(id)arg1 value:(id)arg2 comparisonType:(long long)arg3 ;
+(id)predicateWithProperty:(id)arg1 equalToLongLong:(long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)value;
-(long long)comparisonType;
-(void)applyBinding:(id)arg1 atIndex:(inout int*)arg2 ;
-(id)SQLForEntityClass:(Class)arg1 ;
-(id)_comparisonTypeString;
@end

