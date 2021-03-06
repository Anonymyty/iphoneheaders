/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:57:04 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKModelObject.h>
#import <libobjc.A.dylib/VKMapLayer.h>

@class NSString;

@interface VKDebugModel : VKModelObject <VKMapLayer> {

	BOOL _geocentric;
	float _fontSize;
	unique_ptr<ggl::FragmentedPool<ggl::Debug::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::Debug::Shader::Setup> > >* _debugShaderSetupPool;
	unique_ptr<ggl::FragmentedPool<ggl::DebugPoints::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::DebugPoints::Shader::Setup> > >* _debugPointsShaderSetupPool;
	unique_ptr<ggl::FragmentedPool<ggl::RenderItem>, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > >* _debugRenderItemPool;
	unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> >* _debugLinesRenderState;
	unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> >* _debugPointsRenderState;
	shared_ptr<ggl::Debug::BaseMesh>* _unitRectMesh;
	BOOL _needsReset;

}

@property (assign,nonatomic) BOOL geocentric;                       //@synthesize geocentric=_geocentric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)reset;
-(void)didReceiveMemoryWarning:(BOOL)arg1 ;
-(BOOL)shouldLayoutWithoutStyleManager;
-(void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(RenderQueue*)arg3 ;
-(unsigned long long)mapLayerPosition;
-(void)flushPools;
-(shared_ptr<ggl::Debug::BaseMesh>*)unitRectMesh;
-(BOOL)geocentric;
-(void)resetPools:(id)arg1 ;
-(void)appendDebugTileCommandsToBuffer:(CommandBuffer*)arg1 forMapTile:(id)arg2 fromLayer:(unsigned long long)arg3 withContext:(id)arg4 withConsole:(DebugConsole*)arg5 ;
-(void)setGeocentric:(BOOL)arg1 ;
@end

