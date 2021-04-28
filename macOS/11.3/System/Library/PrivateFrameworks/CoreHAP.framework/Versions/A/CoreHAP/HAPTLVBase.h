/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/Versions/A/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/HAPTLVDescription.h>

@class NSData;

@interface HAPTLVBase : HAPTLVDescription {

	NSData* _tlvDatablob;

}

@property (nonatomic,readonly) NSData * tlvDatablob;              //@synthesize tlvDatablob=_tlvDatablob - In the implementation block
-(id)initWithTLVData:(id)arg1 ;
-(char)_parseFromTLVData;
-(NSData *)tlvDatablob;
-(id)_parseArray:(id)arg1 result:(id*)arg2 objectCreator:(/*^block*/id)arg3 ;
-(char)_parseFields:(id)arg1 ;
-(char)_parseMandatory:(id)arg1 optional:(id)arg2 ;
-(char)_parse:(id)arg1 ;
@end
