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

@interface AMSSQLiteNullPredicate : AMSSQLitePropertyPredicate <NSCopying> {

	char _matchesNull;

}

@property (nonatomic,readonly) char matchesNull;              //@synthesize matchesNull=_matchesNull - In the implementation block
+(id)isNotNullPredicateWithProperty:(id)arg1 ;
+(id)isNullPredicateWithProperty:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)SQLForEntityClass:(Class)arg1 ;
-(char)matchesNull;
@end

