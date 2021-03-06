/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreAudio.framework/Versions/A/CoreAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreAudio/CoreAudio-Structs.h>
#import <CoreAudio/Core_Audio_Gateway.h>
#import <CoreAudio/Core_Audio_IO.h>

@interface Core_Audio_IO_Gateway : Core_Audio_Gateway <Core_Audio_IO> {

	shared_ptr<Client_Side_IO_Gateway>* _client_gateway;

}

@property (assign,nonatomic) shared_ptr<Client_Side_IO_Gateway>* client_gateway;              //@synthesize client_gateway=_client_gateway - In the implementation block
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)handle_server_disconnected;
-(void)handle_io_message:(Device_Token)arg1 with:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)stop_before_io_device_change:(unsigned)arg1 reply:(/*^block*/id)arg2 ;
-(void)start_after_io_device_change:(unsigned)arg1 reply:(/*^block*/id)arg2 ;
-(shared_ptr<Client_Side_IO_Gateway>*)client_gateway;
-(void)setClient_gateway:(shared_ptr<Client_Side_IO_Gateway>*)arg1 ;
@end

