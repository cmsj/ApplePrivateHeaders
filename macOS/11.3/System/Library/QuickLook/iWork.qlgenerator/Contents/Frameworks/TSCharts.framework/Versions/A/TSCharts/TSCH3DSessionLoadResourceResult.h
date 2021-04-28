/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSCH3DResourceHandle, TSCH3DResource;

@interface TSCH3DSessionLoadResourceResult : NSObject {

	char _generated;
	char _uploaded;
	char _failed;
	TSCH3DResourceHandle* _handle;
	TSCH3DResource* _resource;

}

@property (assign,nonatomic) char generated;                             //@synthesize generated=_generated - In the implementation block
@property (assign,nonatomic) char uploaded;                              //@synthesize uploaded=_uploaded - In the implementation block
@property (assign,nonatomic) char failed;                                //@synthesize failed=_failed - In the implementation block
@property (nonatomic,retain) TSCH3DResourceHandle * handle;              //@synthesize handle=_handle - In the implementation block
@property (nonatomic,retain) TSCH3DResource * resource;                  //@synthesize resource=_resource - In the implementation block
-(id)init;
-(TSCH3DResourceHandle *)handle;
-(char)failed;
-(void)setHandle:(TSCH3DResourceHandle *)arg1 ;
-(char)uploaded;
-(void)setUploaded:(char)arg1 ;
-(TSCH3DResource *)resource;
-(char)exists;
-(void)setResource:(TSCH3DResource *)arg1 ;
-(void)setFailed:(char)arg1 ;
-(void)setGenerated:(char)arg1 ;
-(char)generated;
@end
