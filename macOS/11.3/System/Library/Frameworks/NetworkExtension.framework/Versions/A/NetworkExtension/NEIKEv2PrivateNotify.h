/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/Versions/A/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NEIKEv2PrivateNotify : NSObject <NSCopying> {

	unsigned short _notifyStatus;
	NSData* _notifyData;

}

@property (assign,nonatomic) unsigned short notifyStatus;              //@synthesize notifyStatus=_notifyStatus - In the implementation block
@property (nonatomic,retain) NSData * notifyData;                      //@synthesize notifyData=_notifyData - In the implementation block
-(void)setNotifyStatus:(unsigned short)arg1 ;
-(void)setNotifyData:(NSData *)arg1 ;
-(unsigned short)notifyStatus;
-(id)initWithNotifyStatus:(unsigned short)arg1 notifyData:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(NSData *)notifyData;
@end

