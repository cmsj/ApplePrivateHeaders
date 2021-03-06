/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface PKPaymentMessage : NSObject <NSSecureCoding> {

	char _allowDeepLink;
	char _hasAssociatedPaymentApplication;
	char _archived;
	NSString* _identifier;
	NSString* _serviceIdentifier;
	NSString* _content;
	NSDate* _messageDate;
	NSDate* _expirationDate;
	unsigned long long _messageType;

}

@property (nonatomic,copy) NSString * identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * serviceIdentifier;                        //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (nonatomic,copy) NSString * content;                                  //@synthesize content=_content - In the implementation block
@property (nonatomic,copy) NSDate * messageDate;                                //@synthesize messageDate=_messageDate - In the implementation block
@property (nonatomic,copy) NSDate * expirationDate;                             //@synthesize expirationDate=_expirationDate - In the implementation block
@property (assign,nonatomic) unsigned long long messageType;                    //@synthesize messageType=_messageType - In the implementation block
@property (assign,nonatomic) char allowDeepLink;                                //@synthesize allowDeepLink=_allowDeepLink - In the implementation block
@property (assign,nonatomic) char hasAssociatedPaymentApplication;              //@synthesize hasAssociatedPaymentApplication=_hasAssociatedPaymentApplication - In the implementation block
@property (nonatomic,readonly) char archiveOnNextTransaction; 
@property (getter=isValid,nonatomic,readonly) char valid; 
@property (assign,getter=isArchived,nonatomic) char archived;                   //@synthesize archived=_archived - In the implementation block
+(char)supportsSecureCoding;
+(id)paymentMessageWithDictionary:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(char)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setContent:(NSString *)arg1 ;
-(NSString *)content;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSString *)serviceIdentifier;
-(void)setMessageType:(unsigned long long)arg1 ;
-(unsigned long long)messageType;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(char)isArchived;
-(void)setArchived:(char)arg1 ;
-(void)setMessageDate:(NSDate *)arg1 ;
-(void)setAllowDeepLink:(char)arg1 ;
-(char)isEqualToPaymentMessage:(id)arg1 ;
-(char)archiveOnNextTransaction;
-(NSDate *)messageDate;
-(char)allowDeepLink;
-(char)hasAssociatedPaymentApplication;
-(void)setHasAssociatedPaymentApplication:(char)arg1 ;
@end

