/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSCharts/TSCharts-Structs.h>
@class NSMutableArray, TSCH3DTextureAtlasTextureResource;

@interface TSCH3DTextureAtlasTexture : NSObject {

	tvec2<int> _size;
	float _samples;
	NSMutableArray* _labels;
	vector<glm::detail::tvec2<int>, std::__1::allocator<glm::detail::tvec2<int>>>* _positions;
	long long _currentxpos;
	long long _currentypos;
	long long _currentheight;
	TSCH3DTextureAtlasTextureResource* _resource;

}

@property (nonatomic,readonly) tvec2<int> size;              //@synthesize size=_size - In the implementation block
-(tvec2<int>)size;
-(id)initWithSize:(tvec2<int>)arg1 ;
-(id)resource;
-(tvec2<int>)addLabel:(id)arg1 ;
-(void)p_invalidateResource;
-(id)getTextureDataBuffer;
@end

