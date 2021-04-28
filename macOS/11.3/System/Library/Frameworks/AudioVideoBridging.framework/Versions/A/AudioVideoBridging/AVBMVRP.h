/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AudioVideoBridging.framework/Versions/A/AudioVideoBridging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioVideoBridging/AVBMRP.h>

@class NSMutableArray;

@interface AVBMVRP : AVBMRP {

	NSMutableArray* clients;

}
+(id)diagnosticDescriptionForService:(id)arg1 withIndent:(id)arg2 ;
+(id)IOClassName;
-(void)addClient:(id)arg1 ;
-(void)removeClient:(id)arg1 ;
-(void)serviceTerminated;
-(void)callbackWithArgs:(unsigned long long*)arg1 argCount:(unsigned)arg2 ;
-(char)registerVLANID:(unsigned short)arg1 ;
-(char)deregisterVLANID:(unsigned short)arg1 ;
@end
