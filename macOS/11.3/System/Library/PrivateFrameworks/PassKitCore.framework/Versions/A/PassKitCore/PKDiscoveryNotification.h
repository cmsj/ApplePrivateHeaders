/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKDiscoveryObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString, NSDate, NSURL;

@interface PKDiscoveryNotification : PKDiscoveryObject <NSSecureCoding> {

	char _delivered;
	long long _actionType;
	NSDictionary* _actionInfo;
	NSString* _titleKey;
	NSString* _messageKey;
	NSString* _actionTitleKey;
	NSString* _localizedTitle;
	NSString* _localizedMessage;
	NSString* _localizedActionTitle;
	NSDate* _scheduledDeliveryDate;

}

@property (assign,nonatomic) long long actionType;                                   //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,retain) NSDictionary * actionInfo;                              //@synthesize actionInfo=_actionInfo - In the implementation block
@property (nonatomic,copy) NSString * titleKey;                                      //@synthesize titleKey=_titleKey - In the implementation block
@property (nonatomic,copy) NSString * messageKey;                                    //@synthesize messageKey=_messageKey - In the implementation block
@property (nonatomic,copy) NSString * actionTitleKey;                                //@synthesize actionTitleKey=_actionTitleKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedTitle;                       //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedMessage;                     //@synthesize localizedMessage=_localizedMessage - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedActionTitle;                 //@synthesize localizedActionTitle=_localizedActionTitle - In the implementation block
@property (nonatomic,readonly) long long passQualifier; 
@property (nonatomic,copy,readonly) NSURL * url; 
@property (nonatomic,copy,readonly) NSString * discoveryCardIdentifier; 
@property (nonatomic,retain) NSDate * scheduledDeliveryDate;                         //@synthesize scheduledDeliveryDate=_scheduledDeliveryDate - In the implementation block
@property (assign,getter=isDelivered,nonatomic) char delivered;                      //@synthesize delivered=_delivered - In the implementation block
+(char)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSURL *)url;
-(NSString *)localizedTitle;
-(NSString *)titleKey;
-(void)setTitleKey:(NSString *)arg1 ;
-(void)setActionType:(long long)arg1 ;
-(long long)actionType;
-(NSString *)localizedMessage;
-(char)isDelivered;
-(NSString *)messageKey;
-(NSString *)actionTitleKey;
-(NSDictionary *)actionInfo;
-(void)setScheduledDeliveryDate:(NSDate *)arg1 ;
-(NSString *)localizedActionTitle;
-(long long)passQualifier;
-(NSString *)discoveryCardIdentifier;
-(void)localizeWithBundle:(id)arg1 ;
-(void)updateWithNotification:(id)arg1 ;
-(void)scheduleDeliveryForCurrentDate:(id)arg1 ;
-(void)updateForRuleResult:(char)arg1 ;
-(char)isEqualForDisplayToNotification:(id)arg1 ;
-(void)setActionInfo:(NSDictionary *)arg1 ;
-(void)setMessageKey:(NSString *)arg1 ;
-(void)setActionTitleKey:(NSString *)arg1 ;
-(NSDate *)scheduledDeliveryDate;
-(void)setDelivered:(char)arg1 ;
@end

