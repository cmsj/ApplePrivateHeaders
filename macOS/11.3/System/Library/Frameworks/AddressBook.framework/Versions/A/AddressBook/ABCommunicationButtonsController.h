/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ABFaceTimeCommunicationsBridgeDelegate.h>

@protocol ABFaceTimeDataSource;
@class NSStackView, ABFaceTimeCommunicationsBridge, CNFuture, NSButton, NSArray, NSString;

@interface ABCommunicationButtonsController : NSObject <ABFaceTimeCommunicationsBridgeDelegate> {

	char _availableForFaceTime;
	NSStackView* _communicationButtonsRow;
	id<ABFaceTimeDataSource> _dataSource;
	ABFaceTimeCommunicationsBridge* _bridge;
	CNFuture* _availabilityFuture;
	NSButton* _faceTimeButton;
	NSButton* _faceTimeAudioButton;

}

@property (nonatomic,retain) NSStackView * communicationButtonsRow;                   //@synthesize communicationButtonsRow=_communicationButtonsRow - In the implementation block
@property (nonatomic,retain) ABFaceTimeCommunicationsBridge * bridge;                 //@synthesize bridge=_bridge - In the implementation block
@property (assign,nonatomic,__weak) id<ABFaceTimeDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) char availableForFaceTime;                               //@synthesize availableForFaceTime=_availableForFaceTime - In the implementation block
@property (nonatomic,retain) CNFuture * availabilityFuture;                           //@synthesize availabilityFuture=_availabilityFuture - In the implementation block
@property (nonatomic,readonly) NSButton * faceTimeVideoButton;                        //@synthesize faceTimeButton=_faceTimeButton - In the implementation block
@property (nonatomic,readonly) NSButton * faceTimeAudioButton;                        //@synthesize faceTimeAudioButton=_faceTimeAudioButton - In the implementation block
@property (nonatomic,readonly) NSArray * allButtons; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)faceTimeImageWrapper;
+(id)faceTimeAudioImageWrapper;
+(id)uniqueIdentifiersSuitableForAvailabilityLookupFromIdentifiers:(id)arg1 ;
+(id)communicationEndpointsFromPhoneNumbers:(id)arg1 emailAddresses:(id)arg2 ;
+(id)phoneEndpointsFromPhoneNumbers:(id)arg1 ;
+(id)emailEndpointsFromEmailAddresses:(id)arg1 ;
+(char)isIdentifierFromCuratedSource:(id)arg1 ;
-(void)dealloc;
-(id<ABFaceTimeDataSource>)dataSource;
-(void)setDataSource:(id<ABFaceTimeDataSource>)arg1 ;
-(ABFaceTimeCommunicationsBridge *)bridge;
-(void)setBridge:(ABFaceTimeCommunicationsBridge *)arg1 ;
-(NSArray *)allButtons;
-(void)faceTimeCommunicationsBridge:(id)arg1 faceTimeAvailabilityChaged:(char)arg2 forContactWithIdentifier:(id)arg3 ;
-(void)startAvailabilityLookup;
-(void)stopAvailabilityLookup;
-(void)buildCommunicationsRowStackView;
-(void)buildFaceTimeButton;
-(void)buildFaceTimeAudioButton;
-(void)performActionForButton:(id)arg1 ;
-(void)adjustStateOfButton:(id)arg1 ;
-(void)setAvailabilityFuture:(CNFuture *)arg1 ;
-(CNFuture *)availabilityFuture;
-(void)setAvailableForFaceTime:(char)arg1 ;
-(void)adjustStateOfButtons;
-(char)availableForFaceTime;
-(void)makeFaceTimeCallWithButton:(id)arg1 ;
-(void)handleFaceTimeAudioPressed;
-(char)shouldShowTelephonyMenu;
-(void)showTelephonyMenu;
-(char)shouldUseSingleEndpoint;
-(id)communicationEndpoints;
-(id)faceTimeAudioMenuItem;
-(id)callRelayPhoneNumberItems;
-(void)faceTimeAudioItemChosen:(id)arg1 ;
-(void)makeTelephonyCallWithItem:(id)arg1 ;
-(id)initWithFaceTimeBridge:(id)arg1 dataSource:(id)arg2 ;
-(NSStackView *)communicationButtonsRow;
-(void)buildLabelForButton:(id)arg1 ;
-(void)setCommunicationButtonsRow:(NSStackView *)arg1 ;
-(NSButton *)faceTimeVideoButton;
-(NSButton *)faceTimeAudioButton;
@end

