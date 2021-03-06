/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface PKSpendingSummaryFetcherRequest : NSObject <NSCopying> {

	char _withLastChange;
	NSDate* _startDate;
	unsigned long long _type;

}

@property (nonatomic,retain) NSDate * startDate;                   //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) char withLastChange;                  //@synthesize withLastChange=_withLastChange - In the implementation block
@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(NSDate *)startDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(char)withLastChange;
-(void)setWithLastChange:(char)arg1 ;
@end

