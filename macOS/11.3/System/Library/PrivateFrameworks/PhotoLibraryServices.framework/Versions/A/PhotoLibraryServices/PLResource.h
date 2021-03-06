/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate;


@protocol PLResource <PLResourceIdentity>
@property (nonatomic,readonly) unsigned orientation; 
@property (nonatomic,readonly) long long unorientedWidth; 
@property (nonatomic,readonly) long long unorientedHeight; 
@property (nonatomic,readonly) long long orientedWidth; 
@property (nonatomic,readonly) long long orientedHeight; 
@property (nonatomic,readonly) float scale; 
@property (nonatomic,copy,readonly) id<PLAssetID> assetID; 
@property (nonatomic,readonly) unsigned long long cplType; 
@property (nonatomic,readonly) id<PLResourceDataStore> dataStore; 
@property (nonatomic,readonly) long long dataStoreSubtype; 
@property (nonatomic,readonly) id<PLResourceDataStoreKey> dataStoreKey; 
@property (nonatomic,readonly) unsigned recipeID; 
@property (nonatomic,readonly) short localAvailability; 
@property (nonatomic,readonly) short localAvailabilityTarget; 
@property (nonatomic,readonly) short remoteAvailability; 
@property (nonatomic,readonly) short remoteAvailabilityTarget; 
@property (nonatomic,readonly) int qualitySortValue; 
@property (nonatomic,readonly) id<PLCodecIdentity> codecID; 
@property (nonatomic,readonly) long long dataLength; 
@property (nonatomic,readonly) long long estimatedDataLength; 
@property (nonatomic,readonly) short trashedState; 
@property (nonatomic,readonly) NSDate * trashedDate; 
@required
-(float)scale;
-(unsigned)orientation;
-(id<PLResourceDataStore>)dataStore;
-(long long)estimatedDataLength;
-(id<PLAssetID>)assetID;
-(long long)dataLength;
-(char)isInCloud;
-(short)localAvailability;
-(char)isDerivative;
-(unsigned long long)cplType;
-(NSDate *)trashedDate;
-(long long)orientedHeight;
-(long long)orientedWidth;
-(long long)dataStoreSubtype;
-(char)isPlayableVideo;
-(unsigned)recipeID;
-(id<PLResourceDataStoreKey>)dataStoreKey;
-(char)isDefaultOrientation;
-(float)scaleGivenAssetHasAdjustments:(char)arg1 currentWidth:(long long)arg2 currentHeight:(long long)arg3;
-(short)localAvailabilityTarget;
-(short)trashedState;
-(long long)unorientedHeight;
-(long long)unorientedWidth;
-(short)remoteAvailability;
-(int)qualitySortValue;
-(id<PLCodecIdentity>)codecID;
-(short)remoteAvailabilityTarget;

@end

