/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/Versions/A/SpotlightServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MLModelAsset, MLModel;

@interface SSCoreMLInterface : NSObject {

	MLModelAsset* asset;
	MLModel* model;

}
-(id)initWithURL:(id)arg1 error:(id*)arg2 ;
-(id)getDescription;
-(float)predict:(id)arg1 error:(id*)arg2 ;
-(id)initSpecificModel:(id)arg1 error:(id*)arg2 ;
-(id)getVersionString;
@end

