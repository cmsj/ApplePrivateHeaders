/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFCore/AVFCore-Structs.h>
@class AVPlayerItem, NSArray, NSDate;

@interface AVPlayerInterstitialEvent : NSObject {

	AVPlayerItem* _primaryItem;
	OpaqueFigPlayerInterstitialEventRef _figEvent;
	NSArray* _templateItems;

}

@property (nonatomic,__weak,readonly) AVPlayerItem * primaryItem; 
@property (nonatomic,readonly) SCD_Struct_CM3 time; 
@property (nonatomic,readonly) NSDate * date; 
@property (nonatomic,readonly) NSArray * templateItems; 
@property (nonatomic,readonly) NSArray * interstitialTemplateItems; 
@property (nonatomic,readonly) unsigned long long restrictions; 
@property (nonatomic,readonly) SCD_Struct_CM3 resumptionOffset; 
+(id)interstitialEventWithPrimaryItem:(id)arg1 templateItems:(id)arg2 figEvent:(OpaqueFigPlayerInterstitialEventRef)arg3 ;
+(id)interstitialEventWithPrimaryItem:(id)arg1 time:(SCD_Struct_CM3)arg2 templateItems:(id)arg3 restrictions:(unsigned long long)arg4 resumptionOffset:(SCD_Struct_CM3)arg5 ;
+(id)interstitialEventWithPrimaryItem:(id)arg1 date:(id)arg2 templateItems:(id)arg3 restrictions:(unsigned long long)arg4 resumptionOffset:(SCD_Struct_CM3)arg5 ;
+(id)playerInterstitialEventWithPrimaryItem:(id)arg1 time:(SCD_Struct_CM3)arg2 interstitialTemplateItems:(id)arg3 restrictions:(unsigned long long)arg4 resumptionOffset:(SCD_Struct_CM3)arg5 ;
+(id)playerInterstitialEventWithPrimaryItem:(id)arg1 date:(id)arg2 interstitialTemplateItems:(id)arg3 restrictions:(unsigned long long)arg4 resumptionOffset:(SCD_Struct_CM3)arg5 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSDate *)date;
-(SCD_Struct_CM3)time;
-(NSArray *)templateItems;
-(unsigned long long)restrictions;
-(OpaqueFigPlayerInterstitialEventRef)figEvent;
-(id)initWithPrimartyItem:(id)arg1 time:(SCD_Struct_CM3)arg2 date:(id)arg3 templateItems:(id)arg4 restrictions:(unsigned long long)arg5 resumptionOffset:(SCD_Struct_CM3)arg6 ;
-(id)initWithPrimartyItemAndFigEvent:(id)arg1 templateItems:(id)arg2 figEvent:(OpaqueFigPlayerInterstitialEventRef)arg3 ;
-(AVPlayerItem *)primaryItem;
-(NSArray *)interstitialTemplateItems;
-(SCD_Struct_CM3)resumptionOffset;
@end

