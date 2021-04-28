/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class PKApplePayTrustHashResponse, NSURL, NSData;


@protocol PKAccountWebServiceApplePayTrustProtocol <NSObject>
@property (nonatomic,retain) PKApplePayTrustHashResponse * hashResponse; 
@property (nonatomic,retain) NSURL * baseURL; 
@property (nonatomic,copy) NSData * publicKeyHash; 
@required
-(NSURL *)baseURL;
-(void)setBaseURL:(id)arg1;
-(NSData *)publicKeyHash;
-(void)setPublicKeyHash:(id)arg1;
-(id)manifestHashWithReferenceIdentifier:(id)arg1;
-(Class)signatureResponseClass;
-(id)endpointComponents;
-(PKApplePayTrustHashResponse *)hashResponse;
-(void)setHashResponse:(id)arg1;

@end
