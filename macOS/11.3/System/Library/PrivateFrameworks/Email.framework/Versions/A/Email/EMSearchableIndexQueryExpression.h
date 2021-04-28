/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Versions/A/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Email/Email-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface EMSearchableIndexQueryExpression : NSObject <NSCopying> {

	NSString* _queryString;

}

@property (nonatomic,copy) NSString * queryString;                     //@synthesize queryString=_queryString - In the implementation block
@property (getter=isValid,nonatomic,readonly) char valid; 
+(id)expressionWithQueryString:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(char)isValid;
-(NSString *)queryString;
-(void)setQueryString:(NSString *)arg1 ;
-(id)initWithQueryString:(id)arg1 ;
@end
