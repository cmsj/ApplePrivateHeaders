/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ParavirtualizedGraphics.framework/Versions/A/ParavirtualizedGraphics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ParavirtualizedGraphics/ParavirtualizedGraphics-Structs.h>
#import <libobjc.A.dylib/PGDisplay.h>

@protocol OS_dispatch_queue, OS_dispatch_source, MTLDevice, MTLBuffer, MTLTexture, MTLFunction;
@class NSString, NSArray, _PGDevice, NSObject, PGDisplayPipelineDescriptor, PGDisplayPipelineCache, _PGDisplayNub;

@interface _PGDisplay : NSObject <PGDisplay> {

	_PGDevice* _device;
	NSString* _name;
	CGSize _sizeInMillimeters;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _modeChangeHandler;
	/*^block*/id _newFrameEventHandler;
	/*^block*/id _cursorGlyphHandler;
	/*^block*/id _cursorShowHandler;
	/*^block*/id _cursorMoveHandler;
	unsigned long long _port;
	unsigned _serialNum;
	unsigned long long _minimumTextureUsage;
	unsigned long long _guestPresentCount;
	unsigned long long _hostPresentCount;
	NSArray* _modeList;
	mutex _displayMutex;
	NSObject*<OS_dispatch_source> _newFrameEventSource;
	id<MTLDevice> _mtlDevice;
	unsigned short _width;
	unsigned short _height;
	id<MTLBuffer> _posBuf;
	id<MTLBuffer> _texBuf;
	id<MTLTexture> _currentFrame;
	BOOL _currentFrameEncoded;
	unsigned long long _vtxCount;
	PGDisplayPipelineDescriptor* _renderPipelineDescriptor;
	PGDisplayPipelineCache* _renderPipelineCache;
	unsigned _iosurfacePixelFormat;
	id<MTLTexture> _gammaTableTex;
	id<MTLFunction> _fragmentFunctionWithGammaTable;
	_PGDisplayNub* _nub;
	mutex _nubMutex;

}

@property (nonatomic,readonly) NSString * name;                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) CGSize sizeInMillimeters;                            //@synthesize sizeInMillimeters=_sizeInMillimeters - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                  //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) id newFrameEventHandler;                             //@synthesize newFrameEventHandler=_newFrameEventHandler - In the implementation block
@property (nonatomic,readonly) id cursorGlyphHandler;                               //@synthesize cursorGlyphHandler=_cursorGlyphHandler - In the implementation block
@property (nonatomic,readonly) id cursorShowHandler;                                //@synthesize cursorShowHandler=_cursorShowHandler - In the implementation block
@property (nonatomic,readonly) id cursorMoveHandler;                                //@synthesize cursorMoveHandler=_cursorMoveHandler - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PG35 cursorPosition; 
@property (nonatomic,readonly) unsigned serialNum;                                  //@synthesize serialNum=_serialNum - In the implementation block
@property (nonatomic,readonly) unsigned long long minimumTextureUsage;              //@synthesize minimumTextureUsage=_minimumTextureUsage - In the implementation block
@property (nonatomic,readonly) unsigned long long guestPresentCount;                //@synthesize guestPresentCount=_guestPresentCount - In the implementation block
@property (nonatomic,readonly) unsigned long long hostPresentCount;                 //@synthesize hostPresentCount=_hostPresentCount - In the implementation block
@property (nonatomic,readonly) unsigned long long port;                             //@synthesize port=_port - In the implementation block
@property (nonatomic,copy) NSArray * modeList;                                      //@synthesize modeList=_modeList - In the implementation block
@property (assign,nonatomic) _PGDisplayNub * nub;                                   //@synthesize nub=_nub - In the implementation block
@property (nonatomic,readonly) id modeChangeHandler;                                //@synthesize modeChangeHandler=_modeChangeHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initSerialNumDB;
+(BOOL)reserveSerialNum:(unsigned)arg1 ;
+(void)unreserveSerialNum:(unsigned)arg1 ;
-(void)dealloc;
-(NSString *)name;
-(unsigned long long)port;
-(NSObject*<OS_dispatch_queue>)queue;
-(SCD_Struct_PG35)cursorPosition;
-(unsigned)serialNum;
-(CGSize)sizeInMillimeters;
-(void)setNub:(_PGDisplayNub *)arg1 ;
-(id)initWithDevice:(id)arg1 descriptor:(id)arg2 port:(unsigned long long)arg3 serialNum:(unsigned)arg4 ;
-(_PGDisplayNub *)nub;
-(id)cursorGlyphHandler;
-(id)cursorShowHandler;
-(id)cursorMoveHandler;
-(id)newFrameEventHandler;
-(void)presentFrame:(id)arg1 iosurfacePixelFormat:(unsigned)arg2 task:(id)arg3 gammaTableVirtualOffset:(unsigned long long)arg4 gammaTableMappedLength:(unsigned long long)arg5 gammaTableEntryCount:(unsigned)arg6 gammaTableSum:(unsigned)arg7 completionBlock:(/*^block*/id)arg8 ;
-(void)setModeList:(NSArray *)arg1 ;
-(NSArray *)modeList;
-(id)modeChangeHandler;
-(void)encodeRenderFrame:(id)arg1 toDisplay:(id)arg2 withCmdBuf:(id)arg3 viewport:(SCD_Struct_PG38)arg4 ;
-(void)internalEncodeCurrentFrameToCommandBuffer:(id)arg1 texture:(id)arg2 region:(SCD_Struct_PG37)arg3 ;
-(void)modeChangeWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 iosurfacePixelFormat:(unsigned)arg3 ;
-(void)updateGammaTable:(id)arg1 virtualOffset:(unsigned long long)arg2 mappedLength:(unsigned long long)arg3 entryCount:(unsigned)arg4 sum:(unsigned)arg5 ;
-(BOOL)encodeCurrentFrameToCommandBuffer:(id)arg1 texture:(id)arg2 region:(SCD_Struct_PG37)arg3 ;
-(unsigned long long)minimumTextureUsage;
-(unsigned long long)guestPresentCount;
-(unsigned long long)hostPresentCount;
@end

