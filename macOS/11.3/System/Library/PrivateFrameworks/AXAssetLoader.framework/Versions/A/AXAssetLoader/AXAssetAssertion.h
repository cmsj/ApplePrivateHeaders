/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AXAssetLoader.framework/Versions/A/AXAssetLoader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol AXAssetAssertion <NSObject>
@property (nonatomic,readonly) NSString * assetType; 
@property (nonatomic,readonly) NSString * clientIdentifier; 
@required
+(id)assertionWithPropertyListRepresentation:(id)arg1 error:(id*)arg2;
-(id)propertyListRepresentation;
-(NSString *)clientIdentifier;
-(NSString *)assetType;

@end
