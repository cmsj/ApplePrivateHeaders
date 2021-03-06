/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssistiveControlSupport.framework/Versions/A/AssistiveControlSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistiveControlSupport/ACSHAction.h>

@class NSString, NSDictionary;

@interface ACSHActionOpenPanel : ACSHAction {

	NSString* _panelUUID;
	NSDictionary* _panelInfo;

}

@property (nonatomic,copy) NSString * panelUUID;                    //@synthesize panelUUID=_panelUUID - In the implementation block
@property (nonatomic,retain) NSDictionary * panelInfo;              //@synthesize panelInfo=_panelInfo - In the implementation block
+(id)actionWithPanelUUID:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)_configureWithPlistDictionary:(id)arg1 ;
-(void)setPanelUUID:(NSString *)arg1 ;
-(id)paramDictionaryForSaving;
-(id)paramDescription;
-(NSString *)panelUUID;
-(NSDictionary *)panelInfo;
-(void)setPanelInfo:(NSDictionary *)arg1 ;
@end

