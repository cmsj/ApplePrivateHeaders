/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ABFaceTimeCommunicationsBridgeDelegate.h>

@protocol ABCollectionItemMessagingAvailabilityHelperDelegate;
@class ABFaceTimeCommunicationsBridge, NSString;

@interface ABCollectionItemMessagingAvailabilityHelper : NSObject <ABFaceTimeCommunicationsBridgeDelegate> {

	char _availableForMessaging;
	ABFaceTimeCommunicationsBridge* _bridge;
	NSString* _endpoint;
	id<ABCollectionItemMessagingAvailabilityHelperDelegate> _delegate;

}

@property (nonatomic,retain) ABFaceTimeCommunicationsBridge * bridge;                                              //@synthesize bridge=_bridge - In the implementation block
@property (assign,getter=isAvailableForMessaging,nonatomic) char availableForMessaging;                            //@synthesize availableForMessaging=_availableForMessaging - In the implementation block
@property (nonatomic,retain) NSString * endpoint;                                                                  //@synthesize endpoint=_endpoint - In the implementation block
@property (assign,nonatomic,__weak) id<ABCollectionItemMessagingAvailabilityHelperDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<ABCollectionItemMessagingAvailabilityHelperDelegate>)delegate;
-(void)setDelegate:(id<ABCollectionItemMessagingAvailabilityHelperDelegate>)arg1 ;
-(NSString *)endpoint;
-(void)setEndpoint:(NSString *)arg1 ;
-(ABFaceTimeCommunicationsBridge *)bridge;
-(void)setBridge:(ABFaceTimeCommunicationsBridge *)arg1 ;
-(void)setAvailableForMessaging:(char)arg1 ;
-(void)faceTimeCommunicationsBridge:(id)arg1 messagingAvailabilityChanged:(char)arg2 forEndpoint:(id)arg3 ;
-(void)startAvailabilityCheckForEndpoint:(id)arg1 property:(id)arg2 ;
-(char)isAvailableForMessaging;
@end
