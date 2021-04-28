/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/Versions/A/LocationSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LocationSupport/CLIntersiloService.h>
#import <libobjc.A.dylib/CLIntersiloServiceMockProtocol.h>

@class NSMutableDictionary, NSString;

@interface CLIntersiloServiceMock : CLIntersiloService <CLIntersiloServiceMockProtocol> {

	NSMutableDictionary* _keyedPayloads;

}

@property (nonatomic,retain) NSMutableDictionary * keyedPayloads;              //@synthesize keyedPayloads=_keyedPayloads - In the implementation block
@property (assign,nonatomic) char valid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setKeyedPayloads:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)keyedPayloads;
-(id)getPayloadForKey:(id)arg1 ;
-(void)setPayload:(id)arg1 forKey:(id)arg2 ;
-(void)removePayloadForKey:(id)arg1 ;
-(void)setPayload:(id)arg1 forSelector:(SEL)arg2 ;
-(void)removePayloadForSelector:(SEL)arg1 ;
-(id)syncgetPayloadForSelector:(SEL)arg1 ;
-(id)syncgetPayloadForKey:(id)arg1 ;
-(id)getPayloadForSelector:(SEL)arg1 ;
-(void)beginService;
-(void)endService;
@end
