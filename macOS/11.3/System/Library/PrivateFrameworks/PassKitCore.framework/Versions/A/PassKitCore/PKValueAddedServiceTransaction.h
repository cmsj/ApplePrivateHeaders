/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKValueAddedMerchant, NSString, NSNumber, NSDate;

@interface PKValueAddedServiceTransaction : NSObject <NSSecureCoding> {

	char _didSucceed;
	PKValueAddedMerchant* _merchant;
	NSString* _identifier;
	NSString* _merchantURL;
	NSNumber* _terminalApplicationVersion;
	long long _terminalMode;
	NSDate* _transactionDate;
	long long _error;

}

@property (nonatomic,retain) PKValueAddedMerchant * merchant;                    //@synthesize merchant=_merchant - In the implementation block
@property (nonatomic,retain) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * merchantURL;                             //@synthesize merchantURL=_merchantURL - In the implementation block
@property (nonatomic,retain) NSNumber * terminalApplicationVersion;              //@synthesize terminalApplicationVersion=_terminalApplicationVersion - In the implementation block
@property (assign,nonatomic) long long terminalMode;                             //@synthesize terminalMode=_terminalMode - In the implementation block
@property (assign,nonatomic) char didSucceed;                                    //@synthesize didSucceed=_didSucceed - In the implementation block
@property (nonatomic,retain) NSDate * transactionDate;                           //@synthesize transactionDate=_transactionDate - In the implementation block
@property (assign,nonatomic) long long error;                                    //@synthesize error=_error - In the implementation block
+(char)supportsSecureCoding;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)error;
-(NSString *)identifier;
-(void)setError:(long long)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSDate *)transactionDate;
-(void)setTransactionDate:(NSDate *)arg1 ;
-(char)didSucceed;
-(PKValueAddedMerchant *)merchant;
-(long long)terminalMode;
-(void)setMerchant:(PKValueAddedMerchant *)arg1 ;
-(void)setMerchantURL:(NSString *)arg1 ;
-(void)setTerminalApplicationVersion:(NSNumber *)arg1 ;
-(void)setTerminalMode:(long long)arg1 ;
-(void)setDidSucceed:(char)arg1 ;
-(NSString *)merchantURL;
-(NSNumber *)terminalApplicationVersion;
@end
