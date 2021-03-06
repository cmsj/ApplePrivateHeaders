/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdate.framework/Versions/A/SoftwareUpdate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SUProduct;

@interface SUProductForSUS : NSObject {

	SUProduct* _product;

}
-(id)initWithProductKey:(id)arg1 catalogProductDictionary:(id)arg2 localization:(id)arg3 error:(id*)arg4 ;
-(id)descriptionDataReturningMIMEType:(id*)arg1 ;
-(void)dealloc;
-(id)displayName;
-(unsigned long long)downloadSize;
-(id)displayVersion;
-(long long)restartAction;
@end

