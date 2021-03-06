/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSItemType.h>
#import <libobjc.A.dylib/XSRedactionInformation.h>

@class NSArray, EWSSingleRecipientType, NSString;

@interface EWSMessageType : EWSItemType <XSRedactionInformation> {

	char _IsReadReceiptRequested;
	char _IsReadReceiptRequestedSpecified;
	char _IsDeliveryReceiptRequested;
	char _IsDeliveryReceiptRequestedSpecified;
	char _IsRead;
	char _IsReadSpecified;
	char _IsResponseRequested;
	char _IsResponseRequestedSpecified;
	EWSSingleRecipientType* _Sender;
	NSArray* _ToRecipients;
	NSArray* _CcRecipients;
	NSArray* _BccRecipients;
	NSString* _ConversationTopic;
	EWSSingleRecipientType* _From;
	NSString* _InternetMessageId;
	NSString* _References;
	NSArray* _ReplyTo;
	EWSSingleRecipientType* _ReceivedBy;
	EWSSingleRecipientType* _ReceivedRepresenting;

}

@property (setter=ender,nonatomic,retain) EWSSingleRecipientType * Sender;               //@synthesize Sender=_Sender - In the implementation block
@property (nonatomic,copy) NSArray * ToRecipients;                                       //@synthesize ToRecipients=_ToRecipients - In the implementation block
@property (nonatomic,copy) NSArray * CcRecipients;                                       //@synthesize CcRecipients=_CcRecipients - In the implementation block
@property (nonatomic,copy) NSArray * BccRecipients;                                      //@synthesize BccRecipients=_BccRecipients - In the implementation block
@property (assign,nonatomic) char IsReadReceiptRequested;                                //@synthesize IsReadReceiptRequested=_IsReadReceiptRequested - In the implementation block
@property (assign,nonatomic) char IsReadReceiptRequestedSpecified;                       //@synthesize IsReadReceiptRequestedSpecified=_IsReadReceiptRequestedSpecified - In the implementation block
@property (assign,nonatomic) char IsDeliveryReceiptRequested;                            //@synthesize IsDeliveryReceiptRequested=_IsDeliveryReceiptRequested - In the implementation block
@property (assign,nonatomic) char IsDeliveryReceiptRequestedSpecified;                   //@synthesize IsDeliveryReceiptRequestedSpecified=_IsDeliveryReceiptRequestedSpecified - In the implementation block
@property (nonatomic,copy) NSString * ConversationTopic;                                 //@synthesize ConversationTopic=_ConversationTopic - In the implementation block
@property (nonatomic,retain) EWSSingleRecipientType * From;                              //@synthesize From=_From - In the implementation block
@property (nonatomic,copy) NSString * InternetMessageId;                                 //@synthesize InternetMessageId=_InternetMessageId - In the implementation block
@property (assign,nonatomic) char IsRead;                                                //@synthesize IsRead=_IsRead - In the implementation block
@property (assign,nonatomic) char IsReadSpecified;                                       //@synthesize IsReadSpecified=_IsReadSpecified - In the implementation block
@property (assign,nonatomic) char IsResponseRequested;                                   //@synthesize IsResponseRequested=_IsResponseRequested - In the implementation block
@property (assign,nonatomic) char IsResponseRequestedSpecified;                          //@synthesize IsResponseRequestedSpecified=_IsResponseRequestedSpecified - In the implementation block
@property (nonatomic,copy) NSString * References;                                        //@synthesize References=_References - In the implementation block
@property (nonatomic,copy) NSArray * ReplyTo;                                            //@synthesize ReplyTo=_ReplyTo - In the implementation block
@property (nonatomic,retain) EWSSingleRecipientType * ReceivedBy;                        //@synthesize ReceivedBy=_ReceivedBy - In the implementation block
@property (nonatomic,retain) EWSSingleRecipientType * ReceivedRepresenting;              //@synthesize ReceivedRepresenting=_ReceivedRepresenting - In the implementation block
@property (nonatomic,readonly) char elementsNeedRedaction; 
@property (nonatomic,copy,readonly) NSArray * allowedElementKeys; 
+(id)definition;
-(void)setSender:(EWSSingleRecipientType *)arg1 ;
-(void)setFrom:(EWSSingleRecipientType *)arg1 ;
-(void)setIsRead:(char)arg1 ;
-(void)setToRecipients:(NSArray *)arg1 ;
-(EWSSingleRecipientType *)Sender;
-(void)setReplyTo:(NSArray *)arg1 ;
-(void)setReferences:(NSString *)arg1 ;
-(char)IsResponseRequested;
-(void)setIsResponseRequested:(char)arg1 ;
-(char)IsResponseRequestedSpecified;
-(void)setIsResponseRequestedSpecified:(char)arg1 ;
-(char)elementsNeedRedaction;
-(NSArray *)allowedElementKeys;
-(NSArray *)ToRecipients;
-(NSArray *)CcRecipients;
-(void)setCcRecipients:(NSArray *)arg1 ;
-(NSArray *)BccRecipients;
-(void)setBccRecipients:(NSArray *)arg1 ;
-(char)IsReadReceiptRequested;
-(void)setIsReadReceiptRequested:(char)arg1 ;
-(char)IsReadReceiptRequestedSpecified;
-(void)setIsReadReceiptRequestedSpecified:(char)arg1 ;
-(char)IsDeliveryReceiptRequested;
-(void)setIsDeliveryReceiptRequested:(char)arg1 ;
-(char)IsDeliveryReceiptRequestedSpecified;
-(void)setIsDeliveryReceiptRequestedSpecified:(char)arg1 ;
-(NSString *)ConversationTopic;
-(void)setConversationTopic:(NSString *)arg1 ;
-(EWSSingleRecipientType *)From;
-(NSString *)InternetMessageId;
-(void)setInternetMessageId:(NSString *)arg1 ;
-(char)IsRead;
-(char)IsReadSpecified;
-(void)setIsReadSpecified:(char)arg1 ;
-(NSString *)References;
-(NSArray *)ReplyTo;
-(EWSSingleRecipientType *)ReceivedBy;
-(void)setReceivedBy:(EWSSingleRecipientType *)arg1 ;
-(EWSSingleRecipientType *)ReceivedRepresenting;
-(void)setReceivedRepresenting:(EWSSingleRecipientType *)arg1 ;
@end

