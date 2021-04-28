/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AudioVideoBridging.framework/Versions/A/AudioVideoBridging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioVideoBridging/AudioVideoBridging-Structs.h>
#import <AudioVideoBridging/AVBMACAddress.h>

@protocol AVBMAAPMACAddressDelegate;
@class AVBInterface;

@interface AVBMAAPMACAddress : AVBMACAddress {

	id<AVBMAAPMACAddressDelegate> _delegate;
	AVBInterface* _interface;
	unsigned long long _multicastReference;

}

@property (__weak) AVBInterface * interface;                            //@synthesize interface=_interface - In the implementation block
@property (assign) unsigned long long multicastReference;               //@synthesize multicastReference=_multicastReference - In the implementation block
@property (__weak) id<AVBMAAPMACAddressDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)randomMAAPMACAddressOnInterface:(id)arg1 ;
+(id)randomMAAPMACAddressWithSuggestedMAC:(id)arg1 onInterface:(id)arg2 ;
+(id)randomMAAPMACAddressWithPreviousStringRepresentation:(id)arg1 onInterface:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id<AVBMAAPMACAddressDelegate>)delegate;
-(void)setDelegate:(id<AVBMAAPMACAddressDelegate>)arg1 ;
-(AVBInterface *)interface;
-(void)setMulticast:(char)arg1 ;
-(void)setInterface:(AVBInterface *)arg1 ;
-(void)setStringRepresentation:(id)arg1 ;
-(void)setDataRepresentation:(id)arg1 ;
-(void)setMulticastReference:(unsigned long long)arg1 ;
-(unsigned long long)multicastReference;
-(id)initWithSuggestedMAC:(id)arg1 onInterface:(id)arg2 ;
@end
