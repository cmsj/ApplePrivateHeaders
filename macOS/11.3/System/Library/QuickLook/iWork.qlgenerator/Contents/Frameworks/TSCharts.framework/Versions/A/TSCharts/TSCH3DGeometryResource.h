/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSCH3DResource, TSCH3DGeometryArrays, TSCH3DGeometry;

@interface TSCH3DGeometryResource : NSObject {

	int _type;
	TSCH3DResource* _resource;
	TSCH3DGeometryArrays* _arrays;
	TSCH3DGeometry* _geometry;

}

@property (assign,nonatomic) int type;                                          //@synthesize type=_type - In the implementation block
@property (nonatomic,retain,readonly) TSCH3DResource * resource;                //@synthesize resource=_resource - In the implementation block
@property (nonatomic,copy,readonly) TSCH3DGeometryArrays * arrays;              //@synthesize arrays=_arrays - In the implementation block
@property (nonatomic,retain,readonly) TSCH3DGeometry * geometry;                //@synthesize geometry=_geometry - In the implementation block
@property (nonatomic,readonly) char hasArrays; 
+(id)resource;
+(id)resourceWithType:(int)arg1 resource:(id)arg2 ;
+(id)resourceWithType:(int)arg1 resource:(id)arg2 arrays:(id)arg3 geometry:(id)arg4 ;
-(void)setType:(int)arg1 ;
-(int)type;
-(TSCH3DResource *)resource;
-(TSCH3DGeometry *)geometry;
-(void)submitWithProcessor:(id)arg1 ;
-(id)initWithType:(int)arg1 resource:(id)arg2 arrays:(id)arg3 geometry:(id)arg4 ;
-(void)submitToProcessor:(id)arg1 withPortion:(int)arg2 ;
-(char)hasArrays;
-(TSCH3DGeometryArrays *)arrays;
-(id)initWithType:(int)arg1 resource:(id)arg2 ;
-(void)submitNoneWithProcessor:(id)arg1 ;
-(void)submitCapWithProcessor:(id)arg1 ;
@end

