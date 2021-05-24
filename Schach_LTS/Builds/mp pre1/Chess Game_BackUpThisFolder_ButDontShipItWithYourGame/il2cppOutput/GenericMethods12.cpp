#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32Enum,UnityEngine.Rendering.TProfilingSampler`1<System.Int32Enum>>[]
struct EntryU5BU5D_t4DB7F793CABC1402AA363E986BE0FB6835900D6A;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,UnityEngine.Rendering.TProfilingSampler`1<System.Object>>[]
struct EntryU5BU5D_tD928CE098E19948E690ADC066E1835C1FAF4DA98;
// System.Collections.Generic.Dictionary`2/Entry<System.ValueTuple`2<System.Type,System.Int32>,System.Collections.Generic.Stack`1<System.Object>>[]
struct EntryU5BU5D_t3A8017CC4EE67EFA09EA37759A1D3B104909DEAF;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32Enum,UnityEngine.Rendering.TProfilingSampler`1<System.Int32Enum>>
struct KeyCollection_t1C90318A6567045139EBC231CF40E6C06A96514E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.Rendering.TProfilingSampler`1<System.Object>>
struct KeyCollection_t65F43A60DF8B33AB7A55C07DB79C11008BBE76BE;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.ValueTuple`2<System.Type,System.Int32>,System.Collections.Generic.Stack`1<System.Object>>
struct KeyCollection_t2B403A51667B71437C537935FEC07380FB0E33FC;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32Enum,UnityEngine.Rendering.TProfilingSampler`1<System.Int32Enum>>
struct ValueCollection_tF44D73CC5176355FDA5BCE29F918B35A059CA7FA;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.Rendering.TProfilingSampler`1<System.Object>>
struct ValueCollection_tE48C60BC9476B8B78AC869EF3D1F9F25F7F6CDC3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.ValueTuple`2<System.Type,System.Int32>,System.Collections.Generic.Stack`1<System.Object>>
struct ValueCollection_t8A55512B72BC15D61766D269D351EF93F2E10C98;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Stack`1<UnityEngine.Rendering.RTHandle>>
struct Dictionary_2_tEF4C65656E284A264F8D30CEB002FFE814FEE380;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,UnityEngine.Rendering.TProfilingSampler`1<System.Int32Enum>>
struct Dictionary_2_t6D38279CB9584FA5B02AC661A0C9BEC4044E95E5;
// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Rendering.TProfilingSampler`1<System.Object>>
struct Dictionary_2_t528A508F31AD8427EF48D14234B4B780DA7CC05E;
// System.Collections.Generic.Dictionary`2<System.ValueTuple`2<System.Object,System.Int32>,System.Object>
struct Dictionary_2_t3D0F521AB54A429DFB2CDCEC6D9F496FEC6C84D8;
// System.Collections.Generic.Dictionary`2<System.ValueTuple`2<System.Type,System.Int32>,System.Collections.Generic.Stack`1<System.Object>>
struct Dictionary_2_tDB0173F7367ADD8C863509F3869BC63705A9B63E;
// System.Collections.Generic.IEqualityComparer`1<System.Int32Enum>
struct IEqualityComparer_1_tB1D7C3E9630A5AC8D6B419BAA9D339CD161B580C;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_tAE7A8756D8CF0882DD348DC328FB36FEE0FB7DD0;
// System.Collections.Generic.IEqualityComparer`1<System.ValueTuple`2<System.Type,System.Int32>>
struct IEqualityComparer_1_t957E87C86C1AE81781566FA3B812141764DD6B99;
// System.Collections.Generic.IList`1<UnityEngine.Transform>
struct IList_1_t2CE05980F8B9CC1149914C41DDAB66D7ABFC902A;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.ValueTuple`2<System.Int32,UnityEngine.Rendering.RTHandle>>
struct List_1_tB843D4B607172851A36CA6C7A9E10D5D2637750F;
// System.Collections.Generic.List`1<System.ValueTuple`2<System.Object,System.ValueTuple`2<System.Object,System.Int32>>>
struct List_1_tC865E14BB695393247CEFB631C575094B8701079;
// System.Collections.Generic.List`1<System.ValueTuple`2<System.Object,System.ValueTuple`2<System.Type,System.Int32>>>
struct List_1_tC6996D2CBDA52BAA8F08554F7E920E603DB33417;
// System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph/RenderPass>
struct List_1_t7BE901F61F1A406FC143D643C9923B05DE767845;
// System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphMutableResource>
struct List_1_tEBA98BE7FBE0C275FAEB779DDACD275830D43BB8;
// System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResource>
struct List_1_t3DB3A57DAA1C2A9B312E3B24A7C03D028DB1097A;
// System.Collections.Generic.List`1<UnityEngine.MaterialPropertyBlock>
struct List_1_t9A67E44189F7059A93A2A8AFFAC019B210C1C6DB;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Boolean>
struct Transformer_1_t19A7258583FA1642B75695805A3C675EA09C25E5;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Byte>
struct Transformer_1_tEF5D2D9847B566056189D34781B028AAC143AE94;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Char>
struct Transformer_1_t324CE6226D2DB02125521E43B7578823697F11C9;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transformer_1_t986FAAB941679A366CE204DA40A2C414683DDE0A;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.DateTime>
struct Transformer_1_tDA2EE3A4D871B443E8A28C71B0E0164A41D3DA02;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.DateTimeOffset>
struct Transformer_1_tBE57A838EA9C265FA94567A0081AA9D93DDC74F8;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Decimal>
struct Transformer_1_tA51CB05B3742EC3F46FA501481261EDEB730DABD;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Diagnostics.Tracing.EmptyStruct>
struct Transformer_1_t4BE562A96C7C1F79332E47AAC9A46C3302AB47A2;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Double>
struct Transformer_1_t3D2772F81DACC0E761A22F7C74C18AD24C36D58D;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Guid>
struct Transformer_1_t8542C56C05EB3E22016B2903F0EDCAC5D051355B;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Int16>
struct Transformer_1_t436942B036692C49C596B552368FD0D9AEB19996;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Int32>
struct Transformer_1_tD02BD295F6960A844F4E3D7D4CA9F0FBD4007780;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Int64>
struct Transformer_1_t4FF63122CA8338DDEE466FBA386674D90B0DA997;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.IntPtr>
struct Transformer_1_tD37A651949FE156BFC86946E76F3BEA93F428054;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Object>
struct Transformer_1_tD19681DA49D4AA38D8D48CE42752CBE15718DB47;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.SByte>
struct Transformer_1_t664F7EECE18DF51BE5DD248D5B93731F8A23DCD4;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Single>
struct Transformer_1_tB28894046684B559EDC3DE1E3481E408A5BE3A89;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.TimeSpan>
struct Transformer_1_t1AB12F230CAB2407D401317A65F9A5463404A073;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.UInt16>
struct Transformer_1_t9AB703D7D55E206EFFA2B0270C980C290C374E32;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.UInt32>
struct Transformer_1_t4FD7FB274F8A13E577B2C68C562542FB8BE19BF5;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.UInt64>
struct Transformer_1_tF779A9DA86F954469CABF99E43E5D2126D6C7558;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.UIntPtr>
struct Transformer_1_t1C9601B96FC325D98CD121FFF18A903AE06F926D;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Boolean>
struct Transformer_1_t8ABB0411B7298DFBBC20B58387ECF4E74BFBDEDD;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Byte>
struct Transformer_1_t65E3C27F47E4C586AEEB98C5F5F7EC12B7487F51;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Char>
struct Transformer_1_t94FEFA2C1D7C52972E627FEFFA99284D0DDC25F3;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transformer_1_t240346D763F8BC997367E7F857B6F69D68360595;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.DateTime>
struct Transformer_1_t4CC0B6F21608AE009CB235BE9B1BF15A9B0E3431;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.DateTimeOffset>
struct Transformer_1_t92CEE2D0E9F82F259F4B10113D85847D8DE54757;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Decimal>
struct Transformer_1_tE3062CB768903660C5318F9D9B7DDE15A714588C;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Diagnostics.Tracing.EmptyStruct>
struct Transformer_1_tBD1BBF19FDEEE663FCCC49AC10AADA1B059D325C;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Double>
struct Transformer_1_tFA2CCE2417FF56944AD841B7ED04360314120497;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Guid>
struct Transformer_1_t10C9C25A5618D14E4E001BDF9E20419A10A6DFB9;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Int16>
struct Transformer_1_tF7F040CDF505A8BEF12BEBEAA31FFD9BD43FF8F8;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Int32>
struct Transformer_1_tA741C25CF64E7496C977BB826C7D60FA98E8C970;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Int64>
struct Transformer_1_t23A5C3116CBF683F9F68EE3DDFF0E12802831AC4;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.IntPtr>
struct Transformer_1_tDEDEB8C2D8BA02B307B0EDD7EEC5D44DDFB05231;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Object>
struct Transformer_1_t026BF5A032AD1B2D3EEDA845C07E1202DFCBF82F;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.SByte>
struct Transformer_1_t1358C14103D206B57FA822096A13BEDC1A7A4048;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Single>
struct Transformer_1_t761E0F084572634E94674D7C1912B56771C73045;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.TimeSpan>
struct Transformer_1_tD23E5E6A1A391F332A34AA4663D09426093C002A;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.UInt16>
struct Transformer_1_tD6009487878B22E34FDE5E3FBDC4B4E93CF5BC77;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.UInt32>
struct Transformer_1_t385ECD51AD4E2A1E86876F87BF89844FDE07DD32;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.UInt64>
struct Transformer_1_t0698CC99B4FA18A0050698BCB1D646E8C1C22984;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.UIntPtr>
struct Transformer_1_t6585D4102CCBAE872252AC5E0732CC8EF79DBB20;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Boolean>
struct Transformer_1_t2DBEC8D0800B8F041E03F876ABF5AF7D3DFE5D7B;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Byte>
struct Transformer_1_t2EE6D7CD39A5C2027ECB941A3759A9EBA3F0BB0C;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Char>
struct Transformer_1_t79A0EA03C0758462B77611F0C5FF7EB4477F9D95;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transformer_1_t3FB65B12F9B30A5AA121C6225ABBD98671D135DE;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.DateTime>
struct Transformer_1_t00DC76E5BE87873705F91E95AEF9B620DA10C64A;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.DateTimeOffset>
struct Transformer_1_tE5EF3DB7DB9777B2A122766AB8A2227D1C094B79;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Decimal>
struct Transformer_1_t25C83F04D27EBB3953BD3252D27F944B7081EFD4;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Diagnostics.Tracing.EmptyStruct>
struct Transformer_1_t0FBAD50C82E7A4C7D93A7E4DAE1B7765DEC256E8;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Double>
struct Transformer_1_t68826869D55A324A082EE643E06DFE0549C43F1B;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Guid>
struct Transformer_1_tAE2C376EED3A46831CB52406C90F7FF43F1F9F05;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Int16>
struct Transformer_1_t09EADD81A9C2CA1C3043FA5CD6706CA1530666E0;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Int32>
struct Transformer_1_t9E7C8EB2E7DA583C3C11956C5E93F3D313CE08D6;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Int64>
struct Transformer_1_t8B62B5B7F2FBA49FF26EC65A644535089EF385F2;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.IntPtr>
struct Transformer_1_tE65E26BDA2D86514F0E4F7DCA655FD6391C3498A;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Object>
struct Transformer_1_t65992AEC496277643CBC80A2F9BED723063EB848;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.SByte>
struct Transformer_1_t8A499D6FEF7443CA4CE5419B243505BB61DE7DEF;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Single>
struct Transformer_1_t69D9451801937FE2AFF99FCCE268AA878D643D9B;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.TimeSpan>
struct Transformer_1_tE86E929A9B1ED9F0643091DE20F815B92553CA94;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.UInt16>
struct Transformer_1_t4021B15333DAA448023DFF6ED2E859037D86D3D9;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.UInt32>
struct Transformer_1_t1D933EC313B2537F0734DE0A2C329C45BFC02BEE;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.UInt64>
struct Transformer_1_tB4F33CE42FA8CDA6C1AEB382F3C767D3D702427D;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.UIntPtr>
struct Transformer_1_t64BE2DF002F043C82C776B57E74B06CBF540475A;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Boolean>
struct Transformer_1_tEAC0B3C94575ECFC1F5F52CF95B8281D45B17E82;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Byte>
struct Transformer_1_tEE83BA38EF2ECC4720D526BBB03AD2D7847DC673;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Char>
struct Transformer_1_t9BA41A256E2DA69FF4771DEB014C7A916468BC66;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transformer_1_t522A3AB35D286FE6FF0D73E32E18AF9BA2C889B6;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.DateTime>
struct Transformer_1_tCA45FD544A9D029E08729452F32B044016B2F8EE;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.DateTimeOffset>
struct Transformer_1_t857CBA0AC2F70C8D74D8183C19537F7A692F21A7;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Decimal>
struct Transformer_1_tE30A5AE1F549407B3087EBD3EC6E8DB713D78DC2;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Diagnostics.Tracing.EmptyStruct>
struct Transformer_1_t41E828E06402D572E82833CAFA0E9727745F7A0D;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Double>
struct Transformer_1_tD1B097B6BB34F0B4B3455970FC79E6A585DE5B8A;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Guid>
struct Transformer_1_t39D48650F87DB03E776EE44D5C8F156643CCD9A0;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Int16>
struct Transformer_1_tC51C59F619800C8468ED4694D7779761A5403071;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Int32>
struct Transformer_1_tCB26A79652B363A8064BBAF43700A09A80610C91;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Int64>
struct Transformer_1_tB3B4F4C80F506532A9BC19E9995C82DE17840E96;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.IntPtr>
struct Transformer_1_t60B3D9EF53100FA49F00B43536652E9473B31171;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Object>
struct Transformer_1_t55A8AAC336D2E181D0CC38D11BD1B30145E6479D;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.SByte>
struct Transformer_1_t01DCD4DD4A9D8250EDA7C3884A31ADCBC0CA2F31;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Single>
struct Transformer_1_tDC0440FA1979CE8CAEE05E55C3F77B191B3864A5;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.TimeSpan>
struct Transformer_1_t5D03480C8430BB4B110B1A825293797FEA351E99;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.UInt16>
struct Transformer_1_t8A89FB68F46FF4353E966CC00B908CA34497EA95;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.UInt32>
struct Transformer_1_t0AFADFC854814929C26DD9D901BE57FF25AD0FAE;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.UInt64>
struct Transformer_1_t1DABC0789361F050A97DCB9B0BF426488849447B;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.UIntPtr>
struct Transformer_1_tB15772C7E9B7C5700966A8D43542601D4E3C1E66;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Object,System.Object>
struct Transformer_1_t338D76BCAA91120B467D3111015F22FB4F0FD2FA;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Boolean>
struct Transformer_1_t79570F2F3007DB1835D814B8075FDC98BC3553A7;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Byte>
struct Transformer_1_tF8540D89C13FFD7703F79D80D228D878E23A3ADE;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Char>
struct Transformer_1_tA6C8CCCFAE41F969307DFD6B15049A2AC4E87B2E;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transformer_1_t42D4002780D07F2123783F0D69A304CD6984F13D;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.DateTime>
struct Transformer_1_t7B71FCE554A579C8F8EE31C925E7CC3A260F65B0;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.DateTimeOffset>
struct Transformer_1_t0C4CCE96CE8A1C5FA519A098E2CBD37BEC2CA324;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Decimal>
struct Transformer_1_tC8E702F6B3A43AAD921E235014B8BEE380D6C8E6;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Diagnostics.Tracing.EmptyStruct>
struct Transformer_1_tBEAC8A938CBDB8AAB69661EFA8EA0FB141525D53;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Double>
struct Transformer_1_tF0766B96906F251FDCA58F9C63D53C429A053601;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Guid>
struct Transformer_1_tBBF50A3F30EEFDE66991F29F64E2D0A0455DE463;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Int16>
struct Transformer_1_tA87CAE242D2B98DEB22E378E1E67ABA48B2C74D4;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Int32>
struct Transformer_1_tD3A676069C04AAC638676241B25E06E84FEDDF60;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Int64>
struct Transformer_1_tE0C44E54BCD5DF5FF3AC9F52C13F1428FBBD4084;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.IntPtr>
struct Transformer_1_tAE4605051B411219A47F37FD57F817C772C5D831;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Object>
struct Transformer_1_t2100917DAFFEBF22F25BC5382C00308AE7962D49;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.SByte>
struct Transformer_1_t745DB47A09FCB8577D6C816C1169CFECBB32F2C5;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Single>
struct Transformer_1_tBF9E21F5E62125133BAE8AB29F7A5FF8368A8867;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.TimeSpan>
struct Transformer_1_tF26DF9ED555578458A4BEBCC536B42CFE02ACC80;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.UInt16>
struct Transformer_1_t8D669EF524B3DA7294AF5ECC32689F786670F3BC;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.UInt32>
struct Transformer_1_t2C09253351F9C203CF31F34A19DE66BEA03581F3;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.UInt64>
struct Transformer_1_tCF1372796CC314E10F8635C4972C44383BAC7023;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.UIntPtr>
struct Transformer_1_tBE6DD3E5AECE0264800ECFE10CF373FC541893E1;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Boolean>
struct Transformer_1_t199C978828CCDD3DC4B333BD031B5DA73DE2C968;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Byte>
struct Transformer_1_t6F5F45E771B014CBE6BC711CD4C78E85A692E83F;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Char>
struct Transformer_1_tBBFF9537117C5BC9379D753F5293135DB33DF769;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transformer_1_t43360C920C6CB99E177E7D0C21F4631EB7353195;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.DateTime>
struct Transformer_1_tFF97AD2C8962456276364E309A52E6DE33100D56;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.DateTimeOffset>
struct Transformer_1_t43FCC452C755864725F9DF93DFBE108575461B01;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Decimal>
struct Transformer_1_t0FD280BFFA34F4D2822CCA89C0E579D1D039C6EC;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Diagnostics.Tracing.EmptyStruct>
struct Transformer_1_t4E404370A1452595E3C5DB7882E5D8953D10E1A5;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Double>
struct Transformer_1_t96993E76204149647596BB8B93F89AF01BBC2DA1;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Guid>
struct Transformer_1_tC04472BECF0E4CEEAC0DD81250C1C45100A49760;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Int16>
struct Transformer_1_t752D0C62D1A2E9A30D3F6E06FB35683298BACEE8;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Int32>
struct Transformer_1_tA6B55D2D785634BAC127EF306F25AD47252837A5;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Int64>
struct Transformer_1_t634A2D481C50B029D59732E0A8E9D02DF66A0551;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.IntPtr>
struct Transformer_1_t873B2E4C2418F756278367655E1C64D654382460;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Object>
struct Transformer_1_t892625DF88EAC62E91E8CCC189CB451B8DC38F37;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.SByte>
struct Transformer_1_t1996E09F6BED0E887AFBD3B5A3AE1C93DE6BF87A;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Single>
struct Transformer_1_t4E1FF663FF50350704657A112291CD7D7596CEF1;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.TimeSpan>
struct Transformer_1_t91133D744423C020A19D0092C4FC03B6D3A4DFEE;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.UInt16>
struct Transformer_1_tE9522CA0DE0A4BE7D2EC9C999D7BDD2F4344FE62;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.UInt32>
struct Transformer_1_t1438E2C5AF736F2BAA3201667918AA58BE8FA46C;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.UInt64>
struct Transformer_1_t9D893B0CF47F60B5A1B332F156AE7885A7FA04AD;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.UIntPtr>
struct Transformer_1_tEF0B2B94C98E007D79F1E9A305F95F950D695A78;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Boolean>
struct Transformer_1_tF0E9BE6348CE010BB238AC31417785A08A6FB691;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Byte>
struct Transformer_1_tB3723D31B530FDEAA4A1F13AA0708DA982630899;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Char>
struct Transformer_1_t5476CAC37A40442328D49FE071C30E88285071D4;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transformer_1_t0FB7630995436BE02A2527779DBC4F2527867EEA;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.DateTime>
struct Transformer_1_t5D7AABD550DAD91D1A5365F5D8EF54C4DA2D3C52;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.DateTimeOffset>
struct Transformer_1_t928A4BC9752332E7976045EDA7D13F6580E95E62;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Decimal>
struct Transformer_1_tDCFCB89419FEE534E3F73EC59CE6765F40E3CDDC;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Diagnostics.Tracing.EmptyStruct>
struct Transformer_1_tC99356A59E2E936732EB9B87073CB69F8D9A0E56;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Double>
struct Transformer_1_tBA40A0C65141CC06E9FE7E2B859F14B7B186F5D6;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Guid>
struct Transformer_1_tEB01E6A2E0B3756D68B5715EC212184D5FF1583E;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Int16>
struct Transformer_1_t2F0D48F97FB9DB755CBD7D8BD1063744902DD7D4;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Int32>
struct Transformer_1_tEE904E877A0E7069658C31FC99833B17AC05794C;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Int64>
struct Transformer_1_tB77123930E8D4DBBDFEFB1F00D7ABD5F5862C41D;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.IntPtr>
struct Transformer_1_tD21324C229A06C2679EF7ADBF30B4721FCE846A9;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Object>
struct Transformer_1_t9591C03D292D1491DC84BED40FA4074B4BA228BA;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.SByte>
struct Transformer_1_tB8774B9E44E29CAB971A668FD6481EE169AB7512;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Single>
struct Transformer_1_tF0690E4E722BA56F3D7C83E9AEB806F0B61B361D;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.TimeSpan>
struct Transformer_1_t8B10503B337E6FE4E07A3B64D22B131931C9A9F4;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.UInt16>
struct Transformer_1_t047D5C4AD3C79057AB7D69ECC9D23F74520D09D6;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.UInt32>
struct Transformer_1_t31C88D9234A257CF232D08C38BBC668EA052939A;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.UInt64>
struct Transformer_1_t1C223741D12F9A057F5F088DE61B4E5D53913211;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.UIntPtr>
struct Transformer_1_tEB25E9328D7461EC15D82291238C49E2485032FD;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Boolean>
struct Transformer_1_tE1D6D1C9A05B546D9C9CE23F63F38C39519B5CF5;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Byte>
struct Transformer_1_tA04593391E3C9151CF09B88E7F0B95B6EED79BFF;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Char>
struct Transformer_1_t6A70E5F51E34115D67058F5FBD3AD020056FE5F9;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transformer_1_t68FC4FB75CD82563AB347351CEFAE5414DA6F5EA;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.DateTime>
struct Transformer_1_t3914ABAA4D6712C66DD4949F2BA84F3EC15B4FA3;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.DateTimeOffset>
struct Transformer_1_tF6A13C624CBEF022B6BF46EA8998763A1BCF8A60;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Decimal>
struct Transformer_1_t1CCCD2A03706FE289179D42973958253711E1220;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Diagnostics.Tracing.EmptyStruct>
struct Transformer_1_t26EAA5376E027613D84066BFDACD29135BC0417F;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Double>
struct Transformer_1_tF7A377BD38E31E579BBB868F25B50E99BE887082;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Guid>
struct Transformer_1_t7A3CC6284B43CD7AE97F37A34B608ACB60C9BBF4;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Int16>
struct Transformer_1_t07F206606D946D6F7126E2639D2BA30EE77B275C;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Int32>
struct Transformer_1_tF8885F335E1C8610DD2BC9AC39EF6912377CA731;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Int64>
struct Transformer_1_tFC99DD5D67093DCEBB44F3A5BFDC47FDBBD7CF71;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.IntPtr>
struct Transformer_1_t8E4B28C9AAE813C657018A0863EED6247E00BC14;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Object>
struct Transformer_1_t402296E3476F5F09B16B675F17D3CDA6FCB34A9B;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.SByte>
struct Transformer_1_t2F20C0EB7F9357AF924B13ACE76627B27A3EE8C6;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Single>
struct Transformer_1_t589CB07AE354480F71F892CCEF416B4B90FD20E1;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.TimeSpan>
struct Transformer_1_t92CD444E28392786C719A80E3BD6F19859C0F66F;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.UInt16>
struct Transformer_1_tEBBF3209CF2963A466018B425608A6F9A5DB0E30;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.UInt32>
struct Transformer_1_t8958FB9131F13E8258DE33FA6B69C3FF6197E880;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.UInt64>
struct Transformer_1_t3B28CAE7458C713C7593265008775661D4E2EBAE;
// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.UIntPtr>
struct Transformer_1_t77F1FDC69827B944451ACE5D2F9AF2FF2BBE0913;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.InvalidOperationException
struct InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.UInt16[]
struct UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E;
// System.UInt32[]
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB;
// System.UInt64[]
struct UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4;
// System.ValueTuple`2<System.Object,System.ValueTuple`2<System.Type,System.Int32>>[]
struct ValueTuple_2U5BU5D_t2028C42ABD8621EC52E4A5E983461EF701F2AF06;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t252EBD93E225063727450B6A8B4BE94F5F2E8427;
// System.Xml.Schema.XmlListConverter
struct XmlListConverter_tC0C9B12C2CB4282697C8A738419B3595FB013DC2;
// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_tE97B70BB8298B2D6FDDBCCB14EEE99EC4806BBA9;
// System.Xml.Schema.XmlValueConverter
struct XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E;
// UnityEngine.Color32[]
struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_t0D76F16B2B9E513C3DFCE66CDCAC1768F5B6488C;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler>
struct EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler>
struct EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler>
struct EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler>
struct EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler>
struct EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler>
struct EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler>
struct EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler>
struct EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler>
struct EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>
struct EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler>
struct EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler>
struct EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler>
struct EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IScrollHandler>
struct EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler>
struct EventFunction_1_t7521247C87411935E8A2CA38683533083459473F;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler>
struct EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler>
struct EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173;
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderFunc`1<System.Object>
struct RenderFunc_1_t6963E4F494F441886F42D47BFB357196C662DDB7;
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph
struct RenderGraph_t658E15F42351EE5E92398FC4EF9B25E75AC71042;
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph/RenderPass
struct RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035;
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph/RenderPass[]
struct RenderPassU5BU5D_t8CDB1B9B512117344C96F8DE5B0BB4ABE8D79B23;
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphDebugParams
struct RenderGraphDebugParams_t91BFF8C4DDFB7554599BA1A4441F0D82BB9F6908;
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphLogger
struct RenderGraphLogger_t134928C4D6F50853ED77DA1DF486B6C3719A360C;
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphMutableResource[]
struct RenderGraphMutableResourceU5BU5D_tC5DD0DF1CAE7DE95421B26158C9F5E24169156CA;
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphObjectPool
struct RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735;
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry
struct RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Object[]
struct ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9;
// UnityEngine.Profiling.CustomSampler
struct CustomSampler_tD50B25148FC97E173885F9C379C8F89F067343C8;
// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD;
// UnityEngine.Rendering.CullingAllocationInfo
struct CullingAllocationInfo_t6FB719F375B06A0C10B87DB287A8143452406A14;
// UnityEngine.Rendering.DynamicArray`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/RendererListResource>
struct DynamicArray_1_t99828E6CE3CAE9F50FE06FC51527BE6763483CFF;
// UnityEngine.Rendering.DynamicArray`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/TextureResource>
struct DynamicArray_1_tF03ED6854CC538AE7AC37C22C920521E3AABD2A8;
// UnityEngine.Rendering.HighDefinition.MigrationStep`2<System.Int32Enum,System.Object>[]
struct MigrationStep_2U5BU5D_tBC3DCCCDDC4D6F13B471C0C1E2B649A21D8714A7;
// UnityEngine.Rendering.ProfilingSampler
struct ProfilingSampler_t00574F1AB7FB336BBFCE3DE575A86B5DD2C9F99D;
// UnityEngine.Rendering.RTHandleSystem
struct RTHandleSystem_t767D689BA191A921429672BF8830F8AC24ADC36F;
// UnityEngine.Rendering.RenderTargetIdentifier[]
struct RenderTargetIdentifierU5BU5D_t57069CA3F97B36638E39044168D1BEB956436DD4;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.Transform[]
struct TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct ObjectPool_1_t374B58F94BA7C0BCA89D9C26B26A9994139B89EC;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_UI[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_RenderPipelines_Core_Runtime[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_RenderPipelines_HighDefinition_Runtime[];
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_tA3BAB2482E28132A7CA9E0E21393027353C28B54_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral24AD1E07EB96FE8A3552CDF928F010338C1E0013;
IL2CPP_EXTERN_C String_t* _stringLiteralD14430F2509574E600AA8D7284D7B032B55DE20F;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncGPUReadbackRequest_GetData_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m3103D253E0298B049D6FE4206A9E18E716E5E2B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncGPUReadbackRequest_GetData_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m740336FEC66F6FA954ABCDDB886C64B4D5D7B867_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mB55E82A159A823B2EFD0951D81D9FFB2D1537AEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m5A246BE1478D5AAF776C27C639FA7A2CFC99FCF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m011F5FA3CC5FBB00875D2C3615DED27D6CE38D60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAAACAA53634A9E7D20D94B3333B23E6F6F5B2031_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m0B6FAC22324A918CFA9E37637257E82823029437_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mFB4F65ABD2DD0845C2448493238223FB4079A90C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m88FE4B6F43A2CD95BB9ECF8D801F206618FFFFB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_mD632EB4DA13E5CAEC62EECFAD1C88818F1223E20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_m54114F5D347F44F2C0FD45AF09974A5B55EC5373_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_get_Count_m8803B4178385D39338A1EDDC39FE6D8152F01A1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_2__ctor_m165066C301451137EF0B0A96B654B80E3D6328B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_2__ctor_m2608A054E27ECC5D65915B37E53803ADAA9A47BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* MigrationDescription_2_t2D210D8AE120A486A4BA618BCCF0662F35EC9242_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* MigrationStep_2_t57890783D2260455C7830D5E94EF6D325F12A3DA_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ProfilingSampler_t00574F1AB7FB336BBFCE3DE575A86B5DD2C9F99D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RenderGraphBuilder_t9026010D496B7D7D33BBFD0350D5014FAC7EF312_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RenderGraph_t658E15F42351EE5E92398FC4EF9B25E75AC71042_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RenderPass_1_t8E26DF96C7D796453D4050436A62B01576E92BA8_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RenderTargetIdentifierU5BU5D_t57069CA3F97B36638E39044168D1BEB956436DD4_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TProfilingSampler_1_t3F47BE3BE863DDDE0DE589A0944497506881D2CF_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TProfilingSampler_1_tA6DAD0F898FE80D447901785B60329673C3DFAA6_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t AsyncGPUReadbackRequest_GetData_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m3103D253E0298B049D6FE4206A9E18E716E5E2B1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AsyncGPUReadbackRequest_GetData_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m740336FEC66F6FA954ABCDDB886C64B4D5D7B867_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_mB2DEEAF3F86ED5BECA570432FD5440948D5CB3B8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ExecuteEvents_GetEventHandler_TisRuntimeObject_m4A0A387AEA9C47C3DB85EAB3FE49C0689C0FFFA8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameObject_GetComponentsInChildren_TisRuntimeObject_mFF238916BEA468E58A72E7C1EE6F5D9729CA4D43_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameObject_GetComponentsInParent_TisRuntimeObject_m80BC53BC6926863115F0039372F2CB123D4A44BE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameObject_GetComponents_TisRuntimeObject_m5EA1B9B8C5B01E9DE33C6FB0D9AD52F85E0D3911_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22GenericMethods12_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588GenericMethods12_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MigrationDescription_New_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_TisRuntimeObject_m2AD88BBAE180BD35934BA1CC89B79732F980D10F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MigrationStep_New_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_TisRuntimeObject_mF653636F7D18DD30544A093C1E7D3D68F9E1ED9F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Object_FindObjectsOfType_TisRuntimeObject_mE570B614F68E0A19BD5F65061CDA9BEE6EDBD159_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ProfilingSampler_Get_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_mF2CC212DE30788E5451264D3035A9BAEDB2945B8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ProfilingSampler_Get_TisRuntimeObject_mD5DA62CFA497D3B5ECCBDFD70D55BC01131F9314_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RenderGraphObjectPool_GetTempArray_TisRenderTargetIdentifier_tB7480EE944FC70E0AB7D499DB17D119EB65B0F5B_m14E2E0F61B64B9019DB81D202FC1D17A12607910_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RenderGraphObjectPool_GetTempArray_TisRuntimeObject_mEB0BB67D1AEED8B777A1642427D7B01270A86462_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RenderGraph_AddRenderPass_TisRuntimeObject_mDA964C9D83D9A6356BAF105F8EBFB0AC78E7090B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RenderPass_GetExecuteDelegate_TisRuntimeObject_m23FB2C238E4C2C60FF27713DF813A667926D00F5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Stack_1_get_Count_m8803B4178385D39338A1EDDC39FE6D8152F01A1DGenericMethods12_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlListConverter_ToArray_TisUInt16_tAE45CEF73BF720100519F6867F32145D075F928E_m205C1CF96FEABB0EAFBC8AE70952C3A9FB50BFE0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlListConverter_ToArray_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m88B7788C4BB3756EC0A966401F1D13D662A1615A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlListConverter_ToArray_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_m904001409F4BCF396E5E8D0EB777561D72170836_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E;
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB;
struct UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4;
struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983;
struct ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9;
struct MigrationStep_2U5BU5D_tBC3DCCCDDC4D6F13B471C0C1E2B649A21D8714A7;
struct RenderTargetIdentifierU5BU5D_t57069CA3F97B36638E39044168D1BEB956436DD4;
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
struct Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<System.Int32Enum,UnityEngine.Rendering.TProfilingSampler`1<System.Int32Enum>>
struct Dictionary_2_t6D38279CB9584FA5B02AC661A0C9BEC4044E95E5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t4DB7F793CABC1402AA363E986BE0FB6835900D6A* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t1C90318A6567045139EBC231CF40E6C06A96514E * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tF44D73CC5176355FDA5BCE29F918B35A059CA7FA * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t6D38279CB9584FA5B02AC661A0C9BEC4044E95E5, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t6D38279CB9584FA5B02AC661A0C9BEC4044E95E5, ___entries_1)); }
	inline EntryU5BU5D_t4DB7F793CABC1402AA363E986BE0FB6835900D6A* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t4DB7F793CABC1402AA363E986BE0FB6835900D6A** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t4DB7F793CABC1402AA363E986BE0FB6835900D6A* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t6D38279CB9584FA5B02AC661A0C9BEC4044E95E5, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t6D38279CB9584FA5B02AC661A0C9BEC4044E95E5, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t6D38279CB9584FA5B02AC661A0C9BEC4044E95E5, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t6D38279CB9584FA5B02AC661A0C9BEC4044E95E5, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t6D38279CB9584FA5B02AC661A0C9BEC4044E95E5, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t6D38279CB9584FA5B02AC661A0C9BEC4044E95E5, ___keys_7)); }
	inline KeyCollection_t1C90318A6567045139EBC231CF40E6C06A96514E * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t1C90318A6567045139EBC231CF40E6C06A96514E ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t1C90318A6567045139EBC231CF40E6C06A96514E * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t6D38279CB9584FA5B02AC661A0C9BEC4044E95E5, ___values_8)); }
	inline ValueCollection_tF44D73CC5176355FDA5BCE29F918B35A059CA7FA * get_values_8() const { return ___values_8; }
	inline ValueCollection_tF44D73CC5176355FDA5BCE29F918B35A059CA7FA ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tF44D73CC5176355FDA5BCE29F918B35A059CA7FA * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t6D38279CB9584FA5B02AC661A0C9BEC4044E95E5, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Rendering.TProfilingSampler`1<System.Object>>
struct Dictionary_2_t528A508F31AD8427EF48D14234B4B780DA7CC05E  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tD928CE098E19948E690ADC066E1835C1FAF4DA98* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t65F43A60DF8B33AB7A55C07DB79C11008BBE76BE * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tE48C60BC9476B8B78AC869EF3D1F9F25F7F6CDC3 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t528A508F31AD8427EF48D14234B4B780DA7CC05E, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t528A508F31AD8427EF48D14234B4B780DA7CC05E, ___entries_1)); }
	inline EntryU5BU5D_tD928CE098E19948E690ADC066E1835C1FAF4DA98* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tD928CE098E19948E690ADC066E1835C1FAF4DA98** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tD928CE098E19948E690ADC066E1835C1FAF4DA98* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t528A508F31AD8427EF48D14234B4B780DA7CC05E, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t528A508F31AD8427EF48D14234B4B780DA7CC05E, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t528A508F31AD8427EF48D14234B4B780DA7CC05E, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t528A508F31AD8427EF48D14234B4B780DA7CC05E, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t528A508F31AD8427EF48D14234B4B780DA7CC05E, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t528A508F31AD8427EF48D14234B4B780DA7CC05E, ___keys_7)); }
	inline KeyCollection_t65F43A60DF8B33AB7A55C07DB79C11008BBE76BE * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t65F43A60DF8B33AB7A55C07DB79C11008BBE76BE ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t65F43A60DF8B33AB7A55C07DB79C11008BBE76BE * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t528A508F31AD8427EF48D14234B4B780DA7CC05E, ___values_8)); }
	inline ValueCollection_tE48C60BC9476B8B78AC869EF3D1F9F25F7F6CDC3 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tE48C60BC9476B8B78AC869EF3D1F9F25F7F6CDC3 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tE48C60BC9476B8B78AC869EF3D1F9F25F7F6CDC3 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t528A508F31AD8427EF48D14234B4B780DA7CC05E, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.ValueTuple`2<System.Type,System.Int32>,System.Collections.Generic.Stack`1<System.Object>>
struct Dictionary_2_tDB0173F7367ADD8C863509F3869BC63705A9B63E  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t3A8017CC4EE67EFA09EA37759A1D3B104909DEAF* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t2B403A51667B71437C537935FEC07380FB0E33FC * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t8A55512B72BC15D61766D269D351EF93F2E10C98 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tDB0173F7367ADD8C863509F3869BC63705A9B63E, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tDB0173F7367ADD8C863509F3869BC63705A9B63E, ___entries_1)); }
	inline EntryU5BU5D_t3A8017CC4EE67EFA09EA37759A1D3B104909DEAF* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t3A8017CC4EE67EFA09EA37759A1D3B104909DEAF** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t3A8017CC4EE67EFA09EA37759A1D3B104909DEAF* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tDB0173F7367ADD8C863509F3869BC63705A9B63E, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tDB0173F7367ADD8C863509F3869BC63705A9B63E, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tDB0173F7367ADD8C863509F3869BC63705A9B63E, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tDB0173F7367ADD8C863509F3869BC63705A9B63E, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tDB0173F7367ADD8C863509F3869BC63705A9B63E, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tDB0173F7367ADD8C863509F3869BC63705A9B63E, ___keys_7)); }
	inline KeyCollection_t2B403A51667B71437C537935FEC07380FB0E33FC * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t2B403A51667B71437C537935FEC07380FB0E33FC ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t2B403A51667B71437C537935FEC07380FB0E33FC * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tDB0173F7367ADD8C863509F3869BC63705A9B63E, ___values_8)); }
	inline ValueCollection_t8A55512B72BC15D61766D269D351EF93F2E10C98 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t8A55512B72BC15D61766D269D351EF93F2E10C98 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t8A55512B72BC15D61766D269D351EF93F2E10C98 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tDB0173F7367ADD8C863509F3869BC63705A9B63E, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.UInt16>
struct List_1_tC24850134CAAF1886083DE793A4D1AE57578DE69  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC24850134CAAF1886083DE793A4D1AE57578DE69, ____items_1)); }
	inline UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* get__items_1() const { return ____items_1; }
	inline UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC24850134CAAF1886083DE793A4D1AE57578DE69, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC24850134CAAF1886083DE793A4D1AE57578DE69, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC24850134CAAF1886083DE793A4D1AE57578DE69, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tC24850134CAAF1886083DE793A4D1AE57578DE69_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC24850134CAAF1886083DE793A4D1AE57578DE69_StaticFields, ____emptyArray_5)); }
	inline UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.UInt32>
struct List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752, ____items_1)); }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* get__items_1() const { return ____items_1; }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752_StaticFields, ____emptyArray_5)); }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* get__emptyArray_5() const { return ____emptyArray_5; }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.UInt64>
struct List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8, ____items_1)); }
	inline UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* get__items_1() const { return ____items_1; }
	inline UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8_StaticFields, ____emptyArray_5)); }
	inline UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.ValueTuple`2<System.Object,System.ValueTuple`2<System.Type,System.Int32>>>
struct List_1_tC6996D2CBDA52BAA8F08554F7E920E603DB33417  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ValueTuple_2U5BU5D_t2028C42ABD8621EC52E4A5E983461EF701F2AF06* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC6996D2CBDA52BAA8F08554F7E920E603DB33417, ____items_1)); }
	inline ValueTuple_2U5BU5D_t2028C42ABD8621EC52E4A5E983461EF701F2AF06* get__items_1() const { return ____items_1; }
	inline ValueTuple_2U5BU5D_t2028C42ABD8621EC52E4A5E983461EF701F2AF06** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ValueTuple_2U5BU5D_t2028C42ABD8621EC52E4A5E983461EF701F2AF06* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC6996D2CBDA52BAA8F08554F7E920E603DB33417, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC6996D2CBDA52BAA8F08554F7E920E603DB33417, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC6996D2CBDA52BAA8F08554F7E920E603DB33417, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tC6996D2CBDA52BAA8F08554F7E920E603DB33417_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ValueTuple_2U5BU5D_t2028C42ABD8621EC52E4A5E983461EF701F2AF06* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC6996D2CBDA52BAA8F08554F7E920E603DB33417_StaticFields, ____emptyArray_5)); }
	inline ValueTuple_2U5BU5D_t2028C42ABD8621EC52E4A5E983461EF701F2AF06* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ValueTuple_2U5BU5D_t2028C42ABD8621EC52E4A5E983461EF701F2AF06** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ValueTuple_2U5BU5D_t2028C42ABD8621EC52E4A5E983461EF701F2AF06* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph/RenderPass>
struct List_1_t7BE901F61F1A406FC143D643C9923B05DE767845  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	RenderPassU5BU5D_t8CDB1B9B512117344C96F8DE5B0BB4ABE8D79B23* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t7BE901F61F1A406FC143D643C9923B05DE767845, ____items_1)); }
	inline RenderPassU5BU5D_t8CDB1B9B512117344C96F8DE5B0BB4ABE8D79B23* get__items_1() const { return ____items_1; }
	inline RenderPassU5BU5D_t8CDB1B9B512117344C96F8DE5B0BB4ABE8D79B23** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(RenderPassU5BU5D_t8CDB1B9B512117344C96F8DE5B0BB4ABE8D79B23* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t7BE901F61F1A406FC143D643C9923B05DE767845, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t7BE901F61F1A406FC143D643C9923B05DE767845, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t7BE901F61F1A406FC143D643C9923B05DE767845, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t7BE901F61F1A406FC143D643C9923B05DE767845_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	RenderPassU5BU5D_t8CDB1B9B512117344C96F8DE5B0BB4ABE8D79B23* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t7BE901F61F1A406FC143D643C9923B05DE767845_StaticFields, ____emptyArray_5)); }
	inline RenderPassU5BU5D_t8CDB1B9B512117344C96F8DE5B0BB4ABE8D79B23* get__emptyArray_5() const { return ____emptyArray_5; }
	inline RenderPassU5BU5D_t8CDB1B9B512117344C96F8DE5B0BB4ABE8D79B23** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(RenderPassU5BU5D_t8CDB1B9B512117344C96F8DE5B0BB4ABE8D79B23* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE, ____items_1)); }
	inline TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* get__items_1() const { return ____items_1; }
	inline TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE_StaticFields, ____emptyArray_5)); }
	inline TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163, ____array_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Byte,System.Boolean>
struct Caster_1_t1C42C521F7CF8631FF6985A641436B54CEE018E8  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t1C42C521F7CF8631FF6985A641436B54CEE018E8_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t19A7258583FA1642B75695805A3C675EA09C25E5 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t1C42C521F7CF8631FF6985A641436B54CEE018E8_StaticFields, ___Instance_0)); }
	inline Transformer_1_t19A7258583FA1642B75695805A3C675EA09C25E5 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t19A7258583FA1642B75695805A3C675EA09C25E5 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t19A7258583FA1642B75695805A3C675EA09C25E5 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Byte,System.Byte>
struct Caster_1_tE0B5719D5D953F42A65E75E7D46BD8D7DD83D018  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tE0B5719D5D953F42A65E75E7D46BD8D7DD83D018_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tEF5D2D9847B566056189D34781B028AAC143AE94 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tE0B5719D5D953F42A65E75E7D46BD8D7DD83D018_StaticFields, ___Instance_0)); }
	inline Transformer_1_tEF5D2D9847B566056189D34781B028AAC143AE94 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tEF5D2D9847B566056189D34781B028AAC143AE94 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tEF5D2D9847B566056189D34781B028AAC143AE94 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Byte,System.Char>
struct Caster_1_tAFB70D9BBAD381451752BAEF28C81B52B2869977  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tAFB70D9BBAD381451752BAEF28C81B52B2869977_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t324CE6226D2DB02125521E43B7578823697F11C9 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tAFB70D9BBAD381451752BAEF28C81B52B2869977_StaticFields, ___Instance_0)); }
	inline Transformer_1_t324CE6226D2DB02125521E43B7578823697F11C9 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t324CE6226D2DB02125521E43B7578823697F11C9 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t324CE6226D2DB02125521E43B7578823697F11C9 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Byte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Caster_1_t09B5032BA61F81ADC8AEF23DEF9F301CE607AF7C  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t09B5032BA61F81ADC8AEF23DEF9F301CE607AF7C_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t986FAAB941679A366CE204DA40A2C414683DDE0A * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t09B5032BA61F81ADC8AEF23DEF9F301CE607AF7C_StaticFields, ___Instance_0)); }
	inline Transformer_1_t986FAAB941679A366CE204DA40A2C414683DDE0A * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t986FAAB941679A366CE204DA40A2C414683DDE0A ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t986FAAB941679A366CE204DA40A2C414683DDE0A * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Byte,System.DateTime>
struct Caster_1_tB37D2514A59669003F7F156FB271151F0D11E5FB  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tB37D2514A59669003F7F156FB271151F0D11E5FB_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tDA2EE3A4D871B443E8A28C71B0E0164A41D3DA02 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tB37D2514A59669003F7F156FB271151F0D11E5FB_StaticFields, ___Instance_0)); }
	inline Transformer_1_tDA2EE3A4D871B443E8A28C71B0E0164A41D3DA02 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tDA2EE3A4D871B443E8A28C71B0E0164A41D3DA02 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tDA2EE3A4D871B443E8A28C71B0E0164A41D3DA02 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Byte,System.DateTimeOffset>
struct Caster_1_tAD8FA143928683B1E0B6BEB460980A8543022E9B  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tAD8FA143928683B1E0B6BEB460980A8543022E9B_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tBE57A838EA9C265FA94567A0081AA9D93DDC74F8 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tAD8FA143928683B1E0B6BEB460980A8543022E9B_StaticFields, ___Instance_0)); }
	inline Transformer_1_tBE57A838EA9C265FA94567A0081AA9D93DDC74F8 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tBE57A838EA9C265FA94567A0081AA9D93DDC74F8 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tBE57A838EA9C265FA94567A0081AA9D93DDC74F8 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Byte,System.Decimal>
struct Caster_1_t58883F2D0ACC52F20C8978FC28C9C9D9CCFC69C2  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t58883F2D0ACC52F20C8978FC28C9C9D9CCFC69C2_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tA51CB05B3742EC3F46FA501481261EDEB730DABD * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t58883F2D0ACC52F20C8978FC28C9C9D9CCFC69C2_StaticFields, ___Instance_0)); }
	inline Transformer_1_tA51CB05B3742EC3F46FA501481261EDEB730DABD * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tA51CB05B3742EC3F46FA501481261EDEB730DABD ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tA51CB05B3742EC3F46FA501481261EDEB730DABD * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Byte,System.Diagnostics.Tracing.EmptyStruct>
struct Caster_1_tAFED591EF13E015162D8B2F6F629837E43482837  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tAFED591EF13E015162D8B2F6F629837E43482837_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t4BE562A96C7C1F79332E47AAC9A46C3302AB47A2 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tAFED591EF13E015162D8B2F6F629837E43482837_StaticFields, ___Instance_0)); }
	inline Transformer_1_t4BE562A96C7C1F79332E47AAC9A46C3302AB47A2 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t4BE562A96C7C1F79332E47AAC9A46C3302AB47A2 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t4BE562A96C7C1F79332E47AAC9A46C3302AB47A2 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Byte,System.Double>
struct Caster_1_tF3B99FF3BBCDEA3D042AAF9F41A16C7AD4A29ED2  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tF3B99FF3BBCDEA3D042AAF9F41A16C7AD4A29ED2_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t3D2772F81DACC0E761A22F7C74C18AD24C36D58D * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tF3B99FF3BBCDEA3D042AAF9F41A16C7AD4A29ED2_StaticFields, ___Instance_0)); }
	inline Transformer_1_t3D2772F81DACC0E761A22F7C74C18AD24C36D58D * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t3D2772F81DACC0E761A22F7C74C18AD24C36D58D ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t3D2772F81DACC0E761A22F7C74C18AD24C36D58D * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Byte,System.Guid>
struct Caster_1_tD296AE417E6EE7ADB8DAF202B8BC3203CBE89300  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tD296AE417E6EE7ADB8DAF202B8BC3203CBE89300_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t8542C56C05EB3E22016B2903F0EDCAC5D051355B * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tD296AE417E6EE7ADB8DAF202B8BC3203CBE89300_StaticFields, ___Instance_0)); }
	inline Transformer_1_t8542C56C05EB3E22016B2903F0EDCAC5D051355B * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t8542C56C05EB3E22016B2903F0EDCAC5D051355B ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t8542C56C05EB3E22016B2903F0EDCAC5D051355B * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Byte,System.Int16>
struct Caster_1_t699B4565B14DC3E4AAE69424E8CCCB8C5F5C84BF  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t699B4565B14DC3E4AAE69424E8CCCB8C5F5C84BF_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t436942B036692C49C596B552368FD0D9AEB19996 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t699B4565B14DC3E4AAE69424E8CCCB8C5F5C84BF_StaticFields, ___Instance_0)); }
	inline Transformer_1_t436942B036692C49C596B552368FD0D9AEB19996 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t436942B036692C49C596B552368FD0D9AEB19996 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t436942B036692C49C596B552368FD0D9AEB19996 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Byte,System.Int32>
struct Caster_1_t847B65F78580B4C35C46212B37066290881E839D  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t847B65F78580B4C35C46212B37066290881E839D_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tD02BD295F6960A844F4E3D7D4CA9F0FBD4007780 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t847B65F78580B4C35C46212B37066290881E839D_StaticFields, ___Instance_0)); }
	inline Transformer_1_tD02BD295F6960A844F4E3D7D4CA9F0FBD4007780 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tD02BD295F6960A844F4E3D7D4CA9F0FBD4007780 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tD02BD295F6960A844F4E3D7D4CA9F0FBD4007780 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Byte,System.Int64>
struct Caster_1_tEE77AB8F884BD2579C99A38CFB1AAFEE0DCF07FA  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tEE77AB8F884BD2579C99A38CFB1AAFEE0DCF07FA_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t4FF63122CA8338DDEE466FBA386674D90B0DA997 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tEE77AB8F884BD2579C99A38CFB1AAFEE0DCF07FA_StaticFields, ___Instance_0)); }
	inline Transformer_1_t4FF63122CA8338DDEE466FBA386674D90B0DA997 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t4FF63122CA8338DDEE466FBA386674D90B0DA997 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t4FF63122CA8338DDEE466FBA386674D90B0DA997 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Byte,System.IntPtr>
struct Caster_1_t02312CA733627756FCC99C1ED8322D3A6C51FB60  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t02312CA733627756FCC99C1ED8322D3A6C51FB60_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tD37A651949FE156BFC86946E76F3BEA93F428054 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t02312CA733627756FCC99C1ED8322D3A6C51FB60_StaticFields, ___Instance_0)); }
	inline Transformer_1_tD37A651949FE156BFC86946E76F3BEA93F428054 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tD37A651949FE156BFC86946E76F3BEA93F428054 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tD37A651949FE156BFC86946E76F3BEA93F428054 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Byte,System.Object>
struct Caster_1_t79B0C615C852AD755B10B324A903BD8ECE30C1D2  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t79B0C615C852AD755B10B324A903BD8ECE30C1D2_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tD19681DA49D4AA38D8D48CE42752CBE15718DB47 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t79B0C615C852AD755B10B324A903BD8ECE30C1D2_StaticFields, ___Instance_0)); }
	inline Transformer_1_tD19681DA49D4AA38D8D48CE42752CBE15718DB47 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tD19681DA49D4AA38D8D48CE42752CBE15718DB47 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tD19681DA49D4AA38D8D48CE42752CBE15718DB47 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Byte,System.SByte>
struct Caster_1_t27F1F99B9A4CEB186ECF7805145934EA77CB1257  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t27F1F99B9A4CEB186ECF7805145934EA77CB1257_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t664F7EECE18DF51BE5DD248D5B93731F8A23DCD4 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t27F1F99B9A4CEB186ECF7805145934EA77CB1257_StaticFields, ___Instance_0)); }
	inline Transformer_1_t664F7EECE18DF51BE5DD248D5B93731F8A23DCD4 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t664F7EECE18DF51BE5DD248D5B93731F8A23DCD4 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t664F7EECE18DF51BE5DD248D5B93731F8A23DCD4 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Byte,System.Single>
struct Caster_1_t5908B8116E70EA9E946E9F5128B622E9063630CC  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t5908B8116E70EA9E946E9F5128B622E9063630CC_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tB28894046684B559EDC3DE1E3481E408A5BE3A89 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t5908B8116E70EA9E946E9F5128B622E9063630CC_StaticFields, ___Instance_0)); }
	inline Transformer_1_tB28894046684B559EDC3DE1E3481E408A5BE3A89 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tB28894046684B559EDC3DE1E3481E408A5BE3A89 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tB28894046684B559EDC3DE1E3481E408A5BE3A89 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Byte,System.TimeSpan>
struct Caster_1_t0B12755AB11A35CCF3F2B11D0A02101A3A325F45  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t0B12755AB11A35CCF3F2B11D0A02101A3A325F45_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t1AB12F230CAB2407D401317A65F9A5463404A073 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t0B12755AB11A35CCF3F2B11D0A02101A3A325F45_StaticFields, ___Instance_0)); }
	inline Transformer_1_t1AB12F230CAB2407D401317A65F9A5463404A073 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t1AB12F230CAB2407D401317A65F9A5463404A073 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t1AB12F230CAB2407D401317A65F9A5463404A073 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Byte,System.UInt16>
struct Caster_1_t408C47A521D832C453740F1E3F374FCCB5E32E8A  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t408C47A521D832C453740F1E3F374FCCB5E32E8A_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t9AB703D7D55E206EFFA2B0270C980C290C374E32 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t408C47A521D832C453740F1E3F374FCCB5E32E8A_StaticFields, ___Instance_0)); }
	inline Transformer_1_t9AB703D7D55E206EFFA2B0270C980C290C374E32 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t9AB703D7D55E206EFFA2B0270C980C290C374E32 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t9AB703D7D55E206EFFA2B0270C980C290C374E32 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Byte,System.UInt32>
struct Caster_1_t674C9A8AF3118A1ACC250CBE1B160B5287944451  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t674C9A8AF3118A1ACC250CBE1B160B5287944451_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t4FD7FB274F8A13E577B2C68C562542FB8BE19BF5 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t674C9A8AF3118A1ACC250CBE1B160B5287944451_StaticFields, ___Instance_0)); }
	inline Transformer_1_t4FD7FB274F8A13E577B2C68C562542FB8BE19BF5 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t4FD7FB274F8A13E577B2C68C562542FB8BE19BF5 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t4FD7FB274F8A13E577B2C68C562542FB8BE19BF5 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Byte,System.UInt64>
struct Caster_1_t80311815F1B7E9467CB0674AEC735F4E06AF50CA  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t80311815F1B7E9467CB0674AEC735F4E06AF50CA_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tF779A9DA86F954469CABF99E43E5D2126D6C7558 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t80311815F1B7E9467CB0674AEC735F4E06AF50CA_StaticFields, ___Instance_0)); }
	inline Transformer_1_tF779A9DA86F954469CABF99E43E5D2126D6C7558 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tF779A9DA86F954469CABF99E43E5D2126D6C7558 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tF779A9DA86F954469CABF99E43E5D2126D6C7558 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Byte,System.UIntPtr>
struct Caster_1_t57C825D368DB63A6299B8DF204CDB497F51F538D  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t57C825D368DB63A6299B8DF204CDB497F51F538D_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t1C9601B96FC325D98CD121FFF18A903AE06F926D * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t57C825D368DB63A6299B8DF204CDB497F51F538D_StaticFields, ___Instance_0)); }
	inline Transformer_1_t1C9601B96FC325D98CD121FFF18A903AE06F926D * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t1C9601B96FC325D98CD121FFF18A903AE06F926D ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t1C9601B96FC325D98CD121FFF18A903AE06F926D * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int16,System.Boolean>
struct Caster_1_tCAA6ACA318706EA3CFC28187859C80CD568A8943  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tCAA6ACA318706EA3CFC28187859C80CD568A8943_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t8ABB0411B7298DFBBC20B58387ECF4E74BFBDEDD * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tCAA6ACA318706EA3CFC28187859C80CD568A8943_StaticFields, ___Instance_0)); }
	inline Transformer_1_t8ABB0411B7298DFBBC20B58387ECF4E74BFBDEDD * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t8ABB0411B7298DFBBC20B58387ECF4E74BFBDEDD ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t8ABB0411B7298DFBBC20B58387ECF4E74BFBDEDD * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int16,System.Byte>
struct Caster_1_tCFD75E9DB3970A86144B6EFA3E793B6C12B52B33  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tCFD75E9DB3970A86144B6EFA3E793B6C12B52B33_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t65E3C27F47E4C586AEEB98C5F5F7EC12B7487F51 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tCFD75E9DB3970A86144B6EFA3E793B6C12B52B33_StaticFields, ___Instance_0)); }
	inline Transformer_1_t65E3C27F47E4C586AEEB98C5F5F7EC12B7487F51 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t65E3C27F47E4C586AEEB98C5F5F7EC12B7487F51 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t65E3C27F47E4C586AEEB98C5F5F7EC12B7487F51 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int16,System.Char>
struct Caster_1_tDE1C83FE3C48AB3782D0BCBC7ACD4EA1700DBF59  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tDE1C83FE3C48AB3782D0BCBC7ACD4EA1700DBF59_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t94FEFA2C1D7C52972E627FEFFA99284D0DDC25F3 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tDE1C83FE3C48AB3782D0BCBC7ACD4EA1700DBF59_StaticFields, ___Instance_0)); }
	inline Transformer_1_t94FEFA2C1D7C52972E627FEFFA99284D0DDC25F3 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t94FEFA2C1D7C52972E627FEFFA99284D0DDC25F3 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t94FEFA2C1D7C52972E627FEFFA99284D0DDC25F3 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int16,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Caster_1_t6B1DD3EE8B308447896C88A6A69138BC65A5FA40  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t6B1DD3EE8B308447896C88A6A69138BC65A5FA40_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t240346D763F8BC997367E7F857B6F69D68360595 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t6B1DD3EE8B308447896C88A6A69138BC65A5FA40_StaticFields, ___Instance_0)); }
	inline Transformer_1_t240346D763F8BC997367E7F857B6F69D68360595 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t240346D763F8BC997367E7F857B6F69D68360595 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t240346D763F8BC997367E7F857B6F69D68360595 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int16,System.DateTime>
struct Caster_1_t502C258C3B6A03A1FD5B2E3254072F77EE89A675  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t502C258C3B6A03A1FD5B2E3254072F77EE89A675_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t4CC0B6F21608AE009CB235BE9B1BF15A9B0E3431 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t502C258C3B6A03A1FD5B2E3254072F77EE89A675_StaticFields, ___Instance_0)); }
	inline Transformer_1_t4CC0B6F21608AE009CB235BE9B1BF15A9B0E3431 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t4CC0B6F21608AE009CB235BE9B1BF15A9B0E3431 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t4CC0B6F21608AE009CB235BE9B1BF15A9B0E3431 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int16,System.DateTimeOffset>
struct Caster_1_t11F20427B499F3CD52E11D6A1AB7C931DCF96DB8  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t11F20427B499F3CD52E11D6A1AB7C931DCF96DB8_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t92CEE2D0E9F82F259F4B10113D85847D8DE54757 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t11F20427B499F3CD52E11D6A1AB7C931DCF96DB8_StaticFields, ___Instance_0)); }
	inline Transformer_1_t92CEE2D0E9F82F259F4B10113D85847D8DE54757 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t92CEE2D0E9F82F259F4B10113D85847D8DE54757 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t92CEE2D0E9F82F259F4B10113D85847D8DE54757 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int16,System.Decimal>
struct Caster_1_tB676512E7A350DB4ED01AA9C00F5621E3A8C7F0F  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tB676512E7A350DB4ED01AA9C00F5621E3A8C7F0F_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tE3062CB768903660C5318F9D9B7DDE15A714588C * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tB676512E7A350DB4ED01AA9C00F5621E3A8C7F0F_StaticFields, ___Instance_0)); }
	inline Transformer_1_tE3062CB768903660C5318F9D9B7DDE15A714588C * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tE3062CB768903660C5318F9D9B7DDE15A714588C ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tE3062CB768903660C5318F9D9B7DDE15A714588C * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int16,System.Diagnostics.Tracing.EmptyStruct>
struct Caster_1_t8218635FFE52C666262AEEAEE207339F47173DFF  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t8218635FFE52C666262AEEAEE207339F47173DFF_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tBD1BBF19FDEEE663FCCC49AC10AADA1B059D325C * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t8218635FFE52C666262AEEAEE207339F47173DFF_StaticFields, ___Instance_0)); }
	inline Transformer_1_tBD1BBF19FDEEE663FCCC49AC10AADA1B059D325C * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tBD1BBF19FDEEE663FCCC49AC10AADA1B059D325C ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tBD1BBF19FDEEE663FCCC49AC10AADA1B059D325C * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int16,System.Double>
struct Caster_1_t03D8E1F7D51ED3D2AE2677EDF3B6A0F0A4416AB5  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t03D8E1F7D51ED3D2AE2677EDF3B6A0F0A4416AB5_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tFA2CCE2417FF56944AD841B7ED04360314120497 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t03D8E1F7D51ED3D2AE2677EDF3B6A0F0A4416AB5_StaticFields, ___Instance_0)); }
	inline Transformer_1_tFA2CCE2417FF56944AD841B7ED04360314120497 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tFA2CCE2417FF56944AD841B7ED04360314120497 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tFA2CCE2417FF56944AD841B7ED04360314120497 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int16,System.Guid>
struct Caster_1_t5932849F6E79E1885331632BE0371A5087A6DD8C  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t5932849F6E79E1885331632BE0371A5087A6DD8C_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t10C9C25A5618D14E4E001BDF9E20419A10A6DFB9 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t5932849F6E79E1885331632BE0371A5087A6DD8C_StaticFields, ___Instance_0)); }
	inline Transformer_1_t10C9C25A5618D14E4E001BDF9E20419A10A6DFB9 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t10C9C25A5618D14E4E001BDF9E20419A10A6DFB9 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t10C9C25A5618D14E4E001BDF9E20419A10A6DFB9 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int16,System.Int16>
struct Caster_1_t1F87BBD03AF9272751C51F5D605EFEF43AB46FE1  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t1F87BBD03AF9272751C51F5D605EFEF43AB46FE1_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tF7F040CDF505A8BEF12BEBEAA31FFD9BD43FF8F8 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t1F87BBD03AF9272751C51F5D605EFEF43AB46FE1_StaticFields, ___Instance_0)); }
	inline Transformer_1_tF7F040CDF505A8BEF12BEBEAA31FFD9BD43FF8F8 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tF7F040CDF505A8BEF12BEBEAA31FFD9BD43FF8F8 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tF7F040CDF505A8BEF12BEBEAA31FFD9BD43FF8F8 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int16,System.Int32>
struct Caster_1_tB23D3BA31E450FB0952F33E1D2DB4DBFCD754BE1  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tB23D3BA31E450FB0952F33E1D2DB4DBFCD754BE1_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tA741C25CF64E7496C977BB826C7D60FA98E8C970 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tB23D3BA31E450FB0952F33E1D2DB4DBFCD754BE1_StaticFields, ___Instance_0)); }
	inline Transformer_1_tA741C25CF64E7496C977BB826C7D60FA98E8C970 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tA741C25CF64E7496C977BB826C7D60FA98E8C970 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tA741C25CF64E7496C977BB826C7D60FA98E8C970 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int16,System.Int64>
struct Caster_1_tCA7F280780B937135FD0247CC90F5BCAD8963441  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tCA7F280780B937135FD0247CC90F5BCAD8963441_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t23A5C3116CBF683F9F68EE3DDFF0E12802831AC4 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tCA7F280780B937135FD0247CC90F5BCAD8963441_StaticFields, ___Instance_0)); }
	inline Transformer_1_t23A5C3116CBF683F9F68EE3DDFF0E12802831AC4 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t23A5C3116CBF683F9F68EE3DDFF0E12802831AC4 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t23A5C3116CBF683F9F68EE3DDFF0E12802831AC4 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int16,System.IntPtr>
struct Caster_1_t33C636F2356154C6CDFA5421A2797B1F58F30BCC  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t33C636F2356154C6CDFA5421A2797B1F58F30BCC_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tDEDEB8C2D8BA02B307B0EDD7EEC5D44DDFB05231 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t33C636F2356154C6CDFA5421A2797B1F58F30BCC_StaticFields, ___Instance_0)); }
	inline Transformer_1_tDEDEB8C2D8BA02B307B0EDD7EEC5D44DDFB05231 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tDEDEB8C2D8BA02B307B0EDD7EEC5D44DDFB05231 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tDEDEB8C2D8BA02B307B0EDD7EEC5D44DDFB05231 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int16,System.Object>
struct Caster_1_tF7A61263020C72F89182A7A8527DE53779F6D045  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tF7A61263020C72F89182A7A8527DE53779F6D045_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t026BF5A032AD1B2D3EEDA845C07E1202DFCBF82F * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tF7A61263020C72F89182A7A8527DE53779F6D045_StaticFields, ___Instance_0)); }
	inline Transformer_1_t026BF5A032AD1B2D3EEDA845C07E1202DFCBF82F * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t026BF5A032AD1B2D3EEDA845C07E1202DFCBF82F ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t026BF5A032AD1B2D3EEDA845C07E1202DFCBF82F * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int16,System.SByte>
struct Caster_1_tE4ED47E76B44B007CC692D239C61ED53AE3DEC20  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tE4ED47E76B44B007CC692D239C61ED53AE3DEC20_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t1358C14103D206B57FA822096A13BEDC1A7A4048 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tE4ED47E76B44B007CC692D239C61ED53AE3DEC20_StaticFields, ___Instance_0)); }
	inline Transformer_1_t1358C14103D206B57FA822096A13BEDC1A7A4048 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t1358C14103D206B57FA822096A13BEDC1A7A4048 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t1358C14103D206B57FA822096A13BEDC1A7A4048 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int16,System.Single>
struct Caster_1_tFFE1731A5A18D2FC62FB4FD0E140F893FEFCBFBC  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tFFE1731A5A18D2FC62FB4FD0E140F893FEFCBFBC_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t761E0F084572634E94674D7C1912B56771C73045 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tFFE1731A5A18D2FC62FB4FD0E140F893FEFCBFBC_StaticFields, ___Instance_0)); }
	inline Transformer_1_t761E0F084572634E94674D7C1912B56771C73045 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t761E0F084572634E94674D7C1912B56771C73045 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t761E0F084572634E94674D7C1912B56771C73045 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int16,System.TimeSpan>
struct Caster_1_tE7B6AE02946C8C7D035775855D3F8667EECF49F0  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tE7B6AE02946C8C7D035775855D3F8667EECF49F0_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tD23E5E6A1A391F332A34AA4663D09426093C002A * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tE7B6AE02946C8C7D035775855D3F8667EECF49F0_StaticFields, ___Instance_0)); }
	inline Transformer_1_tD23E5E6A1A391F332A34AA4663D09426093C002A * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tD23E5E6A1A391F332A34AA4663D09426093C002A ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tD23E5E6A1A391F332A34AA4663D09426093C002A * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int16,System.UInt16>
struct Caster_1_tAB8276A53DE8D0B71D0C922FBDC1EA643B4B0801  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tAB8276A53DE8D0B71D0C922FBDC1EA643B4B0801_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tD6009487878B22E34FDE5E3FBDC4B4E93CF5BC77 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tAB8276A53DE8D0B71D0C922FBDC1EA643B4B0801_StaticFields, ___Instance_0)); }
	inline Transformer_1_tD6009487878B22E34FDE5E3FBDC4B4E93CF5BC77 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tD6009487878B22E34FDE5E3FBDC4B4E93CF5BC77 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tD6009487878B22E34FDE5E3FBDC4B4E93CF5BC77 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int16,System.UInt32>
struct Caster_1_t46C35E368FA9C3535F632F4A43107C8C0DECDF2D  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t46C35E368FA9C3535F632F4A43107C8C0DECDF2D_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t385ECD51AD4E2A1E86876F87BF89844FDE07DD32 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t46C35E368FA9C3535F632F4A43107C8C0DECDF2D_StaticFields, ___Instance_0)); }
	inline Transformer_1_t385ECD51AD4E2A1E86876F87BF89844FDE07DD32 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t385ECD51AD4E2A1E86876F87BF89844FDE07DD32 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t385ECD51AD4E2A1E86876F87BF89844FDE07DD32 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int16,System.UInt64>
struct Caster_1_t0DD4ACB69C178BCC9281945CB5322037FF50ACD4  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t0DD4ACB69C178BCC9281945CB5322037FF50ACD4_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t0698CC99B4FA18A0050698BCB1D646E8C1C22984 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t0DD4ACB69C178BCC9281945CB5322037FF50ACD4_StaticFields, ___Instance_0)); }
	inline Transformer_1_t0698CC99B4FA18A0050698BCB1D646E8C1C22984 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t0698CC99B4FA18A0050698BCB1D646E8C1C22984 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t0698CC99B4FA18A0050698BCB1D646E8C1C22984 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int16,System.UIntPtr>
struct Caster_1_tAB93366D39B91199FA6BB514B138640EEA06D826  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tAB93366D39B91199FA6BB514B138640EEA06D826_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t6585D4102CCBAE872252AC5E0732CC8EF79DBB20 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tAB93366D39B91199FA6BB514B138640EEA06D826_StaticFields, ___Instance_0)); }
	inline Transformer_1_t6585D4102CCBAE872252AC5E0732CC8EF79DBB20 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t6585D4102CCBAE872252AC5E0732CC8EF79DBB20 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t6585D4102CCBAE872252AC5E0732CC8EF79DBB20 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int32,System.Boolean>
struct Caster_1_t48A24901856804183E97D899F37E2B095C3D3AD0  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t48A24901856804183E97D899F37E2B095C3D3AD0_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t2DBEC8D0800B8F041E03F876ABF5AF7D3DFE5D7B * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t48A24901856804183E97D899F37E2B095C3D3AD0_StaticFields, ___Instance_0)); }
	inline Transformer_1_t2DBEC8D0800B8F041E03F876ABF5AF7D3DFE5D7B * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t2DBEC8D0800B8F041E03F876ABF5AF7D3DFE5D7B ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t2DBEC8D0800B8F041E03F876ABF5AF7D3DFE5D7B * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int32,System.Byte>
struct Caster_1_tB8F12CF62FE2B524624E09DCE78970BE6555258F  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tB8F12CF62FE2B524624E09DCE78970BE6555258F_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t2EE6D7CD39A5C2027ECB941A3759A9EBA3F0BB0C * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tB8F12CF62FE2B524624E09DCE78970BE6555258F_StaticFields, ___Instance_0)); }
	inline Transformer_1_t2EE6D7CD39A5C2027ECB941A3759A9EBA3F0BB0C * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t2EE6D7CD39A5C2027ECB941A3759A9EBA3F0BB0C ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t2EE6D7CD39A5C2027ECB941A3759A9EBA3F0BB0C * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int32,System.Char>
struct Caster_1_tD430240C674256CDF3116A5E5C05D32D14ADE25B  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tD430240C674256CDF3116A5E5C05D32D14ADE25B_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t79A0EA03C0758462B77611F0C5FF7EB4477F9D95 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tD430240C674256CDF3116A5E5C05D32D14ADE25B_StaticFields, ___Instance_0)); }
	inline Transformer_1_t79A0EA03C0758462B77611F0C5FF7EB4477F9D95 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t79A0EA03C0758462B77611F0C5FF7EB4477F9D95 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t79A0EA03C0758462B77611F0C5FF7EB4477F9D95 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Caster_1_tA4C9DBDB9984A7DBDBE1E328A1E6D32056B598D5  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tA4C9DBDB9984A7DBDBE1E328A1E6D32056B598D5_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t3FB65B12F9B30A5AA121C6225ABBD98671D135DE * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tA4C9DBDB9984A7DBDBE1E328A1E6D32056B598D5_StaticFields, ___Instance_0)); }
	inline Transformer_1_t3FB65B12F9B30A5AA121C6225ABBD98671D135DE * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t3FB65B12F9B30A5AA121C6225ABBD98671D135DE ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t3FB65B12F9B30A5AA121C6225ABBD98671D135DE * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int32,System.DateTime>
struct Caster_1_t910ED4892D830D9260544CCD5A5BA17D0EAAC5A7  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t910ED4892D830D9260544CCD5A5BA17D0EAAC5A7_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t00DC76E5BE87873705F91E95AEF9B620DA10C64A * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t910ED4892D830D9260544CCD5A5BA17D0EAAC5A7_StaticFields, ___Instance_0)); }
	inline Transformer_1_t00DC76E5BE87873705F91E95AEF9B620DA10C64A * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t00DC76E5BE87873705F91E95AEF9B620DA10C64A ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t00DC76E5BE87873705F91E95AEF9B620DA10C64A * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int32,System.DateTimeOffset>
struct Caster_1_t3B656E50540D77F8D98EC3723A33AD022BA02142  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t3B656E50540D77F8D98EC3723A33AD022BA02142_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tE5EF3DB7DB9777B2A122766AB8A2227D1C094B79 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t3B656E50540D77F8D98EC3723A33AD022BA02142_StaticFields, ___Instance_0)); }
	inline Transformer_1_tE5EF3DB7DB9777B2A122766AB8A2227D1C094B79 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tE5EF3DB7DB9777B2A122766AB8A2227D1C094B79 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tE5EF3DB7DB9777B2A122766AB8A2227D1C094B79 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int32,System.Decimal>
struct Caster_1_t37CFBE48D145A145182032241D4C96C7A9651872  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t37CFBE48D145A145182032241D4C96C7A9651872_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t25C83F04D27EBB3953BD3252D27F944B7081EFD4 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t37CFBE48D145A145182032241D4C96C7A9651872_StaticFields, ___Instance_0)); }
	inline Transformer_1_t25C83F04D27EBB3953BD3252D27F944B7081EFD4 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t25C83F04D27EBB3953BD3252D27F944B7081EFD4 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t25C83F04D27EBB3953BD3252D27F944B7081EFD4 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int32,System.Diagnostics.Tracing.EmptyStruct>
struct Caster_1_t6C69308FA9D7112A4603D39468BDA09974918F69  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t6C69308FA9D7112A4603D39468BDA09974918F69_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t0FBAD50C82E7A4C7D93A7E4DAE1B7765DEC256E8 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t6C69308FA9D7112A4603D39468BDA09974918F69_StaticFields, ___Instance_0)); }
	inline Transformer_1_t0FBAD50C82E7A4C7D93A7E4DAE1B7765DEC256E8 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t0FBAD50C82E7A4C7D93A7E4DAE1B7765DEC256E8 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t0FBAD50C82E7A4C7D93A7E4DAE1B7765DEC256E8 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int32,System.Double>
struct Caster_1_t667DCCFE8DA1234CBF65A5978B6D27BE63CD598A  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t667DCCFE8DA1234CBF65A5978B6D27BE63CD598A_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t68826869D55A324A082EE643E06DFE0549C43F1B * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t667DCCFE8DA1234CBF65A5978B6D27BE63CD598A_StaticFields, ___Instance_0)); }
	inline Transformer_1_t68826869D55A324A082EE643E06DFE0549C43F1B * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t68826869D55A324A082EE643E06DFE0549C43F1B ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t68826869D55A324A082EE643E06DFE0549C43F1B * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int32,System.Guid>
struct Caster_1_tB84AF4B31F4DAF0AB144E99A83CE997FB4C72D58  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tB84AF4B31F4DAF0AB144E99A83CE997FB4C72D58_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tAE2C376EED3A46831CB52406C90F7FF43F1F9F05 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tB84AF4B31F4DAF0AB144E99A83CE997FB4C72D58_StaticFields, ___Instance_0)); }
	inline Transformer_1_tAE2C376EED3A46831CB52406C90F7FF43F1F9F05 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tAE2C376EED3A46831CB52406C90F7FF43F1F9F05 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tAE2C376EED3A46831CB52406C90F7FF43F1F9F05 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int32,System.Int16>
struct Caster_1_t10436C94D617CD0D6ABB2F7D073CFA27B74C1E30  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t10436C94D617CD0D6ABB2F7D073CFA27B74C1E30_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t09EADD81A9C2CA1C3043FA5CD6706CA1530666E0 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t10436C94D617CD0D6ABB2F7D073CFA27B74C1E30_StaticFields, ___Instance_0)); }
	inline Transformer_1_t09EADD81A9C2CA1C3043FA5CD6706CA1530666E0 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t09EADD81A9C2CA1C3043FA5CD6706CA1530666E0 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t09EADD81A9C2CA1C3043FA5CD6706CA1530666E0 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int32,System.Int32>
struct Caster_1_t14BB827E485FED333B17154453079AE34F1F49AD  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t14BB827E485FED333B17154453079AE34F1F49AD_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t9E7C8EB2E7DA583C3C11956C5E93F3D313CE08D6 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t14BB827E485FED333B17154453079AE34F1F49AD_StaticFields, ___Instance_0)); }
	inline Transformer_1_t9E7C8EB2E7DA583C3C11956C5E93F3D313CE08D6 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t9E7C8EB2E7DA583C3C11956C5E93F3D313CE08D6 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t9E7C8EB2E7DA583C3C11956C5E93F3D313CE08D6 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int32,System.Int64>
struct Caster_1_t7A312140662B26A86CC59C245C7C848163A49AB4  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t7A312140662B26A86CC59C245C7C848163A49AB4_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t8B62B5B7F2FBA49FF26EC65A644535089EF385F2 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t7A312140662B26A86CC59C245C7C848163A49AB4_StaticFields, ___Instance_0)); }
	inline Transformer_1_t8B62B5B7F2FBA49FF26EC65A644535089EF385F2 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t8B62B5B7F2FBA49FF26EC65A644535089EF385F2 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t8B62B5B7F2FBA49FF26EC65A644535089EF385F2 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int32,System.IntPtr>
struct Caster_1_t9C36147697AE67003B8A0EF11EEF2516066D90C4  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t9C36147697AE67003B8A0EF11EEF2516066D90C4_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tE65E26BDA2D86514F0E4F7DCA655FD6391C3498A * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t9C36147697AE67003B8A0EF11EEF2516066D90C4_StaticFields, ___Instance_0)); }
	inline Transformer_1_tE65E26BDA2D86514F0E4F7DCA655FD6391C3498A * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tE65E26BDA2D86514F0E4F7DCA655FD6391C3498A ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tE65E26BDA2D86514F0E4F7DCA655FD6391C3498A * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int32,System.Object>
struct Caster_1_t31EFD992543429652A6ED1652D545CCD372DB7C5  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t31EFD992543429652A6ED1652D545CCD372DB7C5_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t65992AEC496277643CBC80A2F9BED723063EB848 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t31EFD992543429652A6ED1652D545CCD372DB7C5_StaticFields, ___Instance_0)); }
	inline Transformer_1_t65992AEC496277643CBC80A2F9BED723063EB848 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t65992AEC496277643CBC80A2F9BED723063EB848 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t65992AEC496277643CBC80A2F9BED723063EB848 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int32,System.SByte>
struct Caster_1_t9347D88993875351431679E4107168C7CD28B825  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t9347D88993875351431679E4107168C7CD28B825_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t8A499D6FEF7443CA4CE5419B243505BB61DE7DEF * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t9347D88993875351431679E4107168C7CD28B825_StaticFields, ___Instance_0)); }
	inline Transformer_1_t8A499D6FEF7443CA4CE5419B243505BB61DE7DEF * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t8A499D6FEF7443CA4CE5419B243505BB61DE7DEF ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t8A499D6FEF7443CA4CE5419B243505BB61DE7DEF * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int32,System.Single>
struct Caster_1_t3EA25BC7E67BA9A7DA94FB04B9939AA009AE1F2D  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t3EA25BC7E67BA9A7DA94FB04B9939AA009AE1F2D_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t69D9451801937FE2AFF99FCCE268AA878D643D9B * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t3EA25BC7E67BA9A7DA94FB04B9939AA009AE1F2D_StaticFields, ___Instance_0)); }
	inline Transformer_1_t69D9451801937FE2AFF99FCCE268AA878D643D9B * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t69D9451801937FE2AFF99FCCE268AA878D643D9B ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t69D9451801937FE2AFF99FCCE268AA878D643D9B * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int32,System.TimeSpan>
struct Caster_1_tFDA8B5B6F494CA32867BEDA1744607B9DE4AC7FD  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tFDA8B5B6F494CA32867BEDA1744607B9DE4AC7FD_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tE86E929A9B1ED9F0643091DE20F815B92553CA94 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tFDA8B5B6F494CA32867BEDA1744607B9DE4AC7FD_StaticFields, ___Instance_0)); }
	inline Transformer_1_tE86E929A9B1ED9F0643091DE20F815B92553CA94 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tE86E929A9B1ED9F0643091DE20F815B92553CA94 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tE86E929A9B1ED9F0643091DE20F815B92553CA94 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int32,System.UInt16>
struct Caster_1_t5A5C0360CA0AE23E50B74262E52C01F758755C97  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t5A5C0360CA0AE23E50B74262E52C01F758755C97_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t4021B15333DAA448023DFF6ED2E859037D86D3D9 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t5A5C0360CA0AE23E50B74262E52C01F758755C97_StaticFields, ___Instance_0)); }
	inline Transformer_1_t4021B15333DAA448023DFF6ED2E859037D86D3D9 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t4021B15333DAA448023DFF6ED2E859037D86D3D9 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t4021B15333DAA448023DFF6ED2E859037D86D3D9 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int32,System.UInt32>
struct Caster_1_t3A7D9F3C5EC2EF5D573D0A6E3F67BA58C73B050A  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t3A7D9F3C5EC2EF5D573D0A6E3F67BA58C73B050A_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t1D933EC313B2537F0734DE0A2C329C45BFC02BEE * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t3A7D9F3C5EC2EF5D573D0A6E3F67BA58C73B050A_StaticFields, ___Instance_0)); }
	inline Transformer_1_t1D933EC313B2537F0734DE0A2C329C45BFC02BEE * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t1D933EC313B2537F0734DE0A2C329C45BFC02BEE ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t1D933EC313B2537F0734DE0A2C329C45BFC02BEE * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int32,System.UInt64>
struct Caster_1_t5606234865DF0152C73166D640BD2651AAC8D43E  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t5606234865DF0152C73166D640BD2651AAC8D43E_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tB4F33CE42FA8CDA6C1AEB382F3C767D3D702427D * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t5606234865DF0152C73166D640BD2651AAC8D43E_StaticFields, ___Instance_0)); }
	inline Transformer_1_tB4F33CE42FA8CDA6C1AEB382F3C767D3D702427D * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tB4F33CE42FA8CDA6C1AEB382F3C767D3D702427D ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tB4F33CE42FA8CDA6C1AEB382F3C767D3D702427D * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int32,System.UIntPtr>
struct Caster_1_t0233A96550545D6F17A5141586520D492131F3AF  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t0233A96550545D6F17A5141586520D492131F3AF_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t64BE2DF002F043C82C776B57E74B06CBF540475A * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t0233A96550545D6F17A5141586520D492131F3AF_StaticFields, ___Instance_0)); }
	inline Transformer_1_t64BE2DF002F043C82C776B57E74B06CBF540475A * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t64BE2DF002F043C82C776B57E74B06CBF540475A ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t64BE2DF002F043C82C776B57E74B06CBF540475A * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int64,System.Boolean>
struct Caster_1_t78D880B4DED6A81AFFB3DA6D32BA8A0E295F3788  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t78D880B4DED6A81AFFB3DA6D32BA8A0E295F3788_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tEAC0B3C94575ECFC1F5F52CF95B8281D45B17E82 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t78D880B4DED6A81AFFB3DA6D32BA8A0E295F3788_StaticFields, ___Instance_0)); }
	inline Transformer_1_tEAC0B3C94575ECFC1F5F52CF95B8281D45B17E82 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tEAC0B3C94575ECFC1F5F52CF95B8281D45B17E82 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tEAC0B3C94575ECFC1F5F52CF95B8281D45B17E82 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int64,System.Byte>
struct Caster_1_tF1E9F5ACC455E168230D60D0AE5E848A5DBE2930  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tF1E9F5ACC455E168230D60D0AE5E848A5DBE2930_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tEE83BA38EF2ECC4720D526BBB03AD2D7847DC673 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tF1E9F5ACC455E168230D60D0AE5E848A5DBE2930_StaticFields, ___Instance_0)); }
	inline Transformer_1_tEE83BA38EF2ECC4720D526BBB03AD2D7847DC673 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tEE83BA38EF2ECC4720D526BBB03AD2D7847DC673 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tEE83BA38EF2ECC4720D526BBB03AD2D7847DC673 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int64,System.Char>
struct Caster_1_t95AC156F3D75823ABA3B6749B8E5DAAF8EB6AB25  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t95AC156F3D75823ABA3B6749B8E5DAAF8EB6AB25_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t9BA41A256E2DA69FF4771DEB014C7A916468BC66 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t95AC156F3D75823ABA3B6749B8E5DAAF8EB6AB25_StaticFields, ___Instance_0)); }
	inline Transformer_1_t9BA41A256E2DA69FF4771DEB014C7A916468BC66 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t9BA41A256E2DA69FF4771DEB014C7A916468BC66 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t9BA41A256E2DA69FF4771DEB014C7A916468BC66 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Caster_1_t8B6EA4487FE31C415BCD954287C70DF849E09E08  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t8B6EA4487FE31C415BCD954287C70DF849E09E08_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t522A3AB35D286FE6FF0D73E32E18AF9BA2C889B6 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t8B6EA4487FE31C415BCD954287C70DF849E09E08_StaticFields, ___Instance_0)); }
	inline Transformer_1_t522A3AB35D286FE6FF0D73E32E18AF9BA2C889B6 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t522A3AB35D286FE6FF0D73E32E18AF9BA2C889B6 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t522A3AB35D286FE6FF0D73E32E18AF9BA2C889B6 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int64,System.DateTime>
struct Caster_1_t2314A24A7931390C6867F5AB59BCE7DF7875EDB6  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t2314A24A7931390C6867F5AB59BCE7DF7875EDB6_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tCA45FD544A9D029E08729452F32B044016B2F8EE * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t2314A24A7931390C6867F5AB59BCE7DF7875EDB6_StaticFields, ___Instance_0)); }
	inline Transformer_1_tCA45FD544A9D029E08729452F32B044016B2F8EE * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tCA45FD544A9D029E08729452F32B044016B2F8EE ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tCA45FD544A9D029E08729452F32B044016B2F8EE * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int64,System.DateTimeOffset>
struct Caster_1_t39143C74EFB8AD6200EFEE9E31A9EBDC9718F1E5  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t39143C74EFB8AD6200EFEE9E31A9EBDC9718F1E5_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t857CBA0AC2F70C8D74D8183C19537F7A692F21A7 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t39143C74EFB8AD6200EFEE9E31A9EBDC9718F1E5_StaticFields, ___Instance_0)); }
	inline Transformer_1_t857CBA0AC2F70C8D74D8183C19537F7A692F21A7 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t857CBA0AC2F70C8D74D8183C19537F7A692F21A7 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t857CBA0AC2F70C8D74D8183C19537F7A692F21A7 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int64,System.Decimal>
struct Caster_1_t4B1D64CB72ED6461809D48568ECB009A92F781FE  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t4B1D64CB72ED6461809D48568ECB009A92F781FE_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tE30A5AE1F549407B3087EBD3EC6E8DB713D78DC2 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t4B1D64CB72ED6461809D48568ECB009A92F781FE_StaticFields, ___Instance_0)); }
	inline Transformer_1_tE30A5AE1F549407B3087EBD3EC6E8DB713D78DC2 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tE30A5AE1F549407B3087EBD3EC6E8DB713D78DC2 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tE30A5AE1F549407B3087EBD3EC6E8DB713D78DC2 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int64,System.Diagnostics.Tracing.EmptyStruct>
struct Caster_1_t279DFE68F30E6659059D94B02BD5361A9BBE40D4  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t279DFE68F30E6659059D94B02BD5361A9BBE40D4_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t41E828E06402D572E82833CAFA0E9727745F7A0D * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t279DFE68F30E6659059D94B02BD5361A9BBE40D4_StaticFields, ___Instance_0)); }
	inline Transformer_1_t41E828E06402D572E82833CAFA0E9727745F7A0D * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t41E828E06402D572E82833CAFA0E9727745F7A0D ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t41E828E06402D572E82833CAFA0E9727745F7A0D * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int64,System.Double>
struct Caster_1_tFFC10B3F233B81FE8D4EA64668FE2EA15A433C6D  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tFFC10B3F233B81FE8D4EA64668FE2EA15A433C6D_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tD1B097B6BB34F0B4B3455970FC79E6A585DE5B8A * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tFFC10B3F233B81FE8D4EA64668FE2EA15A433C6D_StaticFields, ___Instance_0)); }
	inline Transformer_1_tD1B097B6BB34F0B4B3455970FC79E6A585DE5B8A * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tD1B097B6BB34F0B4B3455970FC79E6A585DE5B8A ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tD1B097B6BB34F0B4B3455970FC79E6A585DE5B8A * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int64,System.Guid>
struct Caster_1_t7F15074A7BC9B5DA634F74067B2CAA3E4D8C7379  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t7F15074A7BC9B5DA634F74067B2CAA3E4D8C7379_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t39D48650F87DB03E776EE44D5C8F156643CCD9A0 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t7F15074A7BC9B5DA634F74067B2CAA3E4D8C7379_StaticFields, ___Instance_0)); }
	inline Transformer_1_t39D48650F87DB03E776EE44D5C8F156643CCD9A0 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t39D48650F87DB03E776EE44D5C8F156643CCD9A0 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t39D48650F87DB03E776EE44D5C8F156643CCD9A0 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int64,System.Int16>
struct Caster_1_tE25B230380E2CE54B9276690CD814DE511450833  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tE25B230380E2CE54B9276690CD814DE511450833_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tC51C59F619800C8468ED4694D7779761A5403071 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tE25B230380E2CE54B9276690CD814DE511450833_StaticFields, ___Instance_0)); }
	inline Transformer_1_tC51C59F619800C8468ED4694D7779761A5403071 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tC51C59F619800C8468ED4694D7779761A5403071 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tC51C59F619800C8468ED4694D7779761A5403071 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int64,System.Int32>
struct Caster_1_t3B87E9C89959ABEE4F6F1172FFA2D99D20FEAF4D  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t3B87E9C89959ABEE4F6F1172FFA2D99D20FEAF4D_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tCB26A79652B363A8064BBAF43700A09A80610C91 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t3B87E9C89959ABEE4F6F1172FFA2D99D20FEAF4D_StaticFields, ___Instance_0)); }
	inline Transformer_1_tCB26A79652B363A8064BBAF43700A09A80610C91 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tCB26A79652B363A8064BBAF43700A09A80610C91 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tCB26A79652B363A8064BBAF43700A09A80610C91 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int64,System.Int64>
struct Caster_1_t7D3ABA04133A298DFD0422ADFEBDEF3656AF0031  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t7D3ABA04133A298DFD0422ADFEBDEF3656AF0031_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tB3B4F4C80F506532A9BC19E9995C82DE17840E96 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t7D3ABA04133A298DFD0422ADFEBDEF3656AF0031_StaticFields, ___Instance_0)); }
	inline Transformer_1_tB3B4F4C80F506532A9BC19E9995C82DE17840E96 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tB3B4F4C80F506532A9BC19E9995C82DE17840E96 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tB3B4F4C80F506532A9BC19E9995C82DE17840E96 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int64,System.IntPtr>
struct Caster_1_t9E4D034C656C467484BBD42F5B9FF5B91F790BED  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t9E4D034C656C467484BBD42F5B9FF5B91F790BED_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t60B3D9EF53100FA49F00B43536652E9473B31171 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t9E4D034C656C467484BBD42F5B9FF5B91F790BED_StaticFields, ___Instance_0)); }
	inline Transformer_1_t60B3D9EF53100FA49F00B43536652E9473B31171 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t60B3D9EF53100FA49F00B43536652E9473B31171 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t60B3D9EF53100FA49F00B43536652E9473B31171 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int64,System.Object>
struct Caster_1_t7F4B7F98CCD80CC0E1B52334B484C566B3772846  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t7F4B7F98CCD80CC0E1B52334B484C566B3772846_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t55A8AAC336D2E181D0CC38D11BD1B30145E6479D * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t7F4B7F98CCD80CC0E1B52334B484C566B3772846_StaticFields, ___Instance_0)); }
	inline Transformer_1_t55A8AAC336D2E181D0CC38D11BD1B30145E6479D * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t55A8AAC336D2E181D0CC38D11BD1B30145E6479D ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t55A8AAC336D2E181D0CC38D11BD1B30145E6479D * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int64,System.SByte>
struct Caster_1_tD1867CCD99C0E4D6779357AA6EAE58CA54AE0AF4  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tD1867CCD99C0E4D6779357AA6EAE58CA54AE0AF4_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t01DCD4DD4A9D8250EDA7C3884A31ADCBC0CA2F31 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tD1867CCD99C0E4D6779357AA6EAE58CA54AE0AF4_StaticFields, ___Instance_0)); }
	inline Transformer_1_t01DCD4DD4A9D8250EDA7C3884A31ADCBC0CA2F31 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t01DCD4DD4A9D8250EDA7C3884A31ADCBC0CA2F31 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t01DCD4DD4A9D8250EDA7C3884A31ADCBC0CA2F31 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int64,System.Single>
struct Caster_1_tCADDC259BB0BC859D77522BE7660068F2B40F0FC  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tCADDC259BB0BC859D77522BE7660068F2B40F0FC_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tDC0440FA1979CE8CAEE05E55C3F77B191B3864A5 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tCADDC259BB0BC859D77522BE7660068F2B40F0FC_StaticFields, ___Instance_0)); }
	inline Transformer_1_tDC0440FA1979CE8CAEE05E55C3F77B191B3864A5 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tDC0440FA1979CE8CAEE05E55C3F77B191B3864A5 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tDC0440FA1979CE8CAEE05E55C3F77B191B3864A5 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int64,System.TimeSpan>
struct Caster_1_tB392A04593C4239456BD2F10286A27F0AE928679  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tB392A04593C4239456BD2F10286A27F0AE928679_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t5D03480C8430BB4B110B1A825293797FEA351E99 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tB392A04593C4239456BD2F10286A27F0AE928679_StaticFields, ___Instance_0)); }
	inline Transformer_1_t5D03480C8430BB4B110B1A825293797FEA351E99 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t5D03480C8430BB4B110B1A825293797FEA351E99 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t5D03480C8430BB4B110B1A825293797FEA351E99 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int64,System.UInt16>
struct Caster_1_t9F5AB8620B99DD3C4BBDD28E6F5A78003016D254  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t9F5AB8620B99DD3C4BBDD28E6F5A78003016D254_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t8A89FB68F46FF4353E966CC00B908CA34497EA95 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t9F5AB8620B99DD3C4BBDD28E6F5A78003016D254_StaticFields, ___Instance_0)); }
	inline Transformer_1_t8A89FB68F46FF4353E966CC00B908CA34497EA95 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t8A89FB68F46FF4353E966CC00B908CA34497EA95 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t8A89FB68F46FF4353E966CC00B908CA34497EA95 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int64,System.UInt32>
struct Caster_1_t5F92169CA22878B796AF5109203D193F987A4A39  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t5F92169CA22878B796AF5109203D193F987A4A39_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t0AFADFC854814929C26DD9D901BE57FF25AD0FAE * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t5F92169CA22878B796AF5109203D193F987A4A39_StaticFields, ___Instance_0)); }
	inline Transformer_1_t0AFADFC854814929C26DD9D901BE57FF25AD0FAE * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t0AFADFC854814929C26DD9D901BE57FF25AD0FAE ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t0AFADFC854814929C26DD9D901BE57FF25AD0FAE * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int64,System.UInt64>
struct Caster_1_tF96225B214D9B7EE71FE55E75A65EBD3AFEFAB6C  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tF96225B214D9B7EE71FE55E75A65EBD3AFEFAB6C_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t1DABC0789361F050A97DCB9B0BF426488849447B * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tF96225B214D9B7EE71FE55E75A65EBD3AFEFAB6C_StaticFields, ___Instance_0)); }
	inline Transformer_1_t1DABC0789361F050A97DCB9B0BF426488849447B * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t1DABC0789361F050A97DCB9B0BF426488849447B ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t1DABC0789361F050A97DCB9B0BF426488849447B * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Int64,System.UIntPtr>
struct Caster_1_t02CDD619AF43E06FEDAB4F242EB5DAB284E98B19  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t02CDD619AF43E06FEDAB4F242EB5DAB284E98B19_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tB15772C7E9B7C5700966A8D43542601D4E3C1E66 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t02CDD619AF43E06FEDAB4F242EB5DAB284E98B19_StaticFields, ___Instance_0)); }
	inline Transformer_1_tB15772C7E9B7C5700966A8D43542601D4E3C1E66 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tB15772C7E9B7C5700966A8D43542601D4E3C1E66 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tB15772C7E9B7C5700966A8D43542601D4E3C1E66 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.Object,System.Object>
struct Caster_1_t195DBA8A516B142DCC1ACA2DA98380583B5F1D8E  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t195DBA8A516B142DCC1ACA2DA98380583B5F1D8E_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t338D76BCAA91120B467D3111015F22FB4F0FD2FA * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t195DBA8A516B142DCC1ACA2DA98380583B5F1D8E_StaticFields, ___Instance_0)); }
	inline Transformer_1_t338D76BCAA91120B467D3111015F22FB4F0FD2FA * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t338D76BCAA91120B467D3111015F22FB4F0FD2FA ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t338D76BCAA91120B467D3111015F22FB4F0FD2FA * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.SByte,System.Boolean>
struct Caster_1_t9548AD2802014C51CE95C2D167F4C5AFF00F7AB0  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t9548AD2802014C51CE95C2D167F4C5AFF00F7AB0_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t79570F2F3007DB1835D814B8075FDC98BC3553A7 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t9548AD2802014C51CE95C2D167F4C5AFF00F7AB0_StaticFields, ___Instance_0)); }
	inline Transformer_1_t79570F2F3007DB1835D814B8075FDC98BC3553A7 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t79570F2F3007DB1835D814B8075FDC98BC3553A7 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t79570F2F3007DB1835D814B8075FDC98BC3553A7 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.SByte,System.Byte>
struct Caster_1_t6D09AA62870A76ABA6E5E4D301AFCCF93F194424  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t6D09AA62870A76ABA6E5E4D301AFCCF93F194424_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tF8540D89C13FFD7703F79D80D228D878E23A3ADE * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t6D09AA62870A76ABA6E5E4D301AFCCF93F194424_StaticFields, ___Instance_0)); }
	inline Transformer_1_tF8540D89C13FFD7703F79D80D228D878E23A3ADE * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tF8540D89C13FFD7703F79D80D228D878E23A3ADE ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tF8540D89C13FFD7703F79D80D228D878E23A3ADE * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.SByte,System.Char>
struct Caster_1_t7BED5C159FA7237F00FC5BF1362A67DD3DEE749A  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t7BED5C159FA7237F00FC5BF1362A67DD3DEE749A_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tA6C8CCCFAE41F969307DFD6B15049A2AC4E87B2E * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t7BED5C159FA7237F00FC5BF1362A67DD3DEE749A_StaticFields, ___Instance_0)); }
	inline Transformer_1_tA6C8CCCFAE41F969307DFD6B15049A2AC4E87B2E * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tA6C8CCCFAE41F969307DFD6B15049A2AC4E87B2E ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tA6C8CCCFAE41F969307DFD6B15049A2AC4E87B2E * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.SByte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Caster_1_tFE5F9417466A4CB788D519C7878ECCB397E668A1  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tFE5F9417466A4CB788D519C7878ECCB397E668A1_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t42D4002780D07F2123783F0D69A304CD6984F13D * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tFE5F9417466A4CB788D519C7878ECCB397E668A1_StaticFields, ___Instance_0)); }
	inline Transformer_1_t42D4002780D07F2123783F0D69A304CD6984F13D * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t42D4002780D07F2123783F0D69A304CD6984F13D ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t42D4002780D07F2123783F0D69A304CD6984F13D * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.SByte,System.DateTime>
struct Caster_1_tB027436891672D8E446545806D30A74D601A125F  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tB027436891672D8E446545806D30A74D601A125F_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t7B71FCE554A579C8F8EE31C925E7CC3A260F65B0 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tB027436891672D8E446545806D30A74D601A125F_StaticFields, ___Instance_0)); }
	inline Transformer_1_t7B71FCE554A579C8F8EE31C925E7CC3A260F65B0 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t7B71FCE554A579C8F8EE31C925E7CC3A260F65B0 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t7B71FCE554A579C8F8EE31C925E7CC3A260F65B0 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.SByte,System.DateTimeOffset>
struct Caster_1_tC50D5F2635E0A7DCD57C363B1CA71CFEA00F93EF  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tC50D5F2635E0A7DCD57C363B1CA71CFEA00F93EF_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t0C4CCE96CE8A1C5FA519A098E2CBD37BEC2CA324 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tC50D5F2635E0A7DCD57C363B1CA71CFEA00F93EF_StaticFields, ___Instance_0)); }
	inline Transformer_1_t0C4CCE96CE8A1C5FA519A098E2CBD37BEC2CA324 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t0C4CCE96CE8A1C5FA519A098E2CBD37BEC2CA324 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t0C4CCE96CE8A1C5FA519A098E2CBD37BEC2CA324 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.SByte,System.Decimal>
struct Caster_1_tE749C798EEF25AA04DF0E56627917C360336EBA4  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tE749C798EEF25AA04DF0E56627917C360336EBA4_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tC8E702F6B3A43AAD921E235014B8BEE380D6C8E6 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tE749C798EEF25AA04DF0E56627917C360336EBA4_StaticFields, ___Instance_0)); }
	inline Transformer_1_tC8E702F6B3A43AAD921E235014B8BEE380D6C8E6 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tC8E702F6B3A43AAD921E235014B8BEE380D6C8E6 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tC8E702F6B3A43AAD921E235014B8BEE380D6C8E6 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.SByte,System.Diagnostics.Tracing.EmptyStruct>
struct Caster_1_t70BCB30FF0C2DF9E545F34DEF21271408068477F  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t70BCB30FF0C2DF9E545F34DEF21271408068477F_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tBEAC8A938CBDB8AAB69661EFA8EA0FB141525D53 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t70BCB30FF0C2DF9E545F34DEF21271408068477F_StaticFields, ___Instance_0)); }
	inline Transformer_1_tBEAC8A938CBDB8AAB69661EFA8EA0FB141525D53 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tBEAC8A938CBDB8AAB69661EFA8EA0FB141525D53 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tBEAC8A938CBDB8AAB69661EFA8EA0FB141525D53 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.SByte,System.Double>
struct Caster_1_tC218F4859CF65473DA915EE5333EFDCFEE72392E  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tC218F4859CF65473DA915EE5333EFDCFEE72392E_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tF0766B96906F251FDCA58F9C63D53C429A053601 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tC218F4859CF65473DA915EE5333EFDCFEE72392E_StaticFields, ___Instance_0)); }
	inline Transformer_1_tF0766B96906F251FDCA58F9C63D53C429A053601 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tF0766B96906F251FDCA58F9C63D53C429A053601 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tF0766B96906F251FDCA58F9C63D53C429A053601 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.SByte,System.Guid>
struct Caster_1_t8409BE0ECE6FE2A29D79E7044752D251CB863421  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t8409BE0ECE6FE2A29D79E7044752D251CB863421_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tBBF50A3F30EEFDE66991F29F64E2D0A0455DE463 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t8409BE0ECE6FE2A29D79E7044752D251CB863421_StaticFields, ___Instance_0)); }
	inline Transformer_1_tBBF50A3F30EEFDE66991F29F64E2D0A0455DE463 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tBBF50A3F30EEFDE66991F29F64E2D0A0455DE463 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tBBF50A3F30EEFDE66991F29F64E2D0A0455DE463 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.SByte,System.Int16>
struct Caster_1_t62F9F0EA0D2CF70BE880EC5B4DB6C4E3BD191FF1  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t62F9F0EA0D2CF70BE880EC5B4DB6C4E3BD191FF1_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tA87CAE242D2B98DEB22E378E1E67ABA48B2C74D4 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t62F9F0EA0D2CF70BE880EC5B4DB6C4E3BD191FF1_StaticFields, ___Instance_0)); }
	inline Transformer_1_tA87CAE242D2B98DEB22E378E1E67ABA48B2C74D4 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tA87CAE242D2B98DEB22E378E1E67ABA48B2C74D4 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tA87CAE242D2B98DEB22E378E1E67ABA48B2C74D4 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.SByte,System.Int32>
struct Caster_1_t12F7AE622EDC8B8147BB5162376EAEBD2A1A716D  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t12F7AE622EDC8B8147BB5162376EAEBD2A1A716D_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tD3A676069C04AAC638676241B25E06E84FEDDF60 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t12F7AE622EDC8B8147BB5162376EAEBD2A1A716D_StaticFields, ___Instance_0)); }
	inline Transformer_1_tD3A676069C04AAC638676241B25E06E84FEDDF60 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tD3A676069C04AAC638676241B25E06E84FEDDF60 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tD3A676069C04AAC638676241B25E06E84FEDDF60 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.SByte,System.Int64>
struct Caster_1_t9136EB8D74B86E14C4D0B7DE2699BB30FF62ADE0  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t9136EB8D74B86E14C4D0B7DE2699BB30FF62ADE0_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tE0C44E54BCD5DF5FF3AC9F52C13F1428FBBD4084 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t9136EB8D74B86E14C4D0B7DE2699BB30FF62ADE0_StaticFields, ___Instance_0)); }
	inline Transformer_1_tE0C44E54BCD5DF5FF3AC9F52C13F1428FBBD4084 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tE0C44E54BCD5DF5FF3AC9F52C13F1428FBBD4084 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tE0C44E54BCD5DF5FF3AC9F52C13F1428FBBD4084 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.SByte,System.IntPtr>
struct Caster_1_t3AEE07159271C04282D4520F761455EA4BF25B90  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t3AEE07159271C04282D4520F761455EA4BF25B90_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tAE4605051B411219A47F37FD57F817C772C5D831 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t3AEE07159271C04282D4520F761455EA4BF25B90_StaticFields, ___Instance_0)); }
	inline Transformer_1_tAE4605051B411219A47F37FD57F817C772C5D831 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tAE4605051B411219A47F37FD57F817C772C5D831 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tAE4605051B411219A47F37FD57F817C772C5D831 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.SByte,System.Object>
struct Caster_1_tDE4AB1F4E3BD9C2B0BF368F239F02CD0D92D7D3B  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tDE4AB1F4E3BD9C2B0BF368F239F02CD0D92D7D3B_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t2100917DAFFEBF22F25BC5382C00308AE7962D49 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tDE4AB1F4E3BD9C2B0BF368F239F02CD0D92D7D3B_StaticFields, ___Instance_0)); }
	inline Transformer_1_t2100917DAFFEBF22F25BC5382C00308AE7962D49 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t2100917DAFFEBF22F25BC5382C00308AE7962D49 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t2100917DAFFEBF22F25BC5382C00308AE7962D49 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.SByte,System.SByte>
struct Caster_1_tCC08F4371265D272EC5F5C61F06234FB4C49F905  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tCC08F4371265D272EC5F5C61F06234FB4C49F905_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t745DB47A09FCB8577D6C816C1169CFECBB32F2C5 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tCC08F4371265D272EC5F5C61F06234FB4C49F905_StaticFields, ___Instance_0)); }
	inline Transformer_1_t745DB47A09FCB8577D6C816C1169CFECBB32F2C5 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t745DB47A09FCB8577D6C816C1169CFECBB32F2C5 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t745DB47A09FCB8577D6C816C1169CFECBB32F2C5 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.SByte,System.Single>
struct Caster_1_tB1E0520D57EA2A38EB25F38157F7FAE2077D0519  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tB1E0520D57EA2A38EB25F38157F7FAE2077D0519_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tBF9E21F5E62125133BAE8AB29F7A5FF8368A8867 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tB1E0520D57EA2A38EB25F38157F7FAE2077D0519_StaticFields, ___Instance_0)); }
	inline Transformer_1_tBF9E21F5E62125133BAE8AB29F7A5FF8368A8867 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tBF9E21F5E62125133BAE8AB29F7A5FF8368A8867 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tBF9E21F5E62125133BAE8AB29F7A5FF8368A8867 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.SByte,System.TimeSpan>
struct Caster_1_t063FFE54B6E834FCAADA9B98B6556AFEC0411632  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t063FFE54B6E834FCAADA9B98B6556AFEC0411632_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tF26DF9ED555578458A4BEBCC536B42CFE02ACC80 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t063FFE54B6E834FCAADA9B98B6556AFEC0411632_StaticFields, ___Instance_0)); }
	inline Transformer_1_tF26DF9ED555578458A4BEBCC536B42CFE02ACC80 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tF26DF9ED555578458A4BEBCC536B42CFE02ACC80 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tF26DF9ED555578458A4BEBCC536B42CFE02ACC80 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.SByte,System.UInt16>
struct Caster_1_tA4C712C2F66B1CCA6198D56E9156B3ED627F7E7F  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tA4C712C2F66B1CCA6198D56E9156B3ED627F7E7F_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t8D669EF524B3DA7294AF5ECC32689F786670F3BC * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tA4C712C2F66B1CCA6198D56E9156B3ED627F7E7F_StaticFields, ___Instance_0)); }
	inline Transformer_1_t8D669EF524B3DA7294AF5ECC32689F786670F3BC * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t8D669EF524B3DA7294AF5ECC32689F786670F3BC ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t8D669EF524B3DA7294AF5ECC32689F786670F3BC * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.SByte,System.UInt32>
struct Caster_1_t4E01ADD98CF6A52B499B239DD79900153A6E8CB9  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t4E01ADD98CF6A52B499B239DD79900153A6E8CB9_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t2C09253351F9C203CF31F34A19DE66BEA03581F3 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t4E01ADD98CF6A52B499B239DD79900153A6E8CB9_StaticFields, ___Instance_0)); }
	inline Transformer_1_t2C09253351F9C203CF31F34A19DE66BEA03581F3 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t2C09253351F9C203CF31F34A19DE66BEA03581F3 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t2C09253351F9C203CF31F34A19DE66BEA03581F3 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.SByte,System.UInt64>
struct Caster_1_tA76F3CD44521225217CEE9D5E70655913B3652F6  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tA76F3CD44521225217CEE9D5E70655913B3652F6_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tCF1372796CC314E10F8635C4972C44383BAC7023 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tA76F3CD44521225217CEE9D5E70655913B3652F6_StaticFields, ___Instance_0)); }
	inline Transformer_1_tCF1372796CC314E10F8635C4972C44383BAC7023 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tCF1372796CC314E10F8635C4972C44383BAC7023 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tCF1372796CC314E10F8635C4972C44383BAC7023 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.SByte,System.UIntPtr>
struct Caster_1_t27A7F78CA974CB9EB88650C0F7D4CCB345E0D6F0  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t27A7F78CA974CB9EB88650C0F7D4CCB345E0D6F0_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tBE6DD3E5AECE0264800ECFE10CF373FC541893E1 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t27A7F78CA974CB9EB88650C0F7D4CCB345E0D6F0_StaticFields, ___Instance_0)); }
	inline Transformer_1_tBE6DD3E5AECE0264800ECFE10CF373FC541893E1 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tBE6DD3E5AECE0264800ECFE10CF373FC541893E1 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tBE6DD3E5AECE0264800ECFE10CF373FC541893E1 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt16,System.Boolean>
struct Caster_1_t2AC7FD1B9C92018FCD42D2FBB7DE1C15E7C6141D  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t2AC7FD1B9C92018FCD42D2FBB7DE1C15E7C6141D_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t199C978828CCDD3DC4B333BD031B5DA73DE2C968 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t2AC7FD1B9C92018FCD42D2FBB7DE1C15E7C6141D_StaticFields, ___Instance_0)); }
	inline Transformer_1_t199C978828CCDD3DC4B333BD031B5DA73DE2C968 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t199C978828CCDD3DC4B333BD031B5DA73DE2C968 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t199C978828CCDD3DC4B333BD031B5DA73DE2C968 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt16,System.Byte>
struct Caster_1_tA9F99D3DE3C2B79878574DA79394D40484CF909C  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tA9F99D3DE3C2B79878574DA79394D40484CF909C_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t6F5F45E771B014CBE6BC711CD4C78E85A692E83F * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tA9F99D3DE3C2B79878574DA79394D40484CF909C_StaticFields, ___Instance_0)); }
	inline Transformer_1_t6F5F45E771B014CBE6BC711CD4C78E85A692E83F * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t6F5F45E771B014CBE6BC711CD4C78E85A692E83F ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t6F5F45E771B014CBE6BC711CD4C78E85A692E83F * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt16,System.Char>
struct Caster_1_t439110BADC840296B0301DC221E3742B2C8E8934  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t439110BADC840296B0301DC221E3742B2C8E8934_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tBBFF9537117C5BC9379D753F5293135DB33DF769 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t439110BADC840296B0301DC221E3742B2C8E8934_StaticFields, ___Instance_0)); }
	inline Transformer_1_tBBFF9537117C5BC9379D753F5293135DB33DF769 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tBBFF9537117C5BC9379D753F5293135DB33DF769 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tBBFF9537117C5BC9379D753F5293135DB33DF769 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt16,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Caster_1_t9CF680A45E2713569B0D6E5DCD3ACE8E5CE11A5F  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t9CF680A45E2713569B0D6E5DCD3ACE8E5CE11A5F_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t43360C920C6CB99E177E7D0C21F4631EB7353195 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t9CF680A45E2713569B0D6E5DCD3ACE8E5CE11A5F_StaticFields, ___Instance_0)); }
	inline Transformer_1_t43360C920C6CB99E177E7D0C21F4631EB7353195 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t43360C920C6CB99E177E7D0C21F4631EB7353195 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t43360C920C6CB99E177E7D0C21F4631EB7353195 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt16,System.DateTime>
struct Caster_1_t45EEB8AA14910B5FE2FEA34EC88A9154085E86BC  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t45EEB8AA14910B5FE2FEA34EC88A9154085E86BC_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tFF97AD2C8962456276364E309A52E6DE33100D56 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t45EEB8AA14910B5FE2FEA34EC88A9154085E86BC_StaticFields, ___Instance_0)); }
	inline Transformer_1_tFF97AD2C8962456276364E309A52E6DE33100D56 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tFF97AD2C8962456276364E309A52E6DE33100D56 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tFF97AD2C8962456276364E309A52E6DE33100D56 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt16,System.DateTimeOffset>
struct Caster_1_t0AD7C98192FA0900645BFF7111DF2264C1F11843  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t0AD7C98192FA0900645BFF7111DF2264C1F11843_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t43FCC452C755864725F9DF93DFBE108575461B01 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t0AD7C98192FA0900645BFF7111DF2264C1F11843_StaticFields, ___Instance_0)); }
	inline Transformer_1_t43FCC452C755864725F9DF93DFBE108575461B01 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t43FCC452C755864725F9DF93DFBE108575461B01 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t43FCC452C755864725F9DF93DFBE108575461B01 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt16,System.Decimal>
struct Caster_1_tB30E4B83744A2AB4B34E2140F09FF2DBAD9067A2  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tB30E4B83744A2AB4B34E2140F09FF2DBAD9067A2_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t0FD280BFFA34F4D2822CCA89C0E579D1D039C6EC * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tB30E4B83744A2AB4B34E2140F09FF2DBAD9067A2_StaticFields, ___Instance_0)); }
	inline Transformer_1_t0FD280BFFA34F4D2822CCA89C0E579D1D039C6EC * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t0FD280BFFA34F4D2822CCA89C0E579D1D039C6EC ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t0FD280BFFA34F4D2822CCA89C0E579D1D039C6EC * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt16,System.Diagnostics.Tracing.EmptyStruct>
struct Caster_1_t9F48A0F7F413295607FDDD8C95EAA2A8FB1BA77F  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t9F48A0F7F413295607FDDD8C95EAA2A8FB1BA77F_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t4E404370A1452595E3C5DB7882E5D8953D10E1A5 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t9F48A0F7F413295607FDDD8C95EAA2A8FB1BA77F_StaticFields, ___Instance_0)); }
	inline Transformer_1_t4E404370A1452595E3C5DB7882E5D8953D10E1A5 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t4E404370A1452595E3C5DB7882E5D8953D10E1A5 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t4E404370A1452595E3C5DB7882E5D8953D10E1A5 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt16,System.Double>
struct Caster_1_tFA61F79F888D97CEE77D5548328774BE7E4EB84A  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tFA61F79F888D97CEE77D5548328774BE7E4EB84A_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t96993E76204149647596BB8B93F89AF01BBC2DA1 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tFA61F79F888D97CEE77D5548328774BE7E4EB84A_StaticFields, ___Instance_0)); }
	inline Transformer_1_t96993E76204149647596BB8B93F89AF01BBC2DA1 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t96993E76204149647596BB8B93F89AF01BBC2DA1 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t96993E76204149647596BB8B93F89AF01BBC2DA1 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt16,System.Guid>
struct Caster_1_t62DA063BB7BB019FFBE6B9ED3A08D069E330FE87  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t62DA063BB7BB019FFBE6B9ED3A08D069E330FE87_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tC04472BECF0E4CEEAC0DD81250C1C45100A49760 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t62DA063BB7BB019FFBE6B9ED3A08D069E330FE87_StaticFields, ___Instance_0)); }
	inline Transformer_1_tC04472BECF0E4CEEAC0DD81250C1C45100A49760 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tC04472BECF0E4CEEAC0DD81250C1C45100A49760 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tC04472BECF0E4CEEAC0DD81250C1C45100A49760 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt16,System.Int16>
struct Caster_1_tF5CE3C0B8FDD93C834FC13D907003475F7844594  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tF5CE3C0B8FDD93C834FC13D907003475F7844594_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t752D0C62D1A2E9A30D3F6E06FB35683298BACEE8 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tF5CE3C0B8FDD93C834FC13D907003475F7844594_StaticFields, ___Instance_0)); }
	inline Transformer_1_t752D0C62D1A2E9A30D3F6E06FB35683298BACEE8 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t752D0C62D1A2E9A30D3F6E06FB35683298BACEE8 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t752D0C62D1A2E9A30D3F6E06FB35683298BACEE8 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt16,System.Int32>
struct Caster_1_t8F8BD84B7E2CC9232254A7A82FBEA7C1C7227E24  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t8F8BD84B7E2CC9232254A7A82FBEA7C1C7227E24_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tA6B55D2D785634BAC127EF306F25AD47252837A5 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t8F8BD84B7E2CC9232254A7A82FBEA7C1C7227E24_StaticFields, ___Instance_0)); }
	inline Transformer_1_tA6B55D2D785634BAC127EF306F25AD47252837A5 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tA6B55D2D785634BAC127EF306F25AD47252837A5 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tA6B55D2D785634BAC127EF306F25AD47252837A5 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt16,System.Int64>
struct Caster_1_t7796DD6DA3A2E903A8337A4426EA117003E4FF07  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t7796DD6DA3A2E903A8337A4426EA117003E4FF07_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t634A2D481C50B029D59732E0A8E9D02DF66A0551 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t7796DD6DA3A2E903A8337A4426EA117003E4FF07_StaticFields, ___Instance_0)); }
	inline Transformer_1_t634A2D481C50B029D59732E0A8E9D02DF66A0551 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t634A2D481C50B029D59732E0A8E9D02DF66A0551 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t634A2D481C50B029D59732E0A8E9D02DF66A0551 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt16,System.IntPtr>
struct Caster_1_tF06869CDE05BEA07C45D10B5C27C152492D8F494  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tF06869CDE05BEA07C45D10B5C27C152492D8F494_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t873B2E4C2418F756278367655E1C64D654382460 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tF06869CDE05BEA07C45D10B5C27C152492D8F494_StaticFields, ___Instance_0)); }
	inline Transformer_1_t873B2E4C2418F756278367655E1C64D654382460 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t873B2E4C2418F756278367655E1C64D654382460 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t873B2E4C2418F756278367655E1C64D654382460 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt16,System.Object>
struct Caster_1_t0E97020316A62558167F5F018A989125D28729AD  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t0E97020316A62558167F5F018A989125D28729AD_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t892625DF88EAC62E91E8CCC189CB451B8DC38F37 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t0E97020316A62558167F5F018A989125D28729AD_StaticFields, ___Instance_0)); }
	inline Transformer_1_t892625DF88EAC62E91E8CCC189CB451B8DC38F37 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t892625DF88EAC62E91E8CCC189CB451B8DC38F37 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t892625DF88EAC62E91E8CCC189CB451B8DC38F37 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt16,System.SByte>
struct Caster_1_t7194A004154AABF5CF224780C51648A67A6757A2  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t7194A004154AABF5CF224780C51648A67A6757A2_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t1996E09F6BED0E887AFBD3B5A3AE1C93DE6BF87A * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t7194A004154AABF5CF224780C51648A67A6757A2_StaticFields, ___Instance_0)); }
	inline Transformer_1_t1996E09F6BED0E887AFBD3B5A3AE1C93DE6BF87A * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t1996E09F6BED0E887AFBD3B5A3AE1C93DE6BF87A ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t1996E09F6BED0E887AFBD3B5A3AE1C93DE6BF87A * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt16,System.Single>
struct Caster_1_t073650CFFC30F591C4E5B47753CBDF6EAEC9AA0D  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t073650CFFC30F591C4E5B47753CBDF6EAEC9AA0D_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t4E1FF663FF50350704657A112291CD7D7596CEF1 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t073650CFFC30F591C4E5B47753CBDF6EAEC9AA0D_StaticFields, ___Instance_0)); }
	inline Transformer_1_t4E1FF663FF50350704657A112291CD7D7596CEF1 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t4E1FF663FF50350704657A112291CD7D7596CEF1 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t4E1FF663FF50350704657A112291CD7D7596CEF1 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt16,System.TimeSpan>
struct Caster_1_tC9893BC43C67D8FE44500C545C7D0B22FBDFA338  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tC9893BC43C67D8FE44500C545C7D0B22FBDFA338_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t91133D744423C020A19D0092C4FC03B6D3A4DFEE * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tC9893BC43C67D8FE44500C545C7D0B22FBDFA338_StaticFields, ___Instance_0)); }
	inline Transformer_1_t91133D744423C020A19D0092C4FC03B6D3A4DFEE * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t91133D744423C020A19D0092C4FC03B6D3A4DFEE ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t91133D744423C020A19D0092C4FC03B6D3A4DFEE * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt16,System.UInt16>
struct Caster_1_t97E30322734EE96D22D5EDDDA8A32D7F28BF9E0D  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t97E30322734EE96D22D5EDDDA8A32D7F28BF9E0D_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tE9522CA0DE0A4BE7D2EC9C999D7BDD2F4344FE62 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t97E30322734EE96D22D5EDDDA8A32D7F28BF9E0D_StaticFields, ___Instance_0)); }
	inline Transformer_1_tE9522CA0DE0A4BE7D2EC9C999D7BDD2F4344FE62 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tE9522CA0DE0A4BE7D2EC9C999D7BDD2F4344FE62 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tE9522CA0DE0A4BE7D2EC9C999D7BDD2F4344FE62 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt16,System.UInt32>
struct Caster_1_tEAB5EDC98E125207E56614BEDA0E194CDB6A81D2  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tEAB5EDC98E125207E56614BEDA0E194CDB6A81D2_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t1438E2C5AF736F2BAA3201667918AA58BE8FA46C * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tEAB5EDC98E125207E56614BEDA0E194CDB6A81D2_StaticFields, ___Instance_0)); }
	inline Transformer_1_t1438E2C5AF736F2BAA3201667918AA58BE8FA46C * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t1438E2C5AF736F2BAA3201667918AA58BE8FA46C ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t1438E2C5AF736F2BAA3201667918AA58BE8FA46C * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt16,System.UInt64>
struct Caster_1_tE1468C16E0D935665BAFEAE58EC1DC80FEA18FD0  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tE1468C16E0D935665BAFEAE58EC1DC80FEA18FD0_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t9D893B0CF47F60B5A1B332F156AE7885A7FA04AD * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tE1468C16E0D935665BAFEAE58EC1DC80FEA18FD0_StaticFields, ___Instance_0)); }
	inline Transformer_1_t9D893B0CF47F60B5A1B332F156AE7885A7FA04AD * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t9D893B0CF47F60B5A1B332F156AE7885A7FA04AD ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t9D893B0CF47F60B5A1B332F156AE7885A7FA04AD * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt16,System.UIntPtr>
struct Caster_1_t9DA7DEC0029E18FF11AF097849FFE2FD2B961C60  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t9DA7DEC0029E18FF11AF097849FFE2FD2B961C60_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tEF0B2B94C98E007D79F1E9A305F95F950D695A78 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t9DA7DEC0029E18FF11AF097849FFE2FD2B961C60_StaticFields, ___Instance_0)); }
	inline Transformer_1_tEF0B2B94C98E007D79F1E9A305F95F950D695A78 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tEF0B2B94C98E007D79F1E9A305F95F950D695A78 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tEF0B2B94C98E007D79F1E9A305F95F950D695A78 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt32,System.Boolean>
struct Caster_1_t1B6BC63943ECA453AF4038A2F429DC89D1C88504  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t1B6BC63943ECA453AF4038A2F429DC89D1C88504_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tF0E9BE6348CE010BB238AC31417785A08A6FB691 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t1B6BC63943ECA453AF4038A2F429DC89D1C88504_StaticFields, ___Instance_0)); }
	inline Transformer_1_tF0E9BE6348CE010BB238AC31417785A08A6FB691 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tF0E9BE6348CE010BB238AC31417785A08A6FB691 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tF0E9BE6348CE010BB238AC31417785A08A6FB691 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt32,System.Byte>
struct Caster_1_t1E5C78F2324B0966F93815A21CF15C56A6D1D763  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t1E5C78F2324B0966F93815A21CF15C56A6D1D763_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tB3723D31B530FDEAA4A1F13AA0708DA982630899 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t1E5C78F2324B0966F93815A21CF15C56A6D1D763_StaticFields, ___Instance_0)); }
	inline Transformer_1_tB3723D31B530FDEAA4A1F13AA0708DA982630899 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tB3723D31B530FDEAA4A1F13AA0708DA982630899 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tB3723D31B530FDEAA4A1F13AA0708DA982630899 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt32,System.Char>
struct Caster_1_tEED0D769437F89233D231DC79626AC0A6337593C  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tEED0D769437F89233D231DC79626AC0A6337593C_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t5476CAC37A40442328D49FE071C30E88285071D4 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tEED0D769437F89233D231DC79626AC0A6337593C_StaticFields, ___Instance_0)); }
	inline Transformer_1_t5476CAC37A40442328D49FE071C30E88285071D4 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t5476CAC37A40442328D49FE071C30E88285071D4 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t5476CAC37A40442328D49FE071C30E88285071D4 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Caster_1_t722135795C75F590A8BC1E4CE7DB7DDFFA14314A  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t722135795C75F590A8BC1E4CE7DB7DDFFA14314A_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t0FB7630995436BE02A2527779DBC4F2527867EEA * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t722135795C75F590A8BC1E4CE7DB7DDFFA14314A_StaticFields, ___Instance_0)); }
	inline Transformer_1_t0FB7630995436BE02A2527779DBC4F2527867EEA * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t0FB7630995436BE02A2527779DBC4F2527867EEA ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t0FB7630995436BE02A2527779DBC4F2527867EEA * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt32,System.DateTime>
struct Caster_1_t3F3455CCFC9311D353A7D8C4A42200408CA558BC  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t3F3455CCFC9311D353A7D8C4A42200408CA558BC_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t5D7AABD550DAD91D1A5365F5D8EF54C4DA2D3C52 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t3F3455CCFC9311D353A7D8C4A42200408CA558BC_StaticFields, ___Instance_0)); }
	inline Transformer_1_t5D7AABD550DAD91D1A5365F5D8EF54C4DA2D3C52 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t5D7AABD550DAD91D1A5365F5D8EF54C4DA2D3C52 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t5D7AABD550DAD91D1A5365F5D8EF54C4DA2D3C52 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt32,System.DateTimeOffset>
struct Caster_1_t2EE1EC204134DA58566A851DFA40A0B880948A86  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t2EE1EC204134DA58566A851DFA40A0B880948A86_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t928A4BC9752332E7976045EDA7D13F6580E95E62 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t2EE1EC204134DA58566A851DFA40A0B880948A86_StaticFields, ___Instance_0)); }
	inline Transformer_1_t928A4BC9752332E7976045EDA7D13F6580E95E62 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t928A4BC9752332E7976045EDA7D13F6580E95E62 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t928A4BC9752332E7976045EDA7D13F6580E95E62 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt32,System.Decimal>
struct Caster_1_t0BBCE2A7CB1298EE3E1F92A4EE98EE1FEA34EC7F  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t0BBCE2A7CB1298EE3E1F92A4EE98EE1FEA34EC7F_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tDCFCB89419FEE534E3F73EC59CE6765F40E3CDDC * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t0BBCE2A7CB1298EE3E1F92A4EE98EE1FEA34EC7F_StaticFields, ___Instance_0)); }
	inline Transformer_1_tDCFCB89419FEE534E3F73EC59CE6765F40E3CDDC * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tDCFCB89419FEE534E3F73EC59CE6765F40E3CDDC ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tDCFCB89419FEE534E3F73EC59CE6765F40E3CDDC * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt32,System.Diagnostics.Tracing.EmptyStruct>
struct Caster_1_tEB26AB756A5FFD5D46CEFADFD4354B569FE79E35  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tEB26AB756A5FFD5D46CEFADFD4354B569FE79E35_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tC99356A59E2E936732EB9B87073CB69F8D9A0E56 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tEB26AB756A5FFD5D46CEFADFD4354B569FE79E35_StaticFields, ___Instance_0)); }
	inline Transformer_1_tC99356A59E2E936732EB9B87073CB69F8D9A0E56 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tC99356A59E2E936732EB9B87073CB69F8D9A0E56 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tC99356A59E2E936732EB9B87073CB69F8D9A0E56 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt32,System.Double>
struct Caster_1_t4EF5B9F285768775D3C068FAF5475BD3A7560098  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t4EF5B9F285768775D3C068FAF5475BD3A7560098_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tBA40A0C65141CC06E9FE7E2B859F14B7B186F5D6 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t4EF5B9F285768775D3C068FAF5475BD3A7560098_StaticFields, ___Instance_0)); }
	inline Transformer_1_tBA40A0C65141CC06E9FE7E2B859F14B7B186F5D6 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tBA40A0C65141CC06E9FE7E2B859F14B7B186F5D6 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tBA40A0C65141CC06E9FE7E2B859F14B7B186F5D6 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt32,System.Guid>
struct Caster_1_t82D455B6810AAD5E0FB1B33CBEAE2D7F6B1215C1  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t82D455B6810AAD5E0FB1B33CBEAE2D7F6B1215C1_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tEB01E6A2E0B3756D68B5715EC212184D5FF1583E * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t82D455B6810AAD5E0FB1B33CBEAE2D7F6B1215C1_StaticFields, ___Instance_0)); }
	inline Transformer_1_tEB01E6A2E0B3756D68B5715EC212184D5FF1583E * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tEB01E6A2E0B3756D68B5715EC212184D5FF1583E ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tEB01E6A2E0B3756D68B5715EC212184D5FF1583E * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt32,System.Int16>
struct Caster_1_tFBB6815F7209EA2669845E4F5390708755B6A996  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tFBB6815F7209EA2669845E4F5390708755B6A996_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t2F0D48F97FB9DB755CBD7D8BD1063744902DD7D4 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tFBB6815F7209EA2669845E4F5390708755B6A996_StaticFields, ___Instance_0)); }
	inline Transformer_1_t2F0D48F97FB9DB755CBD7D8BD1063744902DD7D4 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t2F0D48F97FB9DB755CBD7D8BD1063744902DD7D4 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t2F0D48F97FB9DB755CBD7D8BD1063744902DD7D4 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt32,System.Int32>
struct Caster_1_t79F9BB0534172847D8A8840D22FEA3ACBF6E2E30  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t79F9BB0534172847D8A8840D22FEA3ACBF6E2E30_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tEE904E877A0E7069658C31FC99833B17AC05794C * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t79F9BB0534172847D8A8840D22FEA3ACBF6E2E30_StaticFields, ___Instance_0)); }
	inline Transformer_1_tEE904E877A0E7069658C31FC99833B17AC05794C * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tEE904E877A0E7069658C31FC99833B17AC05794C ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tEE904E877A0E7069658C31FC99833B17AC05794C * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt32,System.Int64>
struct Caster_1_t2E73FCE9B801A6C9D2357B69DB15EE7FF8CCDBD8  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t2E73FCE9B801A6C9D2357B69DB15EE7FF8CCDBD8_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tB77123930E8D4DBBDFEFB1F00D7ABD5F5862C41D * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t2E73FCE9B801A6C9D2357B69DB15EE7FF8CCDBD8_StaticFields, ___Instance_0)); }
	inline Transformer_1_tB77123930E8D4DBBDFEFB1F00D7ABD5F5862C41D * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tB77123930E8D4DBBDFEFB1F00D7ABD5F5862C41D ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tB77123930E8D4DBBDFEFB1F00D7ABD5F5862C41D * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt32,System.IntPtr>
struct Caster_1_t7428F42D13DDC0C1A066BD1EE9BC521E66BA5BC1  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t7428F42D13DDC0C1A066BD1EE9BC521E66BA5BC1_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tD21324C229A06C2679EF7ADBF30B4721FCE846A9 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t7428F42D13DDC0C1A066BD1EE9BC521E66BA5BC1_StaticFields, ___Instance_0)); }
	inline Transformer_1_tD21324C229A06C2679EF7ADBF30B4721FCE846A9 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tD21324C229A06C2679EF7ADBF30B4721FCE846A9 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tD21324C229A06C2679EF7ADBF30B4721FCE846A9 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt32,System.Object>
struct Caster_1_tB69CF02AAB845E9B3DDB7E61DDA09AE13B6C05C2  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tB69CF02AAB845E9B3DDB7E61DDA09AE13B6C05C2_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t9591C03D292D1491DC84BED40FA4074B4BA228BA * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tB69CF02AAB845E9B3DDB7E61DDA09AE13B6C05C2_StaticFields, ___Instance_0)); }
	inline Transformer_1_t9591C03D292D1491DC84BED40FA4074B4BA228BA * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t9591C03D292D1491DC84BED40FA4074B4BA228BA ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t9591C03D292D1491DC84BED40FA4074B4BA228BA * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt32,System.SByte>
struct Caster_1_t5B781D2583194FDAD58A1DEB85D1364FB241544E  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t5B781D2583194FDAD58A1DEB85D1364FB241544E_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tB8774B9E44E29CAB971A668FD6481EE169AB7512 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t5B781D2583194FDAD58A1DEB85D1364FB241544E_StaticFields, ___Instance_0)); }
	inline Transformer_1_tB8774B9E44E29CAB971A668FD6481EE169AB7512 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tB8774B9E44E29CAB971A668FD6481EE169AB7512 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tB8774B9E44E29CAB971A668FD6481EE169AB7512 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt32,System.Single>
struct Caster_1_tFB47F8B972002AEAC72800811486FA13E467A8BF  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tFB47F8B972002AEAC72800811486FA13E467A8BF_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tF0690E4E722BA56F3D7C83E9AEB806F0B61B361D * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tFB47F8B972002AEAC72800811486FA13E467A8BF_StaticFields, ___Instance_0)); }
	inline Transformer_1_tF0690E4E722BA56F3D7C83E9AEB806F0B61B361D * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tF0690E4E722BA56F3D7C83E9AEB806F0B61B361D ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tF0690E4E722BA56F3D7C83E9AEB806F0B61B361D * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt32,System.TimeSpan>
struct Caster_1_tC8767D376B189ACD381153C9C173514211A0FE0F  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tC8767D376B189ACD381153C9C173514211A0FE0F_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t8B10503B337E6FE4E07A3B64D22B131931C9A9F4 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tC8767D376B189ACD381153C9C173514211A0FE0F_StaticFields, ___Instance_0)); }
	inline Transformer_1_t8B10503B337E6FE4E07A3B64D22B131931C9A9F4 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t8B10503B337E6FE4E07A3B64D22B131931C9A9F4 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t8B10503B337E6FE4E07A3B64D22B131931C9A9F4 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt32,System.UInt16>
struct Caster_1_t42992A2C9D038623500C211031C77C7208D43273  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t42992A2C9D038623500C211031C77C7208D43273_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t047D5C4AD3C79057AB7D69ECC9D23F74520D09D6 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t42992A2C9D038623500C211031C77C7208D43273_StaticFields, ___Instance_0)); }
	inline Transformer_1_t047D5C4AD3C79057AB7D69ECC9D23F74520D09D6 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t047D5C4AD3C79057AB7D69ECC9D23F74520D09D6 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t047D5C4AD3C79057AB7D69ECC9D23F74520D09D6 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt32,System.UInt32>
struct Caster_1_t87A4B6548293C1368DDFCB40BA06CF49106148F9  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t87A4B6548293C1368DDFCB40BA06CF49106148F9_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t31C88D9234A257CF232D08C38BBC668EA052939A * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t87A4B6548293C1368DDFCB40BA06CF49106148F9_StaticFields, ___Instance_0)); }
	inline Transformer_1_t31C88D9234A257CF232D08C38BBC668EA052939A * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t31C88D9234A257CF232D08C38BBC668EA052939A ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t31C88D9234A257CF232D08C38BBC668EA052939A * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt32,System.UInt64>
struct Caster_1_tFD458BDD72B070794987225E3DB7C380E3CC37D2  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tFD458BDD72B070794987225E3DB7C380E3CC37D2_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t1C223741D12F9A057F5F088DE61B4E5D53913211 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tFD458BDD72B070794987225E3DB7C380E3CC37D2_StaticFields, ___Instance_0)); }
	inline Transformer_1_t1C223741D12F9A057F5F088DE61B4E5D53913211 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t1C223741D12F9A057F5F088DE61B4E5D53913211 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t1C223741D12F9A057F5F088DE61B4E5D53913211 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt32,System.UIntPtr>
struct Caster_1_t941B28C129B116297C114C4519CDE8190AB5C2D9  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t941B28C129B116297C114C4519CDE8190AB5C2D9_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tEB25E9328D7461EC15D82291238C49E2485032FD * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t941B28C129B116297C114C4519CDE8190AB5C2D9_StaticFields, ___Instance_0)); }
	inline Transformer_1_tEB25E9328D7461EC15D82291238C49E2485032FD * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tEB25E9328D7461EC15D82291238C49E2485032FD ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tEB25E9328D7461EC15D82291238C49E2485032FD * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt64,System.Boolean>
struct Caster_1_tD2A776BD441B8E1E656DBDBEA29CE09F6370B01D  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tD2A776BD441B8E1E656DBDBEA29CE09F6370B01D_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tE1D6D1C9A05B546D9C9CE23F63F38C39519B5CF5 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tD2A776BD441B8E1E656DBDBEA29CE09F6370B01D_StaticFields, ___Instance_0)); }
	inline Transformer_1_tE1D6D1C9A05B546D9C9CE23F63F38C39519B5CF5 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tE1D6D1C9A05B546D9C9CE23F63F38C39519B5CF5 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tE1D6D1C9A05B546D9C9CE23F63F38C39519B5CF5 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt64,System.Byte>
struct Caster_1_t482CB7C00B7672BE86AB37B58803EDDA5253C159  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t482CB7C00B7672BE86AB37B58803EDDA5253C159_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tA04593391E3C9151CF09B88E7F0B95B6EED79BFF * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t482CB7C00B7672BE86AB37B58803EDDA5253C159_StaticFields, ___Instance_0)); }
	inline Transformer_1_tA04593391E3C9151CF09B88E7F0B95B6EED79BFF * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tA04593391E3C9151CF09B88E7F0B95B6EED79BFF ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tA04593391E3C9151CF09B88E7F0B95B6EED79BFF * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt64,System.Char>
struct Caster_1_tC3C7676E4988AB84AD5D483DF6D6D51F652B8EAA  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tC3C7676E4988AB84AD5D483DF6D6D51F652B8EAA_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t6A70E5F51E34115D67058F5FBD3AD020056FE5F9 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tC3C7676E4988AB84AD5D483DF6D6D51F652B8EAA_StaticFields, ___Instance_0)); }
	inline Transformer_1_t6A70E5F51E34115D67058F5FBD3AD020056FE5F9 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t6A70E5F51E34115D67058F5FBD3AD020056FE5F9 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t6A70E5F51E34115D67058F5FBD3AD020056FE5F9 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Caster_1_tAEB42C1C02AED929BC1BEC04D98C0DF0C1BEFFC8  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tAEB42C1C02AED929BC1BEC04D98C0DF0C1BEFFC8_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t68FC4FB75CD82563AB347351CEFAE5414DA6F5EA * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tAEB42C1C02AED929BC1BEC04D98C0DF0C1BEFFC8_StaticFields, ___Instance_0)); }
	inline Transformer_1_t68FC4FB75CD82563AB347351CEFAE5414DA6F5EA * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t68FC4FB75CD82563AB347351CEFAE5414DA6F5EA ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t68FC4FB75CD82563AB347351CEFAE5414DA6F5EA * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt64,System.DateTime>
struct Caster_1_tCDE1BC83F41D1B9514A301F4F689ECD00B852E4B  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tCDE1BC83F41D1B9514A301F4F689ECD00B852E4B_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t3914ABAA4D6712C66DD4949F2BA84F3EC15B4FA3 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tCDE1BC83F41D1B9514A301F4F689ECD00B852E4B_StaticFields, ___Instance_0)); }
	inline Transformer_1_t3914ABAA4D6712C66DD4949F2BA84F3EC15B4FA3 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t3914ABAA4D6712C66DD4949F2BA84F3EC15B4FA3 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t3914ABAA4D6712C66DD4949F2BA84F3EC15B4FA3 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt64,System.DateTimeOffset>
struct Caster_1_t648D614B6DE9FA1B879A571830C1B8BC23894BC0  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t648D614B6DE9FA1B879A571830C1B8BC23894BC0_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tF6A13C624CBEF022B6BF46EA8998763A1BCF8A60 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t648D614B6DE9FA1B879A571830C1B8BC23894BC0_StaticFields, ___Instance_0)); }
	inline Transformer_1_tF6A13C624CBEF022B6BF46EA8998763A1BCF8A60 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tF6A13C624CBEF022B6BF46EA8998763A1BCF8A60 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tF6A13C624CBEF022B6BF46EA8998763A1BCF8A60 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt64,System.Decimal>
struct Caster_1_t4F5F7A38C557F7B9436C5C1F5FF63A6B645F482C  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t4F5F7A38C557F7B9436C5C1F5FF63A6B645F482C_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t1CCCD2A03706FE289179D42973958253711E1220 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t4F5F7A38C557F7B9436C5C1F5FF63A6B645F482C_StaticFields, ___Instance_0)); }
	inline Transformer_1_t1CCCD2A03706FE289179D42973958253711E1220 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t1CCCD2A03706FE289179D42973958253711E1220 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t1CCCD2A03706FE289179D42973958253711E1220 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt64,System.Diagnostics.Tracing.EmptyStruct>
struct Caster_1_t816F760E4CB91E8ED4749C51E1906DAA5FBFCBDD  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t816F760E4CB91E8ED4749C51E1906DAA5FBFCBDD_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t26EAA5376E027613D84066BFDACD29135BC0417F * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t816F760E4CB91E8ED4749C51E1906DAA5FBFCBDD_StaticFields, ___Instance_0)); }
	inline Transformer_1_t26EAA5376E027613D84066BFDACD29135BC0417F * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t26EAA5376E027613D84066BFDACD29135BC0417F ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t26EAA5376E027613D84066BFDACD29135BC0417F * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt64,System.Double>
struct Caster_1_tCA85C27159D944B0FA3E9E3AF4E43F1301C0856A  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tCA85C27159D944B0FA3E9E3AF4E43F1301C0856A_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tF7A377BD38E31E579BBB868F25B50E99BE887082 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tCA85C27159D944B0FA3E9E3AF4E43F1301C0856A_StaticFields, ___Instance_0)); }
	inline Transformer_1_tF7A377BD38E31E579BBB868F25B50E99BE887082 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tF7A377BD38E31E579BBB868F25B50E99BE887082 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tF7A377BD38E31E579BBB868F25B50E99BE887082 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt64,System.Guid>
struct Caster_1_t32E967508060A04E0F6F4A5A9E516B2751446098  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t32E967508060A04E0F6F4A5A9E516B2751446098_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t7A3CC6284B43CD7AE97F37A34B608ACB60C9BBF4 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t32E967508060A04E0F6F4A5A9E516B2751446098_StaticFields, ___Instance_0)); }
	inline Transformer_1_t7A3CC6284B43CD7AE97F37A34B608ACB60C9BBF4 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t7A3CC6284B43CD7AE97F37A34B608ACB60C9BBF4 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t7A3CC6284B43CD7AE97F37A34B608ACB60C9BBF4 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt64,System.Int16>
struct Caster_1_tF3538AE7B545B5E66C20C4C751A1EAEE76E82FEF  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tF3538AE7B545B5E66C20C4C751A1EAEE76E82FEF_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t07F206606D946D6F7126E2639D2BA30EE77B275C * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tF3538AE7B545B5E66C20C4C751A1EAEE76E82FEF_StaticFields, ___Instance_0)); }
	inline Transformer_1_t07F206606D946D6F7126E2639D2BA30EE77B275C * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t07F206606D946D6F7126E2639D2BA30EE77B275C ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t07F206606D946D6F7126E2639D2BA30EE77B275C * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt64,System.Int32>
struct Caster_1_t053E7CA3C6B09080F453D7B9ADCED0B07B7355B2  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t053E7CA3C6B09080F453D7B9ADCED0B07B7355B2_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tF8885F335E1C8610DD2BC9AC39EF6912377CA731 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t053E7CA3C6B09080F453D7B9ADCED0B07B7355B2_StaticFields, ___Instance_0)); }
	inline Transformer_1_tF8885F335E1C8610DD2BC9AC39EF6912377CA731 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tF8885F335E1C8610DD2BC9AC39EF6912377CA731 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tF8885F335E1C8610DD2BC9AC39EF6912377CA731 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt64,System.Int64>
struct Caster_1_t3DD97367B1E8C9F032197273CF90E5919C74B518  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t3DD97367B1E8C9F032197273CF90E5919C74B518_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tFC99DD5D67093DCEBB44F3A5BFDC47FDBBD7CF71 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t3DD97367B1E8C9F032197273CF90E5919C74B518_StaticFields, ___Instance_0)); }
	inline Transformer_1_tFC99DD5D67093DCEBB44F3A5BFDC47FDBBD7CF71 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tFC99DD5D67093DCEBB44F3A5BFDC47FDBBD7CF71 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tFC99DD5D67093DCEBB44F3A5BFDC47FDBBD7CF71 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt64,System.IntPtr>
struct Caster_1_t3E5340F9C3D63DE7B3280B37BCD14B25362CC87E  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t3E5340F9C3D63DE7B3280B37BCD14B25362CC87E_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t8E4B28C9AAE813C657018A0863EED6247E00BC14 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t3E5340F9C3D63DE7B3280B37BCD14B25362CC87E_StaticFields, ___Instance_0)); }
	inline Transformer_1_t8E4B28C9AAE813C657018A0863EED6247E00BC14 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t8E4B28C9AAE813C657018A0863EED6247E00BC14 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t8E4B28C9AAE813C657018A0863EED6247E00BC14 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt64,System.Object>
struct Caster_1_t1C8C6FEDED1BBCC86BF7F183BAAA65A65E37F6B9  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t1C8C6FEDED1BBCC86BF7F183BAAA65A65E37F6B9_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t402296E3476F5F09B16B675F17D3CDA6FCB34A9B * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t1C8C6FEDED1BBCC86BF7F183BAAA65A65E37F6B9_StaticFields, ___Instance_0)); }
	inline Transformer_1_t402296E3476F5F09B16B675F17D3CDA6FCB34A9B * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t402296E3476F5F09B16B675F17D3CDA6FCB34A9B ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t402296E3476F5F09B16B675F17D3CDA6FCB34A9B * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt64,System.SByte>
struct Caster_1_t261B67D54DDBEE2E45C594357E6132EBCFC20C43  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t261B67D54DDBEE2E45C594357E6132EBCFC20C43_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t2F20C0EB7F9357AF924B13ACE76627B27A3EE8C6 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t261B67D54DDBEE2E45C594357E6132EBCFC20C43_StaticFields, ___Instance_0)); }
	inline Transformer_1_t2F20C0EB7F9357AF924B13ACE76627B27A3EE8C6 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t2F20C0EB7F9357AF924B13ACE76627B27A3EE8C6 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t2F20C0EB7F9357AF924B13ACE76627B27A3EE8C6 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt64,System.Single>
struct Caster_1_t758D846F58655E22B936DD8A2DB64283EA3805A2  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t758D846F58655E22B936DD8A2DB64283EA3805A2_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t589CB07AE354480F71F892CCEF416B4B90FD20E1 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t758D846F58655E22B936DD8A2DB64283EA3805A2_StaticFields, ___Instance_0)); }
	inline Transformer_1_t589CB07AE354480F71F892CCEF416B4B90FD20E1 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t589CB07AE354480F71F892CCEF416B4B90FD20E1 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t589CB07AE354480F71F892CCEF416B4B90FD20E1 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt64,System.TimeSpan>
struct Caster_1_t01551B272EDA007DB4640BBDA9745FCD8150E90F  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t01551B272EDA007DB4640BBDA9745FCD8150E90F_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t92CD444E28392786C719A80E3BD6F19859C0F66F * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t01551B272EDA007DB4640BBDA9745FCD8150E90F_StaticFields, ___Instance_0)); }
	inline Transformer_1_t92CD444E28392786C719A80E3BD6F19859C0F66F * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t92CD444E28392786C719A80E3BD6F19859C0F66F ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t92CD444E28392786C719A80E3BD6F19859C0F66F * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt64,System.UInt16>
struct Caster_1_t927662BF5FDD93421514AD6DFF5810834FC65437  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t927662BF5FDD93421514AD6DFF5810834FC65437_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_tEBBF3209CF2963A466018B425608A6F9A5DB0E30 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t927662BF5FDD93421514AD6DFF5810834FC65437_StaticFields, ___Instance_0)); }
	inline Transformer_1_tEBBF3209CF2963A466018B425608A6F9A5DB0E30 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_tEBBF3209CF2963A466018B425608A6F9A5DB0E30 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_tEBBF3209CF2963A466018B425608A6F9A5DB0E30 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt64,System.UInt32>
struct Caster_1_t4FBD60419DE1522A1D8D6D26E18CCE6C5CBE862C  : public RuntimeObject
{
public:

public:
};

struct Caster_1_t4FBD60419DE1522A1D8D6D26E18CCE6C5CBE862C_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t8958FB9131F13E8258DE33FA6B69C3FF6197E880 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_t4FBD60419DE1522A1D8D6D26E18CCE6C5CBE862C_StaticFields, ___Instance_0)); }
	inline Transformer_1_t8958FB9131F13E8258DE33FA6B69C3FF6197E880 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t8958FB9131F13E8258DE33FA6B69C3FF6197E880 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t8958FB9131F13E8258DE33FA6B69C3FF6197E880 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt64,System.UInt64>
struct Caster_1_tCD382BFE18B540FD55BB3D1DE0739E2718F2B9F7  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tCD382BFE18B540FD55BB3D1DE0739E2718F2B9F7_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t3B28CAE7458C713C7593265008775661D4E2EBAE * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tCD382BFE18B540FD55BB3D1DE0739E2718F2B9F7_StaticFields, ___Instance_0)); }
	inline Transformer_1_t3B28CAE7458C713C7593265008775661D4E2EBAE * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t3B28CAE7458C713C7593265008775661D4E2EBAE ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t3B28CAE7458C713C7593265008775661D4E2EBAE * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Caster`1<System.UInt64,System.UIntPtr>
struct Caster_1_tE9665C2AD78EA0AECF9AA50DC59E256EA789B56B  : public RuntimeObject
{
public:

public:
};

struct Caster_1_tE9665C2AD78EA0AECF9AA50DC59E256EA789B56B_StaticFields
{
public:
	// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> System.Diagnostics.Tracing.EnumHelper`1/Caster`1::Instance
	Transformer_1_t77F1FDC69827B944451ACE5D2F9AF2FF2BBE0913 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Caster_1_tE9665C2AD78EA0AECF9AA50DC59E256EA789B56B_StaticFields, ___Instance_0)); }
	inline Transformer_1_t77F1FDC69827B944451ACE5D2F9AF2FF2BBE0913 * get_Instance_0() const { return ___Instance_0; }
	inline Transformer_1_t77F1FDC69827B944451ACE5D2F9AF2FF2BBE0913 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Transformer_1_t77F1FDC69827B944451ACE5D2F9AF2FF2BBE0913 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1<System.Byte>
struct EnumHelper_1_tCD9C6B46C79CF3B8A9228DF132E8EB369F254C82  : public RuntimeObject
{
public:

public:
};

struct EnumHelper_1_tCD9C6B46C79CF3B8A9228DF132E8EB369F254C82_StaticFields
{
public:
	// System.Reflection.MethodInfo System.Diagnostics.Tracing.EnumHelper`1::IdentityInfo
	MethodInfo_t * ___IdentityInfo_0;

public:
	inline static int32_t get_offset_of_IdentityInfo_0() { return static_cast<int32_t>(offsetof(EnumHelper_1_tCD9C6B46C79CF3B8A9228DF132E8EB369F254C82_StaticFields, ___IdentityInfo_0)); }
	inline MethodInfo_t * get_IdentityInfo_0() const { return ___IdentityInfo_0; }
	inline MethodInfo_t ** get_address_of_IdentityInfo_0() { return &___IdentityInfo_0; }
	inline void set_IdentityInfo_0(MethodInfo_t * value)
	{
		___IdentityInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IdentityInfo_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1<System.Int16>
struct EnumHelper_1_t70C30A1B36497D83A015022E6BB524A187CFAFC7  : public RuntimeObject
{
public:

public:
};

struct EnumHelper_1_t70C30A1B36497D83A015022E6BB524A187CFAFC7_StaticFields
{
public:
	// System.Reflection.MethodInfo System.Diagnostics.Tracing.EnumHelper`1::IdentityInfo
	MethodInfo_t * ___IdentityInfo_0;

public:
	inline static int32_t get_offset_of_IdentityInfo_0() { return static_cast<int32_t>(offsetof(EnumHelper_1_t70C30A1B36497D83A015022E6BB524A187CFAFC7_StaticFields, ___IdentityInfo_0)); }
	inline MethodInfo_t * get_IdentityInfo_0() const { return ___IdentityInfo_0; }
	inline MethodInfo_t ** get_address_of_IdentityInfo_0() { return &___IdentityInfo_0; }
	inline void set_IdentityInfo_0(MethodInfo_t * value)
	{
		___IdentityInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IdentityInfo_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1<System.Int32>
struct EnumHelper_1_t26411DBF6873AF1883D85665AA592CC54B8015EB  : public RuntimeObject
{
public:

public:
};

struct EnumHelper_1_t26411DBF6873AF1883D85665AA592CC54B8015EB_StaticFields
{
public:
	// System.Reflection.MethodInfo System.Diagnostics.Tracing.EnumHelper`1::IdentityInfo
	MethodInfo_t * ___IdentityInfo_0;

public:
	inline static int32_t get_offset_of_IdentityInfo_0() { return static_cast<int32_t>(offsetof(EnumHelper_1_t26411DBF6873AF1883D85665AA592CC54B8015EB_StaticFields, ___IdentityInfo_0)); }
	inline MethodInfo_t * get_IdentityInfo_0() const { return ___IdentityInfo_0; }
	inline MethodInfo_t ** get_address_of_IdentityInfo_0() { return &___IdentityInfo_0; }
	inline void set_IdentityInfo_0(MethodInfo_t * value)
	{
		___IdentityInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IdentityInfo_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1<System.Int64>
struct EnumHelper_1_t7766047F041B50F63B0724CEB9FC3DF493563942  : public RuntimeObject
{
public:

public:
};

struct EnumHelper_1_t7766047F041B50F63B0724CEB9FC3DF493563942_StaticFields
{
public:
	// System.Reflection.MethodInfo System.Diagnostics.Tracing.EnumHelper`1::IdentityInfo
	MethodInfo_t * ___IdentityInfo_0;

public:
	inline static int32_t get_offset_of_IdentityInfo_0() { return static_cast<int32_t>(offsetof(EnumHelper_1_t7766047F041B50F63B0724CEB9FC3DF493563942_StaticFields, ___IdentityInfo_0)); }
	inline MethodInfo_t * get_IdentityInfo_0() const { return ___IdentityInfo_0; }
	inline MethodInfo_t ** get_address_of_IdentityInfo_0() { return &___IdentityInfo_0; }
	inline void set_IdentityInfo_0(MethodInfo_t * value)
	{
		___IdentityInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IdentityInfo_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1<System.Object>
struct EnumHelper_1_t13741AF87195F19C45AE0A8104DE3A894D9E78AD  : public RuntimeObject
{
public:

public:
};

struct EnumHelper_1_t13741AF87195F19C45AE0A8104DE3A894D9E78AD_StaticFields
{
public:
	// System.Reflection.MethodInfo System.Diagnostics.Tracing.EnumHelper`1::IdentityInfo
	MethodInfo_t * ___IdentityInfo_0;

public:
	inline static int32_t get_offset_of_IdentityInfo_0() { return static_cast<int32_t>(offsetof(EnumHelper_1_t13741AF87195F19C45AE0A8104DE3A894D9E78AD_StaticFields, ___IdentityInfo_0)); }
	inline MethodInfo_t * get_IdentityInfo_0() const { return ___IdentityInfo_0; }
	inline MethodInfo_t ** get_address_of_IdentityInfo_0() { return &___IdentityInfo_0; }
	inline void set_IdentityInfo_0(MethodInfo_t * value)
	{
		___IdentityInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IdentityInfo_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1<System.SByte>
struct EnumHelper_1_tB725A0B0F692F58B04B5C2851987ED5557FFF3E2  : public RuntimeObject
{
public:

public:
};

struct EnumHelper_1_tB725A0B0F692F58B04B5C2851987ED5557FFF3E2_StaticFields
{
public:
	// System.Reflection.MethodInfo System.Diagnostics.Tracing.EnumHelper`1::IdentityInfo
	MethodInfo_t * ___IdentityInfo_0;

public:
	inline static int32_t get_offset_of_IdentityInfo_0() { return static_cast<int32_t>(offsetof(EnumHelper_1_tB725A0B0F692F58B04B5C2851987ED5557FFF3E2_StaticFields, ___IdentityInfo_0)); }
	inline MethodInfo_t * get_IdentityInfo_0() const { return ___IdentityInfo_0; }
	inline MethodInfo_t ** get_address_of_IdentityInfo_0() { return &___IdentityInfo_0; }
	inline void set_IdentityInfo_0(MethodInfo_t * value)
	{
		___IdentityInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IdentityInfo_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>
struct EnumHelper_1_t6CA08F864466AB0FE3C91BD7A9E544E9EDE03759  : public RuntimeObject
{
public:

public:
};

struct EnumHelper_1_t6CA08F864466AB0FE3C91BD7A9E544E9EDE03759_StaticFields
{
public:
	// System.Reflection.MethodInfo System.Diagnostics.Tracing.EnumHelper`1::IdentityInfo
	MethodInfo_t * ___IdentityInfo_0;

public:
	inline static int32_t get_offset_of_IdentityInfo_0() { return static_cast<int32_t>(offsetof(EnumHelper_1_t6CA08F864466AB0FE3C91BD7A9E544E9EDE03759_StaticFields, ___IdentityInfo_0)); }
	inline MethodInfo_t * get_IdentityInfo_0() const { return ___IdentityInfo_0; }
	inline MethodInfo_t ** get_address_of_IdentityInfo_0() { return &___IdentityInfo_0; }
	inline void set_IdentityInfo_0(MethodInfo_t * value)
	{
		___IdentityInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IdentityInfo_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>
struct EnumHelper_1_tB3516ACE0911526FDCCECA27C61B425D83C7F471  : public RuntimeObject
{
public:

public:
};

struct EnumHelper_1_tB3516ACE0911526FDCCECA27C61B425D83C7F471_StaticFields
{
public:
	// System.Reflection.MethodInfo System.Diagnostics.Tracing.EnumHelper`1::IdentityInfo
	MethodInfo_t * ___IdentityInfo_0;

public:
	inline static int32_t get_offset_of_IdentityInfo_0() { return static_cast<int32_t>(offsetof(EnumHelper_1_tB3516ACE0911526FDCCECA27C61B425D83C7F471_StaticFields, ___IdentityInfo_0)); }
	inline MethodInfo_t * get_IdentityInfo_0() const { return ___IdentityInfo_0; }
	inline MethodInfo_t ** get_address_of_IdentityInfo_0() { return &___IdentityInfo_0; }
	inline void set_IdentityInfo_0(MethodInfo_t * value)
	{
		___IdentityInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IdentityInfo_0), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>
struct EnumHelper_1_t1606E7976B4575AE013F57502CAB2A7F55672EB5  : public RuntimeObject
{
public:

public:
};

struct EnumHelper_1_t1606E7976B4575AE013F57502CAB2A7F55672EB5_StaticFields
{
public:
	// System.Reflection.MethodInfo System.Diagnostics.Tracing.EnumHelper`1::IdentityInfo
	MethodInfo_t * ___IdentityInfo_0;

public:
	inline static int32_t get_offset_of_IdentityInfo_0() { return static_cast<int32_t>(offsetof(EnumHelper_1_t1606E7976B4575AE013F57502CAB2A7F55672EB5_StaticFields, ___IdentityInfo_0)); }
	inline MethodInfo_t * get_IdentityInfo_0() const { return ___IdentityInfo_0; }
	inline MethodInfo_t ** get_address_of_IdentityInfo_0() { return &___IdentityInfo_0; }
	inline void set_IdentityInfo_0(MethodInfo_t * value)
	{
		___IdentityInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IdentityInfo_0), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// System.Xml.Schema.XmlValueConverter
struct XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E  : public RuntimeObject
{
public:

public:
};


// Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility
struct NativeArrayUnsafeUtility_t2B01CE90013CE5874AC6E98925C55FA6C1F5F4BA  : public RuntimeObject
{
public:

public:
};


// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};


// UnityEngine.EventSystems.ExecuteEvents
struct ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985  : public RuntimeObject
{
public:

public:
};

struct ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields
{
public:
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerEnterHandler
	EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4 * ___s_PointerEnterHandler_0;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerExitHandler
	EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA * ___s_PointerExitHandler_1;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerDownHandler
	EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E * ___s_PointerDownHandler_2;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerUpHandler
	EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6 * ___s_PointerUpHandler_3;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerClickHandler
	EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E * ___s_PointerClickHandler_4;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_InitializePotentialDragHandler
	EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418 * ___s_InitializePotentialDragHandler_5;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_BeginDragHandler
	EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27 * ___s_BeginDragHandler_6;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_DragHandler
	EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1 * ___s_DragHandler_7;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_EndDragHandler
	EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20 * ___s_EndDragHandler_8;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler> UnityEngine.EventSystems.ExecuteEvents::s_DropHandler
	EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5 * ___s_DropHandler_9;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IScrollHandler> UnityEngine.EventSystems.ExecuteEvents::s_ScrollHandler
	EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A * ___s_ScrollHandler_10;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler> UnityEngine.EventSystems.ExecuteEvents::s_UpdateSelectedHandler
	EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173 * ___s_UpdateSelectedHandler_11;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler> UnityEngine.EventSystems.ExecuteEvents::s_SelectHandler
	EventFunction_1_t7521247C87411935E8A2CA38683533083459473F * ___s_SelectHandler_12;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler> UnityEngine.EventSystems.ExecuteEvents::s_DeselectHandler
	EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8 * ___s_DeselectHandler_13;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler> UnityEngine.EventSystems.ExecuteEvents::s_MoveHandler
	EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB * ___s_MoveHandler_14;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler> UnityEngine.EventSystems.ExecuteEvents::s_SubmitHandler
	EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B * ___s_SubmitHandler_15;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler> UnityEngine.EventSystems.ExecuteEvents::s_CancelHandler
	EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258 * ___s_CancelHandler_16;
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>> UnityEngine.EventSystems.ExecuteEvents::s_HandlerListPool
	ObjectPool_1_t374B58F94BA7C0BCA89D9C26B26A9994139B89EC * ___s_HandlerListPool_17;
	// System.Collections.Generic.List`1<UnityEngine.Transform> UnityEngine.EventSystems.ExecuteEvents::s_InternalTransformList
	List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE * ___s_InternalTransformList_18;

public:
	inline static int32_t get_offset_of_s_PointerEnterHandler_0() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_PointerEnterHandler_0)); }
	inline EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4 * get_s_PointerEnterHandler_0() const { return ___s_PointerEnterHandler_0; }
	inline EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4 ** get_address_of_s_PointerEnterHandler_0() { return &___s_PointerEnterHandler_0; }
	inline void set_s_PointerEnterHandler_0(EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4 * value)
	{
		___s_PointerEnterHandler_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PointerEnterHandler_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_PointerExitHandler_1() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_PointerExitHandler_1)); }
	inline EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA * get_s_PointerExitHandler_1() const { return ___s_PointerExitHandler_1; }
	inline EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA ** get_address_of_s_PointerExitHandler_1() { return &___s_PointerExitHandler_1; }
	inline void set_s_PointerExitHandler_1(EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA * value)
	{
		___s_PointerExitHandler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PointerExitHandler_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_PointerDownHandler_2() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_PointerDownHandler_2)); }
	inline EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E * get_s_PointerDownHandler_2() const { return ___s_PointerDownHandler_2; }
	inline EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E ** get_address_of_s_PointerDownHandler_2() { return &___s_PointerDownHandler_2; }
	inline void set_s_PointerDownHandler_2(EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E * value)
	{
		___s_PointerDownHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PointerDownHandler_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_PointerUpHandler_3() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_PointerUpHandler_3)); }
	inline EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6 * get_s_PointerUpHandler_3() const { return ___s_PointerUpHandler_3; }
	inline EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6 ** get_address_of_s_PointerUpHandler_3() { return &___s_PointerUpHandler_3; }
	inline void set_s_PointerUpHandler_3(EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6 * value)
	{
		___s_PointerUpHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PointerUpHandler_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_PointerClickHandler_4() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_PointerClickHandler_4)); }
	inline EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E * get_s_PointerClickHandler_4() const { return ___s_PointerClickHandler_4; }
	inline EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E ** get_address_of_s_PointerClickHandler_4() { return &___s_PointerClickHandler_4; }
	inline void set_s_PointerClickHandler_4(EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E * value)
	{
		___s_PointerClickHandler_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PointerClickHandler_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_InitializePotentialDragHandler_5() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_InitializePotentialDragHandler_5)); }
	inline EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418 * get_s_InitializePotentialDragHandler_5() const { return ___s_InitializePotentialDragHandler_5; }
	inline EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418 ** get_address_of_s_InitializePotentialDragHandler_5() { return &___s_InitializePotentialDragHandler_5; }
	inline void set_s_InitializePotentialDragHandler_5(EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418 * value)
	{
		___s_InitializePotentialDragHandler_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InitializePotentialDragHandler_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_BeginDragHandler_6() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_BeginDragHandler_6)); }
	inline EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27 * get_s_BeginDragHandler_6() const { return ___s_BeginDragHandler_6; }
	inline EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27 ** get_address_of_s_BeginDragHandler_6() { return &___s_BeginDragHandler_6; }
	inline void set_s_BeginDragHandler_6(EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27 * value)
	{
		___s_BeginDragHandler_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_BeginDragHandler_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_DragHandler_7() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_DragHandler_7)); }
	inline EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1 * get_s_DragHandler_7() const { return ___s_DragHandler_7; }
	inline EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1 ** get_address_of_s_DragHandler_7() { return &___s_DragHandler_7; }
	inline void set_s_DragHandler_7(EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1 * value)
	{
		___s_DragHandler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DragHandler_7), (void*)value);
	}

	inline static int32_t get_offset_of_s_EndDragHandler_8() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_EndDragHandler_8)); }
	inline EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20 * get_s_EndDragHandler_8() const { return ___s_EndDragHandler_8; }
	inline EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20 ** get_address_of_s_EndDragHandler_8() { return &___s_EndDragHandler_8; }
	inline void set_s_EndDragHandler_8(EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20 * value)
	{
		___s_EndDragHandler_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EndDragHandler_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_DropHandler_9() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_DropHandler_9)); }
	inline EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5 * get_s_DropHandler_9() const { return ___s_DropHandler_9; }
	inline EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5 ** get_address_of_s_DropHandler_9() { return &___s_DropHandler_9; }
	inline void set_s_DropHandler_9(EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5 * value)
	{
		___s_DropHandler_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DropHandler_9), (void*)value);
	}

	inline static int32_t get_offset_of_s_ScrollHandler_10() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_ScrollHandler_10)); }
	inline EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A * get_s_ScrollHandler_10() const { return ___s_ScrollHandler_10; }
	inline EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A ** get_address_of_s_ScrollHandler_10() { return &___s_ScrollHandler_10; }
	inline void set_s_ScrollHandler_10(EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A * value)
	{
		___s_ScrollHandler_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ScrollHandler_10), (void*)value);
	}

	inline static int32_t get_offset_of_s_UpdateSelectedHandler_11() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_UpdateSelectedHandler_11)); }
	inline EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173 * get_s_UpdateSelectedHandler_11() const { return ___s_UpdateSelectedHandler_11; }
	inline EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173 ** get_address_of_s_UpdateSelectedHandler_11() { return &___s_UpdateSelectedHandler_11; }
	inline void set_s_UpdateSelectedHandler_11(EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173 * value)
	{
		___s_UpdateSelectedHandler_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UpdateSelectedHandler_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectHandler_12() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_SelectHandler_12)); }
	inline EventFunction_1_t7521247C87411935E8A2CA38683533083459473F * get_s_SelectHandler_12() const { return ___s_SelectHandler_12; }
	inline EventFunction_1_t7521247C87411935E8A2CA38683533083459473F ** get_address_of_s_SelectHandler_12() { return &___s_SelectHandler_12; }
	inline void set_s_SelectHandler_12(EventFunction_1_t7521247C87411935E8A2CA38683533083459473F * value)
	{
		___s_SelectHandler_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SelectHandler_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_DeselectHandler_13() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_DeselectHandler_13)); }
	inline EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8 * get_s_DeselectHandler_13() const { return ___s_DeselectHandler_13; }
	inline EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8 ** get_address_of_s_DeselectHandler_13() { return &___s_DeselectHandler_13; }
	inline void set_s_DeselectHandler_13(EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8 * value)
	{
		___s_DeselectHandler_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DeselectHandler_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_MoveHandler_14() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_MoveHandler_14)); }
	inline EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB * get_s_MoveHandler_14() const { return ___s_MoveHandler_14; }
	inline EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB ** get_address_of_s_MoveHandler_14() { return &___s_MoveHandler_14; }
	inline void set_s_MoveHandler_14(EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB * value)
	{
		___s_MoveHandler_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_MoveHandler_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_SubmitHandler_15() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_SubmitHandler_15)); }
	inline EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B * get_s_SubmitHandler_15() const { return ___s_SubmitHandler_15; }
	inline EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B ** get_address_of_s_SubmitHandler_15() { return &___s_SubmitHandler_15; }
	inline void set_s_SubmitHandler_15(EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B * value)
	{
		___s_SubmitHandler_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubmitHandler_15), (void*)value);
	}

	inline static int32_t get_offset_of_s_CancelHandler_16() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_CancelHandler_16)); }
	inline EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258 * get_s_CancelHandler_16() const { return ___s_CancelHandler_16; }
	inline EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258 ** get_address_of_s_CancelHandler_16() { return &___s_CancelHandler_16; }
	inline void set_s_CancelHandler_16(EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258 * value)
	{
		___s_CancelHandler_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_CancelHandler_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_HandlerListPool_17() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_HandlerListPool_17)); }
	inline ObjectPool_1_t374B58F94BA7C0BCA89D9C26B26A9994139B89EC * get_s_HandlerListPool_17() const { return ___s_HandlerListPool_17; }
	inline ObjectPool_1_t374B58F94BA7C0BCA89D9C26B26A9994139B89EC ** get_address_of_s_HandlerListPool_17() { return &___s_HandlerListPool_17; }
	inline void set_s_HandlerListPool_17(ObjectPool_1_t374B58F94BA7C0BCA89D9C26B26A9994139B89EC * value)
	{
		___s_HandlerListPool_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_HandlerListPool_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalTransformList_18() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_InternalTransformList_18)); }
	inline List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE * get_s_InternalTransformList_18() const { return ___s_InternalTransformList_18; }
	inline List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE ** get_address_of_s_InternalTransformList_18() { return &___s_InternalTransformList_18; }
	inline void set_s_InternalTransformList_18(List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE * value)
	{
		___s_InternalTransformList_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalTransformList_18), (void*)value);
	}
};


// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph
struct RenderGraph_t658E15F42351EE5E92398FC4EF9B25E75AC71042  : public RuntimeObject
{
public:
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph::m_Resources
	RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 * ___m_Resources_1;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphObjectPool UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph::m_RenderGraphPool
	RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 * ___m_RenderGraphPool_2;
	// System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph/RenderPass> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph::m_RenderPasses
	List_1_t7BE901F61F1A406FC143D643C9923B05DE767845 * ___m_RenderPasses_3;
	// System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResource> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph::m_RendererLists
	List_1_t3DB3A57DAA1C2A9B312E3B24A7C03D028DB1097A * ___m_RendererLists_4;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphDebugParams UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph::m_DebugParameters
	RenderGraphDebugParams_t91BFF8C4DDFB7554599BA1A4441F0D82BB9F6908 * ___m_DebugParameters_5;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphLogger UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph::m_Logger
	RenderGraphLogger_t134928C4D6F50853ED77DA1DF486B6C3719A360C * ___m_Logger_6;

public:
	inline static int32_t get_offset_of_m_Resources_1() { return static_cast<int32_t>(offsetof(RenderGraph_t658E15F42351EE5E92398FC4EF9B25E75AC71042, ___m_Resources_1)); }
	inline RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 * get_m_Resources_1() const { return ___m_Resources_1; }
	inline RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 ** get_address_of_m_Resources_1() { return &___m_Resources_1; }
	inline void set_m_Resources_1(RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 * value)
	{
		___m_Resources_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Resources_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_RenderGraphPool_2() { return static_cast<int32_t>(offsetof(RenderGraph_t658E15F42351EE5E92398FC4EF9B25E75AC71042, ___m_RenderGraphPool_2)); }
	inline RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 * get_m_RenderGraphPool_2() const { return ___m_RenderGraphPool_2; }
	inline RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 ** get_address_of_m_RenderGraphPool_2() { return &___m_RenderGraphPool_2; }
	inline void set_m_RenderGraphPool_2(RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 * value)
	{
		___m_RenderGraphPool_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RenderGraphPool_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_RenderPasses_3() { return static_cast<int32_t>(offsetof(RenderGraph_t658E15F42351EE5E92398FC4EF9B25E75AC71042, ___m_RenderPasses_3)); }
	inline List_1_t7BE901F61F1A406FC143D643C9923B05DE767845 * get_m_RenderPasses_3() const { return ___m_RenderPasses_3; }
	inline List_1_t7BE901F61F1A406FC143D643C9923B05DE767845 ** get_address_of_m_RenderPasses_3() { return &___m_RenderPasses_3; }
	inline void set_m_RenderPasses_3(List_1_t7BE901F61F1A406FC143D643C9923B05DE767845 * value)
	{
		___m_RenderPasses_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RenderPasses_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_RendererLists_4() { return static_cast<int32_t>(offsetof(RenderGraph_t658E15F42351EE5E92398FC4EF9B25E75AC71042, ___m_RendererLists_4)); }
	inline List_1_t3DB3A57DAA1C2A9B312E3B24A7C03D028DB1097A * get_m_RendererLists_4() const { return ___m_RendererLists_4; }
	inline List_1_t3DB3A57DAA1C2A9B312E3B24A7C03D028DB1097A ** get_address_of_m_RendererLists_4() { return &___m_RendererLists_4; }
	inline void set_m_RendererLists_4(List_1_t3DB3A57DAA1C2A9B312E3B24A7C03D028DB1097A * value)
	{
		___m_RendererLists_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RendererLists_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_DebugParameters_5() { return static_cast<int32_t>(offsetof(RenderGraph_t658E15F42351EE5E92398FC4EF9B25E75AC71042, ___m_DebugParameters_5)); }
	inline RenderGraphDebugParams_t91BFF8C4DDFB7554599BA1A4441F0D82BB9F6908 * get_m_DebugParameters_5() const { return ___m_DebugParameters_5; }
	inline RenderGraphDebugParams_t91BFF8C4DDFB7554599BA1A4441F0D82BB9F6908 ** get_address_of_m_DebugParameters_5() { return &___m_DebugParameters_5; }
	inline void set_m_DebugParameters_5(RenderGraphDebugParams_t91BFF8C4DDFB7554599BA1A4441F0D82BB9F6908 * value)
	{
		___m_DebugParameters_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DebugParameters_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Logger_6() { return static_cast<int32_t>(offsetof(RenderGraph_t658E15F42351EE5E92398FC4EF9B25E75AC71042, ___m_Logger_6)); }
	inline RenderGraphLogger_t134928C4D6F50853ED77DA1DF486B6C3719A360C * get_m_Logger_6() const { return ___m_Logger_6; }
	inline RenderGraphLogger_t134928C4D6F50853ED77DA1DF486B6C3719A360C ** get_address_of_m_Logger_6() { return &___m_Logger_6; }
	inline void set_m_Logger_6(RenderGraphLogger_t134928C4D6F50853ED77DA1DF486B6C3719A360C * value)
	{
		___m_Logger_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Logger_6), (void*)value);
	}
};

struct RenderGraph_t658E15F42351EE5E92398FC4EF9B25E75AC71042_StaticFields
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph::kMaxMRTCount
	int32_t ___kMaxMRTCount_0;

public:
	inline static int32_t get_offset_of_kMaxMRTCount_0() { return static_cast<int32_t>(offsetof(RenderGraph_t658E15F42351EE5E92398FC4EF9B25E75AC71042_StaticFields, ___kMaxMRTCount_0)); }
	inline int32_t get_kMaxMRTCount_0() const { return ___kMaxMRTCount_0; }
	inline int32_t* get_address_of_kMaxMRTCount_0() { return &___kMaxMRTCount_0; }
	inline void set_kMaxMRTCount_0(int32_t value)
	{
		___kMaxMRTCount_0 = value;
	}
};


// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphObjectPool
struct RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.ValueTuple`2<System.Type,System.Int32>,System.Collections.Generic.Stack`1<System.Object>> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphObjectPool::m_ArrayPool
	Dictionary_2_tDB0173F7367ADD8C863509F3869BC63705A9B63E * ___m_ArrayPool_0;
	// System.Collections.Generic.List`1<System.ValueTuple`2<System.Object,System.ValueTuple`2<System.Type,System.Int32>>> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphObjectPool::m_AllocatedArrays
	List_1_tC6996D2CBDA52BAA8F08554F7E920E603DB33417 * ___m_AllocatedArrays_1;
	// System.Collections.Generic.List`1<UnityEngine.MaterialPropertyBlock> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphObjectPool::m_AllocatedMaterialPropertyBlocks
	List_1_t9A67E44189F7059A93A2A8AFFAC019B210C1C6DB * ___m_AllocatedMaterialPropertyBlocks_2;

public:
	inline static int32_t get_offset_of_m_ArrayPool_0() { return static_cast<int32_t>(offsetof(RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735, ___m_ArrayPool_0)); }
	inline Dictionary_2_tDB0173F7367ADD8C863509F3869BC63705A9B63E * get_m_ArrayPool_0() const { return ___m_ArrayPool_0; }
	inline Dictionary_2_tDB0173F7367ADD8C863509F3869BC63705A9B63E ** get_address_of_m_ArrayPool_0() { return &___m_ArrayPool_0; }
	inline void set_m_ArrayPool_0(Dictionary_2_tDB0173F7367ADD8C863509F3869BC63705A9B63E * value)
	{
		___m_ArrayPool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ArrayPool_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_AllocatedArrays_1() { return static_cast<int32_t>(offsetof(RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735, ___m_AllocatedArrays_1)); }
	inline List_1_tC6996D2CBDA52BAA8F08554F7E920E603DB33417 * get_m_AllocatedArrays_1() const { return ___m_AllocatedArrays_1; }
	inline List_1_tC6996D2CBDA52BAA8F08554F7E920E603DB33417 ** get_address_of_m_AllocatedArrays_1() { return &___m_AllocatedArrays_1; }
	inline void set_m_AllocatedArrays_1(List_1_tC6996D2CBDA52BAA8F08554F7E920E603DB33417 * value)
	{
		___m_AllocatedArrays_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AllocatedArrays_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_AllocatedMaterialPropertyBlocks_2() { return static_cast<int32_t>(offsetof(RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735, ___m_AllocatedMaterialPropertyBlocks_2)); }
	inline List_1_t9A67E44189F7059A93A2A8AFFAC019B210C1C6DB * get_m_AllocatedMaterialPropertyBlocks_2() const { return ___m_AllocatedMaterialPropertyBlocks_2; }
	inline List_1_t9A67E44189F7059A93A2A8AFFAC019B210C1C6DB ** get_address_of_m_AllocatedMaterialPropertyBlocks_2() { return &___m_AllocatedMaterialPropertyBlocks_2; }
	inline void set_m_AllocatedMaterialPropertyBlocks_2(List_1_t9A67E44189F7059A93A2A8AFFAC019B210C1C6DB * value)
	{
		___m_AllocatedMaterialPropertyBlocks_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AllocatedMaterialPropertyBlocks_2), (void*)value);
	}
};


// UnityEngine.NoAllocHelpers
struct NoAllocHelpers_t4BC4E5F5C10AE3134CFD94FF764240E3B1E45270  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Rendering.HighDefinition.MigrationDescription
struct MigrationDescription_tA88873A39BB0F70AC370148198C8FA28CB280A9C  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Rendering.HighDefinition.MigrationStep
struct MigrationStep_t5D205AFC922ED19C5BFE51973FA30707B185EBCD  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Rendering.ProfilingSampler
struct ProfilingSampler_t00574F1AB7FB336BBFCE3DE575A86B5DD2C9F99D  : public RuntimeObject
{
public:
	// UnityEngine.Profiling.CustomSampler UnityEngine.Rendering.ProfilingSampler::<sampler>k__BackingField
	CustomSampler_tD50B25148FC97E173885F9C379C8F89F067343C8 * ___U3CsamplerU3Ek__BackingField_0;
	// UnityEngine.Profiling.CustomSampler UnityEngine.Rendering.ProfilingSampler::<inlineSampler>k__BackingField
	CustomSampler_tD50B25148FC97E173885F9C379C8F89F067343C8 * ___U3CinlineSamplerU3Ek__BackingField_1;
	// System.String UnityEngine.Rendering.ProfilingSampler::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CsamplerU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ProfilingSampler_t00574F1AB7FB336BBFCE3DE575A86B5DD2C9F99D, ___U3CsamplerU3Ek__BackingField_0)); }
	inline CustomSampler_tD50B25148FC97E173885F9C379C8F89F067343C8 * get_U3CsamplerU3Ek__BackingField_0() const { return ___U3CsamplerU3Ek__BackingField_0; }
	inline CustomSampler_tD50B25148FC97E173885F9C379C8F89F067343C8 ** get_address_of_U3CsamplerU3Ek__BackingField_0() { return &___U3CsamplerU3Ek__BackingField_0; }
	inline void set_U3CsamplerU3Ek__BackingField_0(CustomSampler_tD50B25148FC97E173885F9C379C8F89F067343C8 * value)
	{
		___U3CsamplerU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsamplerU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CinlineSamplerU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ProfilingSampler_t00574F1AB7FB336BBFCE3DE575A86B5DD2C9F99D, ___U3CinlineSamplerU3Ek__BackingField_1)); }
	inline CustomSampler_tD50B25148FC97E173885F9C379C8F89F067343C8 * get_U3CinlineSamplerU3Ek__BackingField_1() const { return ___U3CinlineSamplerU3Ek__BackingField_1; }
	inline CustomSampler_tD50B25148FC97E173885F9C379C8F89F067343C8 ** get_address_of_U3CinlineSamplerU3Ek__BackingField_1() { return &___U3CinlineSamplerU3Ek__BackingField_1; }
	inline void set_U3CinlineSamplerU3Ek__BackingField_1(CustomSampler_tD50B25148FC97E173885F9C379C8F89F067343C8 * value)
	{
		___U3CinlineSamplerU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinlineSamplerU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ProfilingSampler_t00574F1AB7FB336BBFCE3DE575A86B5DD2C9F99D, ___U3CnameU3Ek__BackingField_2)); }
	inline String_t* get_U3CnameU3Ek__BackingField_2() const { return ___U3CnameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_2() { return &___U3CnameU3Ek__BackingField_2; }
	inline void set_U3CnameU3Ek__BackingField_2(String_t* value)
	{
		___U3CnameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_2), (void*)value);
	}
};


// UnityEngine.Resources
struct Resources_t516CB639AA1F373695D285E3F9274C65A70D3935  : public RuntimeObject
{
public:

public:
};


// UnityEngine.UIElements.StyleValueExtensions
struct StyleValueExtensions_tB5C36975F3FBDF3E96DF727123E9F2BF45840915  : public RuntimeObject
{
public:

public:
};


// System.Boolean
struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.DateTime
struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Decimal
struct Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Powers10_6), (void*)value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___Zero_7)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___One_8)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_One_8() const { return ___One_8; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MinusOne_9)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MaxValue_10)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MinValue_11)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___NearPositiveZero_13 = value;
	}
};


// System.Diagnostics.Tracing.EmptyStruct
struct EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 
{
public:
	union
	{
		struct
		{
		};
		uint8_t EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082__padding[1];
	};

public:
};


// System.Double
struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Guid
struct Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// System.Int16
struct Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int32
struct Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.SByte
struct SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Single
struct Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt16
struct UInt16_tAE45CEF73BF720100519F6867F32145D075F928E 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.UIntPtr
struct UIntPtr_t 
{
public:
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;

public:
	inline static int32_t get_offset_of__pointer_1() { return static_cast<int32_t>(offsetof(UIntPtr_t, ____pointer_1)); }
	inline void* get__pointer_1() const { return ____pointer_1; }
	inline void** get_address_of__pointer_1() { return &____pointer_1; }
	inline void set__pointer_1(void* value)
	{
		____pointer_1 = value;
	}
};

struct UIntPtr_t_StaticFields
{
public:
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(UIntPtr_t_StaticFields, ___Zero_0)); }
	inline uintptr_t get_Zero_0() const { return ___Zero_0; }
	inline uintptr_t* get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(uintptr_t value)
	{
		___Zero_0 = value;
	}
};


// System.ValueTuple`2<System.Object,System.Int32>
struct ValueTuple_2_t74D6CA9A08A6FCFF280CF9A4A5244FC0898C9E5F 
{
public:
	// T1 System.ValueTuple`2::Item1
	RuntimeObject * ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	int32_t ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_2_t74D6CA9A08A6FCFF280CF9A4A5244FC0898C9E5F, ___Item1_0)); }
	inline RuntimeObject * get_Item1_0() const { return ___Item1_0; }
	inline RuntimeObject ** get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(RuntimeObject * value)
	{
		___Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_2_t74D6CA9A08A6FCFF280CF9A4A5244FC0898C9E5F, ___Item2_1)); }
	inline int32_t get_Item2_1() const { return ___Item2_1; }
	inline int32_t* get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(int32_t value)
	{
		___Item2_1 = value;
	}
};


// System.ValueTuple`2<System.Type,System.Int32>
struct ValueTuple_2_t01D88DEEA69CE75D3FE98CBE6DE18C434CCB6E88 
{
public:
	// T1 System.ValueTuple`2::Item1
	Type_t * ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	int32_t ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_2_t01D88DEEA69CE75D3FE98CBE6DE18C434CCB6E88, ___Item1_0)); }
	inline Type_t * get_Item1_0() const { return ___Item1_0; }
	inline Type_t ** get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(Type_t * value)
	{
		___Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_2_t01D88DEEA69CE75D3FE98CBE6DE18C434CCB6E88, ___Item2_1)); }
	inline int32_t get_Item2_1() const { return ___Item2_1; }
	inline int32_t* get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(int32_t value)
	{
		___Item2_1 = value;
	}
};


// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Color32
struct Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};


// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5  : public AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5, ___m_EventSystem_1)); }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
};


// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphBuilder
struct RenderGraphBuilder_t9026010D496B7D7D33BBFD0350D5014FAC7EF312 
{
public:
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph/RenderPass UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphBuilder::m_RenderPass
	RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035 * ___m_RenderPass_0;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphBuilder::m_Resources
	RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 * ___m_Resources_1;
	// System.Boolean UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphBuilder::m_Disposed
	bool ___m_Disposed_2;

public:
	inline static int32_t get_offset_of_m_RenderPass_0() { return static_cast<int32_t>(offsetof(RenderGraphBuilder_t9026010D496B7D7D33BBFD0350D5014FAC7EF312, ___m_RenderPass_0)); }
	inline RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035 * get_m_RenderPass_0() const { return ___m_RenderPass_0; }
	inline RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035 ** get_address_of_m_RenderPass_0() { return &___m_RenderPass_0; }
	inline void set_m_RenderPass_0(RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035 * value)
	{
		___m_RenderPass_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RenderPass_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Resources_1() { return static_cast<int32_t>(offsetof(RenderGraphBuilder_t9026010D496B7D7D33BBFD0350D5014FAC7EF312, ___m_Resources_1)); }
	inline RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 * get_m_Resources_1() const { return ___m_Resources_1; }
	inline RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 ** get_address_of_m_Resources_1() { return &___m_Resources_1; }
	inline void set_m_Resources_1(RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 * value)
	{
		___m_Resources_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Resources_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Disposed_2() { return static_cast<int32_t>(offsetof(RenderGraphBuilder_t9026010D496B7D7D33BBFD0350D5014FAC7EF312, ___m_Disposed_2)); }
	inline bool get_m_Disposed_2() const { return ___m_Disposed_2; }
	inline bool* get_address_of_m_Disposed_2() { return &___m_Disposed_2; }
	inline void set_m_Disposed_2(bool value)
	{
		___m_Disposed_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphBuilder
struct RenderGraphBuilder_t9026010D496B7D7D33BBFD0350D5014FAC7EF312_marshaled_pinvoke
{
	RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035 * ___m_RenderPass_0;
	RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 * ___m_Resources_1;
	int32_t ___m_Disposed_2;
};
// Native definition for COM marshalling of UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphBuilder
struct RenderGraphBuilder_t9026010D496B7D7D33BBFD0350D5014FAC7EF312_marshaled_com
{
	RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035 * ___m_RenderPass_0;
	RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 * ___m_Resources_1;
	int32_t ___m_Disposed_2;
};

// UnityEngine.Rendering.HighDefinition.MigrationDescription`2<System.Int32Enum,System.Object>
struct MigrationDescription_2_t2D210D8AE120A486A4BA618BCCF0662F35EC9242 
{
public:
	// UnityEngine.Rendering.HighDefinition.MigrationStep`2<TVersion,TTarget>[] UnityEngine.Rendering.HighDefinition.MigrationDescription`2::Steps
	MigrationStep_2U5BU5D_tBC3DCCCDDC4D6F13B471C0C1E2B649A21D8714A7* ___Steps_0;

public:
	inline static int32_t get_offset_of_Steps_0() { return static_cast<int32_t>(offsetof(MigrationDescription_2_t2D210D8AE120A486A4BA618BCCF0662F35EC9242, ___Steps_0)); }
	inline MigrationStep_2U5BU5D_tBC3DCCCDDC4D6F13B471C0C1E2B649A21D8714A7* get_Steps_0() const { return ___Steps_0; }
	inline MigrationStep_2U5BU5D_tBC3DCCCDDC4D6F13B471C0C1E2B649A21D8714A7** get_address_of_Steps_0() { return &___Steps_0; }
	inline void set_Steps_0(MigrationStep_2U5BU5D_tBC3DCCCDDC4D6F13B471C0C1E2B649A21D8714A7* value)
	{
		___Steps_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Steps_0), (void*)value);
	}
};


// UnityEngine.Rendering.ShaderTagId
struct ShaderTagId_tA1DB5D58561C760D6D1AD54E21EC81D889100940 
{
public:
	// System.Int32 UnityEngine.Rendering.ShaderTagId::m_Id
	int32_t ___m_Id_1;

public:
	inline static int32_t get_offset_of_m_Id_1() { return static_cast<int32_t>(offsetof(ShaderTagId_tA1DB5D58561C760D6D1AD54E21EC81D889100940, ___m_Id_1)); }
	inline int32_t get_m_Id_1() const { return ___m_Id_1; }
	inline int32_t* get_address_of_m_Id_1() { return &___m_Id_1; }
	inline void set_m_Id_1(int32_t value)
	{
		___m_Id_1 = value;
	}
};

struct ShaderTagId_tA1DB5D58561C760D6D1AD54E21EC81D889100940_StaticFields
{
public:
	// UnityEngine.Rendering.ShaderTagId UnityEngine.Rendering.ShaderTagId::none
	ShaderTagId_tA1DB5D58561C760D6D1AD54E21EC81D889100940  ___none_0;

public:
	inline static int32_t get_offset_of_none_0() { return static_cast<int32_t>(offsetof(ShaderTagId_tA1DB5D58561C760D6D1AD54E21EC81D889100940_StaticFields, ___none_0)); }
	inline ShaderTagId_tA1DB5D58561C760D6D1AD54E21EC81D889100940  get_none_0() const { return ___none_0; }
	inline ShaderTagId_tA1DB5D58561C760D6D1AD54E21EC81D889100940 * get_address_of_none_0() { return &___none_0; }
	inline void set_none_0(ShaderTagId_tA1DB5D58561C760D6D1AD54E21EC81D889100940  value)
	{
		___none_0 = value;
	}
};


// UnityEngine.Rendering.TProfilingSampler`1<System.Int32Enum>
struct TProfilingSampler_1_t3F47BE3BE863DDDE0DE589A0944497506881D2CF  : public ProfilingSampler_t00574F1AB7FB336BBFCE3DE575A86B5DD2C9F99D
{
public:

public:
};

struct TProfilingSampler_1_t3F47BE3BE863DDDE0DE589A0944497506881D2CF_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<TEnum,UnityEngine.Rendering.TProfilingSampler`1<TEnum>> UnityEngine.Rendering.TProfilingSampler`1::samples
	Dictionary_2_t6D38279CB9584FA5B02AC661A0C9BEC4044E95E5 * ___samples_3;

public:
	inline static int32_t get_offset_of_samples_3() { return static_cast<int32_t>(offsetof(TProfilingSampler_1_t3F47BE3BE863DDDE0DE589A0944497506881D2CF_StaticFields, ___samples_3)); }
	inline Dictionary_2_t6D38279CB9584FA5B02AC661A0C9BEC4044E95E5 * get_samples_3() const { return ___samples_3; }
	inline Dictionary_2_t6D38279CB9584FA5B02AC661A0C9BEC4044E95E5 ** get_address_of_samples_3() { return &___samples_3; }
	inline void set_samples_3(Dictionary_2_t6D38279CB9584FA5B02AC661A0C9BEC4044E95E5 * value)
	{
		___samples_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___samples_3), (void*)value);
	}
};


// UnityEngine.Rendering.TProfilingSampler`1<System.Object>
struct TProfilingSampler_1_tA6DAD0F898FE80D447901785B60329673C3DFAA6  : public ProfilingSampler_t00574F1AB7FB336BBFCE3DE575A86B5DD2C9F99D
{
public:

public:
};

struct TProfilingSampler_1_tA6DAD0F898FE80D447901785B60329673C3DFAA6_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<TEnum,UnityEngine.Rendering.TProfilingSampler`1<TEnum>> UnityEngine.Rendering.TProfilingSampler`1::samples
	Dictionary_2_t528A508F31AD8427EF48D14234B4B780DA7CC05E * ___samples_3;

public:
	inline static int32_t get_offset_of_samples_3() { return static_cast<int32_t>(offsetof(TProfilingSampler_1_tA6DAD0F898FE80D447901785B60329673C3DFAA6_StaticFields, ___samples_3)); }
	inline Dictionary_2_t528A508F31AD8427EF48D14234B4B780DA7CC05E * get_samples_3() const { return ___samples_3; }
	inline Dictionary_2_t528A508F31AD8427EF48D14234B4B780DA7CC05E ** get_address_of_samples_3() { return &___samples_3; }
	inline void set_samples_3(Dictionary_2_t528A508F31AD8427EF48D14234B4B780DA7CC05E * value)
	{
		___samples_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___samples_3), (void*)value);
	}
};


// UnityEngine.Vector2
struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___zeroVector_5)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___oneVector_6)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.DateTimeOffset
struct DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 
{
public:
	// System.DateTime System.DateTimeOffset::m_dateTime
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___m_dateTime_2;
	// System.Int16 System.DateTimeOffset::m_offsetMinutes
	int16_t ___m_offsetMinutes_3;

public:
	inline static int32_t get_offset_of_m_dateTime_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85, ___m_dateTime_2)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_m_dateTime_2() const { return ___m_dateTime_2; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_m_dateTime_2() { return &___m_dateTime_2; }
	inline void set_m_dateTime_2(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___m_dateTime_2 = value;
	}

	inline static int32_t get_offset_of_m_offsetMinutes_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85, ___m_offsetMinutes_3)); }
	inline int16_t get_m_offsetMinutes_3() const { return ___m_offsetMinutes_3; }
	inline int16_t* get_address_of_m_offsetMinutes_3() { return &___m_offsetMinutes_3; }
	inline void set_m_offsetMinutes_3(int16_t value)
	{
		___m_offsetMinutes_3 = value;
	}
};

struct DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___MaxValue_1;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_StaticFields, ___MinValue_0)); }
	inline DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  get_MinValue_0() const { return ___MinValue_0; }
	inline DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_StaticFields, ___MaxValue_1)); }
	inline DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  get_MaxValue_1() const { return ___MaxValue_1; }
	inline DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  value)
	{
		___MaxValue_1 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Int32Enum
struct Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.TimeSpan
struct TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___Zero_0)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MinValue_2)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};


// System.ValueTuple`2<System.Object,System.ValueTuple`2<System.Object,System.Int32>>
struct ValueTuple_2_t50705B2B5CEDC69B491D2335FB71C62CCFAD0331 
{
public:
	// T1 System.ValueTuple`2::Item1
	RuntimeObject * ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	ValueTuple_2_t74D6CA9A08A6FCFF280CF9A4A5244FC0898C9E5F  ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_2_t50705B2B5CEDC69B491D2335FB71C62CCFAD0331, ___Item1_0)); }
	inline RuntimeObject * get_Item1_0() const { return ___Item1_0; }
	inline RuntimeObject ** get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(RuntimeObject * value)
	{
		___Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_2_t50705B2B5CEDC69B491D2335FB71C62CCFAD0331, ___Item2_1)); }
	inline ValueTuple_2_t74D6CA9A08A6FCFF280CF9A4A5244FC0898C9E5F  get_Item2_1() const { return ___Item2_1; }
	inline ValueTuple_2_t74D6CA9A08A6FCFF280CF9A4A5244FC0898C9E5F * get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(ValueTuple_2_t74D6CA9A08A6FCFF280CF9A4A5244FC0898C9E5F  value)
	{
		___Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Item2_1))->___Item1_0), (void*)NULL);
	}
};


// System.ValueTuple`2<System.Object,System.ValueTuple`2<System.Type,System.Int32>>
struct ValueTuple_2_tC1E4B764A22137F872FF33F434B43BE4B46D21F5 
{
public:
	// T1 System.ValueTuple`2::Item1
	RuntimeObject * ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	ValueTuple_2_t01D88DEEA69CE75D3FE98CBE6DE18C434CCB6E88  ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_2_tC1E4B764A22137F872FF33F434B43BE4B46D21F5, ___Item1_0)); }
	inline RuntimeObject * get_Item1_0() const { return ___Item1_0; }
	inline RuntimeObject ** get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(RuntimeObject * value)
	{
		___Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_2_tC1E4B764A22137F872FF33F434B43BE4B46D21F5, ___Item2_1)); }
	inline ValueTuple_2_t01D88DEEA69CE75D3FE98CBE6DE18C434CCB6E88  get_Item2_1() const { return ___Item2_1; }
	inline ValueTuple_2_t01D88DEEA69CE75D3FE98CBE6DE18C434CCB6E88 * get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(ValueTuple_2_t01D88DEEA69CE75D3FE98CBE6DE18C434CCB6E88  value)
	{
		___Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Item2_1))->___Item1_0), (void*)NULL);
	}
};


// System.Xml.Schema.XmlTypeCode
struct XmlTypeCode_t9C4AD5729574C591993F2559021E198BED5252A2 
{
public:
	// System.Int32 System.Xml.Schema.XmlTypeCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XmlTypeCode_t9C4AD5729574C591993F2559021E198BED5252A2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Collections.Allocator
struct Allocator_t62A091275262E7067EAAD565B67764FA877D58D6 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t62A091275262E7067EAAD565B67764FA877D58D6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.CubemapFace
struct CubemapFace_t74DD9C86D8A5E5F782F136F8753580668F96FFB9 
{
public:
	// System.Int32 UnityEngine.CubemapFace::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CubemapFace_t74DD9C86D8A5E5F782F136F8753580668F96FFB9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry
struct RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82  : public RuntimeObject
{
public:
	// UnityEngine.Rendering.DynamicArray`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/TextureResource> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry::m_TextureResources
	DynamicArray_1_tF03ED6854CC538AE7AC37C22C920521E3AABD2A8 * ___m_TextureResources_1;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Stack`1<UnityEngine.Rendering.RTHandle>> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry::m_TexturePool
	Dictionary_2_tEF4C65656E284A264F8D30CEB002FFE814FEE380 * ___m_TexturePool_2;
	// UnityEngine.Rendering.DynamicArray`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/RendererListResource> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry::m_RendererListResources
	DynamicArray_1_t99828E6CE3CAE9F50FE06FC51527BE6763483CFF * ___m_RendererListResources_3;
	// UnityEngine.Rendering.RTHandleSystem UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry::m_RTHandleSystem
	RTHandleSystem_t767D689BA191A921429672BF8830F8AC24ADC36F * ___m_RTHandleSystem_4;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphDebugParams UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry::m_RenderGraphDebug
	RenderGraphDebugParams_t91BFF8C4DDFB7554599BA1A4441F0D82BB9F6908 * ___m_RenderGraphDebug_5;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphLogger UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry::m_Logger
	RenderGraphLogger_t134928C4D6F50853ED77DA1DF486B6C3719A360C * ___m_Logger_6;
	// System.Collections.Generic.List`1<System.ValueTuple`2<System.Int32,UnityEngine.Rendering.RTHandle>> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry::m_AllocatedTextures
	List_1_tB843D4B607172851A36CA6C7A9E10D5D2637750F * ___m_AllocatedTextures_7;

public:
	inline static int32_t get_offset_of_m_TextureResources_1() { return static_cast<int32_t>(offsetof(RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82, ___m_TextureResources_1)); }
	inline DynamicArray_1_tF03ED6854CC538AE7AC37C22C920521E3AABD2A8 * get_m_TextureResources_1() const { return ___m_TextureResources_1; }
	inline DynamicArray_1_tF03ED6854CC538AE7AC37C22C920521E3AABD2A8 ** get_address_of_m_TextureResources_1() { return &___m_TextureResources_1; }
	inline void set_m_TextureResources_1(DynamicArray_1_tF03ED6854CC538AE7AC37C22C920521E3AABD2A8 * value)
	{
		___m_TextureResources_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextureResources_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_TexturePool_2() { return static_cast<int32_t>(offsetof(RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82, ___m_TexturePool_2)); }
	inline Dictionary_2_tEF4C65656E284A264F8D30CEB002FFE814FEE380 * get_m_TexturePool_2() const { return ___m_TexturePool_2; }
	inline Dictionary_2_tEF4C65656E284A264F8D30CEB002FFE814FEE380 ** get_address_of_m_TexturePool_2() { return &___m_TexturePool_2; }
	inline void set_m_TexturePool_2(Dictionary_2_tEF4C65656E284A264F8D30CEB002FFE814FEE380 * value)
	{
		___m_TexturePool_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TexturePool_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_RendererListResources_3() { return static_cast<int32_t>(offsetof(RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82, ___m_RendererListResources_3)); }
	inline DynamicArray_1_t99828E6CE3CAE9F50FE06FC51527BE6763483CFF * get_m_RendererListResources_3() const { return ___m_RendererListResources_3; }
	inline DynamicArray_1_t99828E6CE3CAE9F50FE06FC51527BE6763483CFF ** get_address_of_m_RendererListResources_3() { return &___m_RendererListResources_3; }
	inline void set_m_RendererListResources_3(DynamicArray_1_t99828E6CE3CAE9F50FE06FC51527BE6763483CFF * value)
	{
		___m_RendererListResources_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RendererListResources_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_RTHandleSystem_4() { return static_cast<int32_t>(offsetof(RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82, ___m_RTHandleSystem_4)); }
	inline RTHandleSystem_t767D689BA191A921429672BF8830F8AC24ADC36F * get_m_RTHandleSystem_4() const { return ___m_RTHandleSystem_4; }
	inline RTHandleSystem_t767D689BA191A921429672BF8830F8AC24ADC36F ** get_address_of_m_RTHandleSystem_4() { return &___m_RTHandleSystem_4; }
	inline void set_m_RTHandleSystem_4(RTHandleSystem_t767D689BA191A921429672BF8830F8AC24ADC36F * value)
	{
		___m_RTHandleSystem_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RTHandleSystem_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_RenderGraphDebug_5() { return static_cast<int32_t>(offsetof(RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82, ___m_RenderGraphDebug_5)); }
	inline RenderGraphDebugParams_t91BFF8C4DDFB7554599BA1A4441F0D82BB9F6908 * get_m_RenderGraphDebug_5() const { return ___m_RenderGraphDebug_5; }
	inline RenderGraphDebugParams_t91BFF8C4DDFB7554599BA1A4441F0D82BB9F6908 ** get_address_of_m_RenderGraphDebug_5() { return &___m_RenderGraphDebug_5; }
	inline void set_m_RenderGraphDebug_5(RenderGraphDebugParams_t91BFF8C4DDFB7554599BA1A4441F0D82BB9F6908 * value)
	{
		___m_RenderGraphDebug_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RenderGraphDebug_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Logger_6() { return static_cast<int32_t>(offsetof(RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82, ___m_Logger_6)); }
	inline RenderGraphLogger_t134928C4D6F50853ED77DA1DF486B6C3719A360C * get_m_Logger_6() const { return ___m_Logger_6; }
	inline RenderGraphLogger_t134928C4D6F50853ED77DA1DF486B6C3719A360C ** get_address_of_m_Logger_6() { return &___m_Logger_6; }
	inline void set_m_Logger_6(RenderGraphLogger_t134928C4D6F50853ED77DA1DF486B6C3719A360C * value)
	{
		___m_Logger_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Logger_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_AllocatedTextures_7() { return static_cast<int32_t>(offsetof(RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82, ___m_AllocatedTextures_7)); }
	inline List_1_tB843D4B607172851A36CA6C7A9E10D5D2637750F * get_m_AllocatedTextures_7() const { return ___m_AllocatedTextures_7; }
	inline List_1_tB843D4B607172851A36CA6C7A9E10D5D2637750F ** get_address_of_m_AllocatedTextures_7() { return &___m_AllocatedTextures_7; }
	inline void set_m_AllocatedTextures_7(List_1_tB843D4B607172851A36CA6C7A9E10D5D2637750F * value)
	{
		___m_AllocatedTextures_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AllocatedTextures_7), (void*)value);
	}
};

struct RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82_StaticFields
{
public:
	// UnityEngine.Rendering.ShaderTagId UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry::s_EmptyName
	ShaderTagId_tA1DB5D58561C760D6D1AD54E21EC81D889100940  ___s_EmptyName_0;

public:
	inline static int32_t get_offset_of_s_EmptyName_0() { return static_cast<int32_t>(offsetof(RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82_StaticFields, ___s_EmptyName_0)); }
	inline ShaderTagId_tA1DB5D58561C760D6D1AD54E21EC81D889100940  get_s_EmptyName_0() const { return ___s_EmptyName_0; }
	inline ShaderTagId_tA1DB5D58561C760D6D1AD54E21EC81D889100940 * get_address_of_s_EmptyName_0() { return &___s_EmptyName_0; }
	inline void set_s_EmptyName_0(ShaderTagId_tA1DB5D58561C760D6D1AD54E21EC81D889100940  value)
	{
		___s_EmptyName_0 = value;
	}
};


// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceType
struct RenderGraphResourceType_t13ED07FF7DD43627D5D5D985895BA904612D6905 
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderGraphResourceType_t13ED07FF7DD43627D5D5D985895BA904612D6905, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Rendering.AsyncGPUReadbackRequest
struct AsyncGPUReadbackRequest_t0287C47661E145BF44C2FC0DBB1ECD73FD958B5C 
{
public:
	// System.IntPtr UnityEngine.Rendering.AsyncGPUReadbackRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Int32 UnityEngine.Rendering.AsyncGPUReadbackRequest::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncGPUReadbackRequest_t0287C47661E145BF44C2FC0DBB1ECD73FD958B5C, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(AsyncGPUReadbackRequest_t0287C47661E145BF44C2FC0DBB1ECD73FD958B5C, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};


// UnityEngine.Rendering.BuiltinRenderTextureType
struct BuiltinRenderTextureType_t6ECEE9FF62E815D7ED640D057EEA84C0FD145D01 
{
public:
	// System.Int32 UnityEngine.Rendering.BuiltinRenderTextureType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BuiltinRenderTextureType_t6ECEE9FF62E815D7ED640D057EEA84C0FD145D01, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.CullingResults
struct CullingResults_tFCB058F194E02A190E4719CFE5BC2A5A1BB1C21B 
{
public:
	// System.IntPtr UnityEngine.Rendering.CullingResults::ptr
	intptr_t ___ptr_0;
	// UnityEngine.Rendering.CullingAllocationInfo* UnityEngine.Rendering.CullingResults::m_AllocationInfo
	CullingAllocationInfo_t6FB719F375B06A0C10B87DB287A8143452406A14 * ___m_AllocationInfo_1;

public:
	inline static int32_t get_offset_of_ptr_0() { return static_cast<int32_t>(offsetof(CullingResults_tFCB058F194E02A190E4719CFE5BC2A5A1BB1C21B, ___ptr_0)); }
	inline intptr_t get_ptr_0() const { return ___ptr_0; }
	inline intptr_t* get_address_of_ptr_0() { return &___ptr_0; }
	inline void set_ptr_0(intptr_t value)
	{
		___ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_AllocationInfo_1() { return static_cast<int32_t>(offsetof(CullingResults_tFCB058F194E02A190E4719CFE5BC2A5A1BB1C21B, ___m_AllocationInfo_1)); }
	inline CullingAllocationInfo_t6FB719F375B06A0C10B87DB287A8143452406A14 * get_m_AllocationInfo_1() const { return ___m_AllocationInfo_1; }
	inline CullingAllocationInfo_t6FB719F375B06A0C10B87DB287A8143452406A14 ** get_address_of_m_AllocationInfo_1() { return &___m_AllocationInfo_1; }
	inline void set_m_AllocationInfo_1(CullingAllocationInfo_t6FB719F375B06A0C10B87DB287A8143452406A14 * value)
	{
		___m_AllocationInfo_1 = value;
	}
};


// UnityEngine.Rendering.ScriptableRenderContext
struct ScriptableRenderContext_t7A3C889E3516E8C79C1C0327D33ED9601D163A2B 
{
public:
	// System.IntPtr UnityEngine.Rendering.ScriptableRenderContext::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ScriptableRenderContext_t7A3C889E3516E8C79C1C0327D33ED9601D163A2B, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.Rendering.VertexAttribute
struct VertexAttribute_t2D79DF64001C55DA72AC86CE8946098970E8194D 
{
public:
	// System.Int32 UnityEngine.Rendering.VertexAttribute::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VertexAttribute_t2D79DF64001C55DA72AC86CE8946098970E8194D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.VertexAttributeFormat
struct VertexAttributeFormat_tE6C8ECB044124F5BE97C3AA20DDFE9EDB0046F27 
{
public:
	// System.Int32 UnityEngine.Rendering.VertexAttributeFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VertexAttributeFormat_tE6C8ECB044124F5BE97C3AA20DDFE9EDB0046F27, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.StyleKeyword
struct StyleKeyword_t5C285A4249A1A7A807C1B4D2AAF5D1350B0A3560 
{
public:
	// System.Int32 UnityEngine.UIElements.StyleKeyword::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StyleKeyword_t5C285A4249A1A7A807C1B4D2AAF5D1350B0A3560, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.Xml.Schema.XmlBaseConverter
struct XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8  : public XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E
{
public:
	// System.Xml.Schema.XmlSchemaType System.Xml.Schema.XmlBaseConverter::schemaType
	XmlSchemaType_tE97B70BB8298B2D6FDDBCCB14EEE99EC4806BBA9 * ___schemaType_0;
	// System.Xml.Schema.XmlTypeCode System.Xml.Schema.XmlBaseConverter::typeCode
	int32_t ___typeCode_1;
	// System.Type System.Xml.Schema.XmlBaseConverter::clrTypeDefault
	Type_t * ___clrTypeDefault_2;

public:
	inline static int32_t get_offset_of_schemaType_0() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8, ___schemaType_0)); }
	inline XmlSchemaType_tE97B70BB8298B2D6FDDBCCB14EEE99EC4806BBA9 * get_schemaType_0() const { return ___schemaType_0; }
	inline XmlSchemaType_tE97B70BB8298B2D6FDDBCCB14EEE99EC4806BBA9 ** get_address_of_schemaType_0() { return &___schemaType_0; }
	inline void set_schemaType_0(XmlSchemaType_tE97B70BB8298B2D6FDDBCCB14EEE99EC4806BBA9 * value)
	{
		___schemaType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___schemaType_0), (void*)value);
	}

	inline static int32_t get_offset_of_typeCode_1() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8, ___typeCode_1)); }
	inline int32_t get_typeCode_1() const { return ___typeCode_1; }
	inline int32_t* get_address_of_typeCode_1() { return &___typeCode_1; }
	inline void set_typeCode_1(int32_t value)
	{
		___typeCode_1 = value;
	}

	inline static int32_t get_offset_of_clrTypeDefault_2() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8, ___clrTypeDefault_2)); }
	inline Type_t * get_clrTypeDefault_2() const { return ___clrTypeDefault_2; }
	inline Type_t ** get_address_of_clrTypeDefault_2() { return &___clrTypeDefault_2; }
	inline void set_clrTypeDefault_2(Type_t * value)
	{
		___clrTypeDefault_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clrTypeDefault_2), (void*)value);
	}
};

struct XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8_StaticFields
{
public:
	// System.Type System.Xml.Schema.XmlBaseConverter::ICollectionType
	Type_t * ___ICollectionType_3;
	// System.Type System.Xml.Schema.XmlBaseConverter::IEnumerableType
	Type_t * ___IEnumerableType_4;
	// System.Type System.Xml.Schema.XmlBaseConverter::IListType
	Type_t * ___IListType_5;
	// System.Type System.Xml.Schema.XmlBaseConverter::ObjectArrayType
	Type_t * ___ObjectArrayType_6;
	// System.Type System.Xml.Schema.XmlBaseConverter::StringArrayType
	Type_t * ___StringArrayType_7;
	// System.Type System.Xml.Schema.XmlBaseConverter::XmlAtomicValueArrayType
	Type_t * ___XmlAtomicValueArrayType_8;
	// System.Type System.Xml.Schema.XmlBaseConverter::DecimalType
	Type_t * ___DecimalType_9;
	// System.Type System.Xml.Schema.XmlBaseConverter::Int32Type
	Type_t * ___Int32Type_10;
	// System.Type System.Xml.Schema.XmlBaseConverter::Int64Type
	Type_t * ___Int64Type_11;
	// System.Type System.Xml.Schema.XmlBaseConverter::StringType
	Type_t * ___StringType_12;
	// System.Type System.Xml.Schema.XmlBaseConverter::XmlAtomicValueType
	Type_t * ___XmlAtomicValueType_13;
	// System.Type System.Xml.Schema.XmlBaseConverter::ObjectType
	Type_t * ___ObjectType_14;
	// System.Type System.Xml.Schema.XmlBaseConverter::ByteType
	Type_t * ___ByteType_15;
	// System.Type System.Xml.Schema.XmlBaseConverter::Int16Type
	Type_t * ___Int16Type_16;
	// System.Type System.Xml.Schema.XmlBaseConverter::SByteType
	Type_t * ___SByteType_17;
	// System.Type System.Xml.Schema.XmlBaseConverter::UInt16Type
	Type_t * ___UInt16Type_18;
	// System.Type System.Xml.Schema.XmlBaseConverter::UInt32Type
	Type_t * ___UInt32Type_19;
	// System.Type System.Xml.Schema.XmlBaseConverter::UInt64Type
	Type_t * ___UInt64Type_20;
	// System.Type System.Xml.Schema.XmlBaseConverter::XPathItemType
	Type_t * ___XPathItemType_21;
	// System.Type System.Xml.Schema.XmlBaseConverter::DoubleType
	Type_t * ___DoubleType_22;
	// System.Type System.Xml.Schema.XmlBaseConverter::SingleType
	Type_t * ___SingleType_23;
	// System.Type System.Xml.Schema.XmlBaseConverter::DateTimeType
	Type_t * ___DateTimeType_24;
	// System.Type System.Xml.Schema.XmlBaseConverter::DateTimeOffsetType
	Type_t * ___DateTimeOffsetType_25;
	// System.Type System.Xml.Schema.XmlBaseConverter::BooleanType
	Type_t * ___BooleanType_26;
	// System.Type System.Xml.Schema.XmlBaseConverter::ByteArrayType
	Type_t * ___ByteArrayType_27;
	// System.Type System.Xml.Schema.XmlBaseConverter::XmlQualifiedNameType
	Type_t * ___XmlQualifiedNameType_28;
	// System.Type System.Xml.Schema.XmlBaseConverter::UriType
	Type_t * ___UriType_29;
	// System.Type System.Xml.Schema.XmlBaseConverter::TimeSpanType
	Type_t * ___TimeSpanType_30;
	// System.Type System.Xml.Schema.XmlBaseConverter::XPathNavigatorType
	Type_t * ___XPathNavigatorType_31;

public:
	inline static int32_t get_offset_of_ICollectionType_3() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8_StaticFields, ___ICollectionType_3)); }
	inline Type_t * get_ICollectionType_3() const { return ___ICollectionType_3; }
	inline Type_t ** get_address_of_ICollectionType_3() { return &___ICollectionType_3; }
	inline void set_ICollectionType_3(Type_t * value)
	{
		___ICollectionType_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ICollectionType_3), (void*)value);
	}

	inline static int32_t get_offset_of_IEnumerableType_4() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8_StaticFields, ___IEnumerableType_4)); }
	inline Type_t * get_IEnumerableType_4() const { return ___IEnumerableType_4; }
	inline Type_t ** get_address_of_IEnumerableType_4() { return &___IEnumerableType_4; }
	inline void set_IEnumerableType_4(Type_t * value)
	{
		___IEnumerableType_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IEnumerableType_4), (void*)value);
	}

	inline static int32_t get_offset_of_IListType_5() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8_StaticFields, ___IListType_5)); }
	inline Type_t * get_IListType_5() const { return ___IListType_5; }
	inline Type_t ** get_address_of_IListType_5() { return &___IListType_5; }
	inline void set_IListType_5(Type_t * value)
	{
		___IListType_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IListType_5), (void*)value);
	}

	inline static int32_t get_offset_of_ObjectArrayType_6() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8_StaticFields, ___ObjectArrayType_6)); }
	inline Type_t * get_ObjectArrayType_6() const { return ___ObjectArrayType_6; }
	inline Type_t ** get_address_of_ObjectArrayType_6() { return &___ObjectArrayType_6; }
	inline void set_ObjectArrayType_6(Type_t * value)
	{
		___ObjectArrayType_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ObjectArrayType_6), (void*)value);
	}

	inline static int32_t get_offset_of_StringArrayType_7() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8_StaticFields, ___StringArrayType_7)); }
	inline Type_t * get_StringArrayType_7() const { return ___StringArrayType_7; }
	inline Type_t ** get_address_of_StringArrayType_7() { return &___StringArrayType_7; }
	inline void set_StringArrayType_7(Type_t * value)
	{
		___StringArrayType_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StringArrayType_7), (void*)value);
	}

	inline static int32_t get_offset_of_XmlAtomicValueArrayType_8() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8_StaticFields, ___XmlAtomicValueArrayType_8)); }
	inline Type_t * get_XmlAtomicValueArrayType_8() const { return ___XmlAtomicValueArrayType_8; }
	inline Type_t ** get_address_of_XmlAtomicValueArrayType_8() { return &___XmlAtomicValueArrayType_8; }
	inline void set_XmlAtomicValueArrayType_8(Type_t * value)
	{
		___XmlAtomicValueArrayType_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___XmlAtomicValueArrayType_8), (void*)value);
	}

	inline static int32_t get_offset_of_DecimalType_9() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8_StaticFields, ___DecimalType_9)); }
	inline Type_t * get_DecimalType_9() const { return ___DecimalType_9; }
	inline Type_t ** get_address_of_DecimalType_9() { return &___DecimalType_9; }
	inline void set_DecimalType_9(Type_t * value)
	{
		___DecimalType_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DecimalType_9), (void*)value);
	}

	inline static int32_t get_offset_of_Int32Type_10() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8_StaticFields, ___Int32Type_10)); }
	inline Type_t * get_Int32Type_10() const { return ___Int32Type_10; }
	inline Type_t ** get_address_of_Int32Type_10() { return &___Int32Type_10; }
	inline void set_Int32Type_10(Type_t * value)
	{
		___Int32Type_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Int32Type_10), (void*)value);
	}

	inline static int32_t get_offset_of_Int64Type_11() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8_StaticFields, ___Int64Type_11)); }
	inline Type_t * get_Int64Type_11() const { return ___Int64Type_11; }
	inline Type_t ** get_address_of_Int64Type_11() { return &___Int64Type_11; }
	inline void set_Int64Type_11(Type_t * value)
	{
		___Int64Type_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Int64Type_11), (void*)value);
	}

	inline static int32_t get_offset_of_StringType_12() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8_StaticFields, ___StringType_12)); }
	inline Type_t * get_StringType_12() const { return ___StringType_12; }
	inline Type_t ** get_address_of_StringType_12() { return &___StringType_12; }
	inline void set_StringType_12(Type_t * value)
	{
		___StringType_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StringType_12), (void*)value);
	}

	inline static int32_t get_offset_of_XmlAtomicValueType_13() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8_StaticFields, ___XmlAtomicValueType_13)); }
	inline Type_t * get_XmlAtomicValueType_13() const { return ___XmlAtomicValueType_13; }
	inline Type_t ** get_address_of_XmlAtomicValueType_13() { return &___XmlAtomicValueType_13; }
	inline void set_XmlAtomicValueType_13(Type_t * value)
	{
		___XmlAtomicValueType_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___XmlAtomicValueType_13), (void*)value);
	}

	inline static int32_t get_offset_of_ObjectType_14() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8_StaticFields, ___ObjectType_14)); }
	inline Type_t * get_ObjectType_14() const { return ___ObjectType_14; }
	inline Type_t ** get_address_of_ObjectType_14() { return &___ObjectType_14; }
	inline void set_ObjectType_14(Type_t * value)
	{
		___ObjectType_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ObjectType_14), (void*)value);
	}

	inline static int32_t get_offset_of_ByteType_15() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8_StaticFields, ___ByteType_15)); }
	inline Type_t * get_ByteType_15() const { return ___ByteType_15; }
	inline Type_t ** get_address_of_ByteType_15() { return &___ByteType_15; }
	inline void set_ByteType_15(Type_t * value)
	{
		___ByteType_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ByteType_15), (void*)value);
	}

	inline static int32_t get_offset_of_Int16Type_16() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8_StaticFields, ___Int16Type_16)); }
	inline Type_t * get_Int16Type_16() const { return ___Int16Type_16; }
	inline Type_t ** get_address_of_Int16Type_16() { return &___Int16Type_16; }
	inline void set_Int16Type_16(Type_t * value)
	{
		___Int16Type_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Int16Type_16), (void*)value);
	}

	inline static int32_t get_offset_of_SByteType_17() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8_StaticFields, ___SByteType_17)); }
	inline Type_t * get_SByteType_17() const { return ___SByteType_17; }
	inline Type_t ** get_address_of_SByteType_17() { return &___SByteType_17; }
	inline void set_SByteType_17(Type_t * value)
	{
		___SByteType_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SByteType_17), (void*)value);
	}

	inline static int32_t get_offset_of_UInt16Type_18() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8_StaticFields, ___UInt16Type_18)); }
	inline Type_t * get_UInt16Type_18() const { return ___UInt16Type_18; }
	inline Type_t ** get_address_of_UInt16Type_18() { return &___UInt16Type_18; }
	inline void set_UInt16Type_18(Type_t * value)
	{
		___UInt16Type_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UInt16Type_18), (void*)value);
	}

	inline static int32_t get_offset_of_UInt32Type_19() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8_StaticFields, ___UInt32Type_19)); }
	inline Type_t * get_UInt32Type_19() const { return ___UInt32Type_19; }
	inline Type_t ** get_address_of_UInt32Type_19() { return &___UInt32Type_19; }
	inline void set_UInt32Type_19(Type_t * value)
	{
		___UInt32Type_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UInt32Type_19), (void*)value);
	}

	inline static int32_t get_offset_of_UInt64Type_20() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8_StaticFields, ___UInt64Type_20)); }
	inline Type_t * get_UInt64Type_20() const { return ___UInt64Type_20; }
	inline Type_t ** get_address_of_UInt64Type_20() { return &___UInt64Type_20; }
	inline void set_UInt64Type_20(Type_t * value)
	{
		___UInt64Type_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UInt64Type_20), (void*)value);
	}

	inline static int32_t get_offset_of_XPathItemType_21() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8_StaticFields, ___XPathItemType_21)); }
	inline Type_t * get_XPathItemType_21() const { return ___XPathItemType_21; }
	inline Type_t ** get_address_of_XPathItemType_21() { return &___XPathItemType_21; }
	inline void set_XPathItemType_21(Type_t * value)
	{
		___XPathItemType_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___XPathItemType_21), (void*)value);
	}

	inline static int32_t get_offset_of_DoubleType_22() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8_StaticFields, ___DoubleType_22)); }
	inline Type_t * get_DoubleType_22() const { return ___DoubleType_22; }
	inline Type_t ** get_address_of_DoubleType_22() { return &___DoubleType_22; }
	inline void set_DoubleType_22(Type_t * value)
	{
		___DoubleType_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DoubleType_22), (void*)value);
	}

	inline static int32_t get_offset_of_SingleType_23() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8_StaticFields, ___SingleType_23)); }
	inline Type_t * get_SingleType_23() const { return ___SingleType_23; }
	inline Type_t ** get_address_of_SingleType_23() { return &___SingleType_23; }
	inline void set_SingleType_23(Type_t * value)
	{
		___SingleType_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SingleType_23), (void*)value);
	}

	inline static int32_t get_offset_of_DateTimeType_24() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8_StaticFields, ___DateTimeType_24)); }
	inline Type_t * get_DateTimeType_24() const { return ___DateTimeType_24; }
	inline Type_t ** get_address_of_DateTimeType_24() { return &___DateTimeType_24; }
	inline void set_DateTimeType_24(Type_t * value)
	{
		___DateTimeType_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DateTimeType_24), (void*)value);
	}

	inline static int32_t get_offset_of_DateTimeOffsetType_25() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8_StaticFields, ___DateTimeOffsetType_25)); }
	inline Type_t * get_DateTimeOffsetType_25() const { return ___DateTimeOffsetType_25; }
	inline Type_t ** get_address_of_DateTimeOffsetType_25() { return &___DateTimeOffsetType_25; }
	inline void set_DateTimeOffsetType_25(Type_t * value)
	{
		___DateTimeOffsetType_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DateTimeOffsetType_25), (void*)value);
	}

	inline static int32_t get_offset_of_BooleanType_26() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8_StaticFields, ___BooleanType_26)); }
	inline Type_t * get_BooleanType_26() const { return ___BooleanType_26; }
	inline Type_t ** get_address_of_BooleanType_26() { return &___BooleanType_26; }
	inline void set_BooleanType_26(Type_t * value)
	{
		___BooleanType_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BooleanType_26), (void*)value);
	}

	inline static int32_t get_offset_of_ByteArrayType_27() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8_StaticFields, ___ByteArrayType_27)); }
	inline Type_t * get_ByteArrayType_27() const { return ___ByteArrayType_27; }
	inline Type_t ** get_address_of_ByteArrayType_27() { return &___ByteArrayType_27; }
	inline void set_ByteArrayType_27(Type_t * value)
	{
		___ByteArrayType_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ByteArrayType_27), (void*)value);
	}

	inline static int32_t get_offset_of_XmlQualifiedNameType_28() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8_StaticFields, ___XmlQualifiedNameType_28)); }
	inline Type_t * get_XmlQualifiedNameType_28() const { return ___XmlQualifiedNameType_28; }
	inline Type_t ** get_address_of_XmlQualifiedNameType_28() { return &___XmlQualifiedNameType_28; }
	inline void set_XmlQualifiedNameType_28(Type_t * value)
	{
		___XmlQualifiedNameType_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___XmlQualifiedNameType_28), (void*)value);
	}

	inline static int32_t get_offset_of_UriType_29() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8_StaticFields, ___UriType_29)); }
	inline Type_t * get_UriType_29() const { return ___UriType_29; }
	inline Type_t ** get_address_of_UriType_29() { return &___UriType_29; }
	inline void set_UriType_29(Type_t * value)
	{
		___UriType_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriType_29), (void*)value);
	}

	inline static int32_t get_offset_of_TimeSpanType_30() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8_StaticFields, ___TimeSpanType_30)); }
	inline Type_t * get_TimeSpanType_30() const { return ___TimeSpanType_30; }
	inline Type_t ** get_address_of_TimeSpanType_30() { return &___TimeSpanType_30; }
	inline void set_TimeSpanType_30(Type_t * value)
	{
		___TimeSpanType_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TimeSpanType_30), (void*)value);
	}

	inline static int32_t get_offset_of_XPathNavigatorType_31() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8_StaticFields, ___XPathNavigatorType_31)); }
	inline Type_t * get_XPathNavigatorType_31() const { return ___XPathNavigatorType_31; }
	inline Type_t ** get_address_of_XPathNavigatorType_31() { return &___XPathNavigatorType_31; }
	inline void set_XPathNavigatorType_31(Type_t * value)
	{
		___XPathNavigatorType_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___XPathNavigatorType_31), (void*)value);
	}
};


// Unity.Collections.NativeArray`1<System.Byte>
struct NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.Int32>
struct NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.Single>
struct NativeArray_1_t2F93EF84A543D826D53EFEAFE52F5C42392D0D67 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t2F93EF84A543D826D53EFEAFE52F5C42392D0D67, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t2F93EF84A543D826D53EFEAFE52F5C42392D0D67, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t2F93EF84A543D826D53EFEAFE52F5C42392D0D67, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.UInt32>
struct NativeArray_1_t46D89A67B73570077E7280CB4C709CB4E66EEA5E 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t46D89A67B73570077E7280CB4C709CB4E66EEA5E, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t46D89A67B73570077E7280CB4C709CB4E66EEA5E, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t46D89A67B73570077E7280CB4C709CB4E66EEA5E, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>
struct NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Plane>
struct NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Rendering.BatchVisibility>
struct NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Rendering.VisibleLight>
struct NativeArray_1_t89C3343A50E798CEF85D6412699D078CA79D1638 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t89C3343A50E798CEF85D6412699D078CA79D1638, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t89C3343A50E798CEF85D6412699D078CA79D1638, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t89C3343A50E798CEF85D6412699D078CA79D1638, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Rendering.VisibleReflectionProbe>
struct NativeArray_1_tB89B8CD2BB5126750F1D718104BBEFFC38DE8FEC 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tB89B8CD2BB5126750F1D718104BBEFFC38DE8FEC, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tB89B8CD2BB5126750F1D718104BBEFFC38DE8FEC, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tB89B8CD2BB5126750F1D718104BBEFFC38DE8FEC, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphContext
struct RenderGraphContext_t7AFBB4B7123530BF370FF3AA41D1FEC59C9846E3 
{
public:
	// UnityEngine.Rendering.ScriptableRenderContext UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphContext::renderContext
	ScriptableRenderContext_t7A3C889E3516E8C79C1C0327D33ED9601D163A2B  ___renderContext_0;
	// UnityEngine.Rendering.CommandBuffer UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphContext::cmd
	CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD * ___cmd_1;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphObjectPool UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphContext::renderGraphPool
	RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 * ___renderGraphPool_2;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphContext::resources
	RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 * ___resources_3;

public:
	inline static int32_t get_offset_of_renderContext_0() { return static_cast<int32_t>(offsetof(RenderGraphContext_t7AFBB4B7123530BF370FF3AA41D1FEC59C9846E3, ___renderContext_0)); }
	inline ScriptableRenderContext_t7A3C889E3516E8C79C1C0327D33ED9601D163A2B  get_renderContext_0() const { return ___renderContext_0; }
	inline ScriptableRenderContext_t7A3C889E3516E8C79C1C0327D33ED9601D163A2B * get_address_of_renderContext_0() { return &___renderContext_0; }
	inline void set_renderContext_0(ScriptableRenderContext_t7A3C889E3516E8C79C1C0327D33ED9601D163A2B  value)
	{
		___renderContext_0 = value;
	}

	inline static int32_t get_offset_of_cmd_1() { return static_cast<int32_t>(offsetof(RenderGraphContext_t7AFBB4B7123530BF370FF3AA41D1FEC59C9846E3, ___cmd_1)); }
	inline CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD * get_cmd_1() const { return ___cmd_1; }
	inline CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD ** get_address_of_cmd_1() { return &___cmd_1; }
	inline void set_cmd_1(CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD * value)
	{
		___cmd_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cmd_1), (void*)value);
	}

	inline static int32_t get_offset_of_renderGraphPool_2() { return static_cast<int32_t>(offsetof(RenderGraphContext_t7AFBB4B7123530BF370FF3AA41D1FEC59C9846E3, ___renderGraphPool_2)); }
	inline RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 * get_renderGraphPool_2() const { return ___renderGraphPool_2; }
	inline RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 ** get_address_of_renderGraphPool_2() { return &___renderGraphPool_2; }
	inline void set_renderGraphPool_2(RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 * value)
	{
		___renderGraphPool_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___renderGraphPool_2), (void*)value);
	}

	inline static int32_t get_offset_of_resources_3() { return static_cast<int32_t>(offsetof(RenderGraphContext_t7AFBB4B7123530BF370FF3AA41D1FEC59C9846E3, ___resources_3)); }
	inline RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 * get_resources_3() const { return ___resources_3; }
	inline RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 ** get_address_of_resources_3() { return &___resources_3; }
	inline void set_resources_3(RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 * value)
	{
		___resources_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resources_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphContext
struct RenderGraphContext_t7AFBB4B7123530BF370FF3AA41D1FEC59C9846E3_marshaled_pinvoke
{
	ScriptableRenderContext_t7A3C889E3516E8C79C1C0327D33ED9601D163A2B  ___renderContext_0;
	CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD * ___cmd_1;
	RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 * ___renderGraphPool_2;
	RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 * ___resources_3;
};
// Native definition for COM marshalling of UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphContext
struct RenderGraphContext_t7AFBB4B7123530BF370FF3AA41D1FEC59C9846E3_marshaled_com
{
	ScriptableRenderContext_t7A3C889E3516E8C79C1C0327D33ED9601D163A2B  ___renderContext_0;
	CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD * ___cmd_1;
	RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 * ___renderGraphPool_2;
	RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 * ___resources_3;
};

// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphMutableResource
struct RenderGraphMutableResource_t3658233BFA84721C15D19B38770A075F46950524 
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphMutableResource::<handle>k__BackingField
	int32_t ___U3ChandleU3Ek__BackingField_0;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceType UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphMutableResource::<type>k__BackingField
	int32_t ___U3CtypeU3Ek__BackingField_1;
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphMutableResource::<version>k__BackingField
	int32_t ___U3CversionU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3ChandleU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RenderGraphMutableResource_t3658233BFA84721C15D19B38770A075F46950524, ___U3ChandleU3Ek__BackingField_0)); }
	inline int32_t get_U3ChandleU3Ek__BackingField_0() const { return ___U3ChandleU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3ChandleU3Ek__BackingField_0() { return &___U3ChandleU3Ek__BackingField_0; }
	inline void set_U3ChandleU3Ek__BackingField_0(int32_t value)
	{
		___U3ChandleU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CtypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RenderGraphMutableResource_t3658233BFA84721C15D19B38770A075F46950524, ___U3CtypeU3Ek__BackingField_1)); }
	inline int32_t get_U3CtypeU3Ek__BackingField_1() const { return ___U3CtypeU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CtypeU3Ek__BackingField_1() { return &___U3CtypeU3Ek__BackingField_1; }
	inline void set_U3CtypeU3Ek__BackingField_1(int32_t value)
	{
		___U3CtypeU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CversionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RenderGraphMutableResource_t3658233BFA84721C15D19B38770A075F46950524, ___U3CversionU3Ek__BackingField_2)); }
	inline int32_t get_U3CversionU3Ek__BackingField_2() const { return ___U3CversionU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CversionU3Ek__BackingField_2() { return &___U3CversionU3Ek__BackingField_2; }
	inline void set_U3CversionU3Ek__BackingField_2(int32_t value)
	{
		___U3CversionU3Ek__BackingField_2 = value;
	}
};


// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Rendering.HighDefinition.MigrationStep`2<System.Int32Enum,System.Object>
struct MigrationStep_2_t57890783D2260455C7830D5E94EF6D325F12A3DA 
{
public:
	// System.Action`1<TTarget> UnityEngine.Rendering.HighDefinition.MigrationStep`2::m_MigrationAction
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ___m_MigrationAction_0;
	// TVersion UnityEngine.Rendering.HighDefinition.MigrationStep`2::Version
	int32_t ___Version_1;

public:
	inline static int32_t get_offset_of_m_MigrationAction_0() { return static_cast<int32_t>(offsetof(MigrationStep_2_t57890783D2260455C7830D5E94EF6D325F12A3DA, ___m_MigrationAction_0)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get_m_MigrationAction_0() const { return ___m_MigrationAction_0; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of_m_MigrationAction_0() { return &___m_MigrationAction_0; }
	inline void set_m_MigrationAction_0(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		___m_MigrationAction_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MigrationAction_0), (void*)value);
	}

	inline static int32_t get_offset_of_Version_1() { return static_cast<int32_t>(offsetof(MigrationStep_2_t57890783D2260455C7830D5E94EF6D325F12A3DA, ___Version_1)); }
	inline int32_t get_Version_1() const { return ___Version_1; }
	inline int32_t* get_address_of_Version_1() { return &___Version_1; }
	inline void set_Version_1(int32_t value)
	{
		___Version_1 = value;
	}
};


// UnityEngine.Rendering.RenderTargetIdentifier
struct RenderTargetIdentifier_tB7480EE944FC70E0AB7D499DB17D119EB65B0F5B 
{
public:
	// UnityEngine.Rendering.BuiltinRenderTextureType UnityEngine.Rendering.RenderTargetIdentifier::m_Type
	int32_t ___m_Type_0;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_NameID
	int32_t ___m_NameID_1;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_InstanceID
	int32_t ___m_InstanceID_2;
	// System.IntPtr UnityEngine.Rendering.RenderTargetIdentifier::m_BufferPointer
	intptr_t ___m_BufferPointer_3;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_MipLevel
	int32_t ___m_MipLevel_4;
	// UnityEngine.CubemapFace UnityEngine.Rendering.RenderTargetIdentifier::m_CubeFace
	int32_t ___m_CubeFace_5;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_DepthSlice
	int32_t ___m_DepthSlice_6;

public:
	inline static int32_t get_offset_of_m_Type_0() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_tB7480EE944FC70E0AB7D499DB17D119EB65B0F5B, ___m_Type_0)); }
	inline int32_t get_m_Type_0() const { return ___m_Type_0; }
	inline int32_t* get_address_of_m_Type_0() { return &___m_Type_0; }
	inline void set_m_Type_0(int32_t value)
	{
		___m_Type_0 = value;
	}

	inline static int32_t get_offset_of_m_NameID_1() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_tB7480EE944FC70E0AB7D499DB17D119EB65B0F5B, ___m_NameID_1)); }
	inline int32_t get_m_NameID_1() const { return ___m_NameID_1; }
	inline int32_t* get_address_of_m_NameID_1() { return &___m_NameID_1; }
	inline void set_m_NameID_1(int32_t value)
	{
		___m_NameID_1 = value;
	}

	inline static int32_t get_offset_of_m_InstanceID_2() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_tB7480EE944FC70E0AB7D499DB17D119EB65B0F5B, ___m_InstanceID_2)); }
	inline int32_t get_m_InstanceID_2() const { return ___m_InstanceID_2; }
	inline int32_t* get_address_of_m_InstanceID_2() { return &___m_InstanceID_2; }
	inline void set_m_InstanceID_2(int32_t value)
	{
		___m_InstanceID_2 = value;
	}

	inline static int32_t get_offset_of_m_BufferPointer_3() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_tB7480EE944FC70E0AB7D499DB17D119EB65B0F5B, ___m_BufferPointer_3)); }
	inline intptr_t get_m_BufferPointer_3() const { return ___m_BufferPointer_3; }
	inline intptr_t* get_address_of_m_BufferPointer_3() { return &___m_BufferPointer_3; }
	inline void set_m_BufferPointer_3(intptr_t value)
	{
		___m_BufferPointer_3 = value;
	}

	inline static int32_t get_offset_of_m_MipLevel_4() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_tB7480EE944FC70E0AB7D499DB17D119EB65B0F5B, ___m_MipLevel_4)); }
	inline int32_t get_m_MipLevel_4() const { return ___m_MipLevel_4; }
	inline int32_t* get_address_of_m_MipLevel_4() { return &___m_MipLevel_4; }
	inline void set_m_MipLevel_4(int32_t value)
	{
		___m_MipLevel_4 = value;
	}

	inline static int32_t get_offset_of_m_CubeFace_5() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_tB7480EE944FC70E0AB7D499DB17D119EB65B0F5B, ___m_CubeFace_5)); }
	inline int32_t get_m_CubeFace_5() const { return ___m_CubeFace_5; }
	inline int32_t* get_address_of_m_CubeFace_5() { return &___m_CubeFace_5; }
	inline void set_m_CubeFace_5(int32_t value)
	{
		___m_CubeFace_5 = value;
	}

	inline static int32_t get_offset_of_m_DepthSlice_6() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_tB7480EE944FC70E0AB7D499DB17D119EB65B0F5B, ___m_DepthSlice_6)); }
	inline int32_t get_m_DepthSlice_6() const { return ___m_DepthSlice_6; }
	inline int32_t* get_address_of_m_DepthSlice_6() { return &___m_DepthSlice_6; }
	inline void set_m_DepthSlice_6(int32_t value)
	{
		___m_DepthSlice_6 = value;
	}
};


// UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>
struct StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C 
{
public:
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleEnum`1::m_Keyword
	int32_t ___m_Keyword_0;
	// T UnityEngine.UIElements.StyleEnum`1::m_Value
	int32_t ___m_Value_1;
	// System.Int32 UnityEngine.UIElements.StyleEnum`1::m_Specificity
	int32_t ___m_Specificity_2;

public:
	inline static int32_t get_offset_of_m_Keyword_0() { return static_cast<int32_t>(offsetof(StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C, ___m_Keyword_0)); }
	inline int32_t get_m_Keyword_0() const { return ___m_Keyword_0; }
	inline int32_t* get_address_of_m_Keyword_0() { return &___m_Keyword_0; }
	inline void set_m_Keyword_0(int32_t value)
	{
		___m_Keyword_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C, ___m_Value_1)); }
	inline int32_t get_m_Value_1() const { return ___m_Value_1; }
	inline int32_t* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(int32_t value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_Specificity_2() { return static_cast<int32_t>(offsetof(StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C, ___m_Specificity_2)); }
	inline int32_t get_m_Specificity_2() const { return ___m_Specificity_2; }
	inline int32_t* get_address_of_m_Specificity_2() { return &___m_Specificity_2; }
	inline void set_m_Specificity_2(int32_t value)
	{
		___m_Specificity_2 = value;
	}
};


// UnityEngine.UIElements.StyleInt
struct StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89 
{
public:
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleInt::m_Keyword
	int32_t ___m_Keyword_0;
	// System.Int32 UnityEngine.UIElements.StyleInt::m_Value
	int32_t ___m_Value_1;
	// System.Int32 UnityEngine.UIElements.StyleInt::m_Specificity
	int32_t ___m_Specificity_2;

public:
	inline static int32_t get_offset_of_m_Keyword_0() { return static_cast<int32_t>(offsetof(StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89, ___m_Keyword_0)); }
	inline int32_t get_m_Keyword_0() const { return ___m_Keyword_0; }
	inline int32_t* get_address_of_m_Keyword_0() { return &___m_Keyword_0; }
	inline void set_m_Keyword_0(int32_t value)
	{
		___m_Keyword_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89, ___m_Value_1)); }
	inline int32_t get_m_Value_1() const { return ___m_Value_1; }
	inline int32_t* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(int32_t value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_Specificity_2() { return static_cast<int32_t>(offsetof(StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89, ___m_Specificity_2)); }
	inline int32_t get_m_Specificity_2() const { return ___m_Specificity_2; }
	inline int32_t* get_address_of_m_Specificity_2() { return &___m_Specificity_2; }
	inline void set_m_Specificity_2(int32_t value)
	{
		___m_Specificity_2 = value;
	}
};


// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Boolean>
struct Transformer_1_t19A7258583FA1642B75695805A3C675EA09C25E5  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Byte>
struct Transformer_1_tEF5D2D9847B566056189D34781B028AAC143AE94  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Char>
struct Transformer_1_t324CE6226D2DB02125521E43B7578823697F11C9  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transformer_1_t986FAAB941679A366CE204DA40A2C414683DDE0A  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.DateTime>
struct Transformer_1_tDA2EE3A4D871B443E8A28C71B0E0164A41D3DA02  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.DateTimeOffset>
struct Transformer_1_tBE57A838EA9C265FA94567A0081AA9D93DDC74F8  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Decimal>
struct Transformer_1_tA51CB05B3742EC3F46FA501481261EDEB730DABD  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Diagnostics.Tracing.EmptyStruct>
struct Transformer_1_t4BE562A96C7C1F79332E47AAC9A46C3302AB47A2  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Double>
struct Transformer_1_t3D2772F81DACC0E761A22F7C74C18AD24C36D58D  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Guid>
struct Transformer_1_t8542C56C05EB3E22016B2903F0EDCAC5D051355B  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Int16>
struct Transformer_1_t436942B036692C49C596B552368FD0D9AEB19996  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Int32>
struct Transformer_1_tD02BD295F6960A844F4E3D7D4CA9F0FBD4007780  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Int64>
struct Transformer_1_t4FF63122CA8338DDEE466FBA386674D90B0DA997  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.IntPtr>
struct Transformer_1_tD37A651949FE156BFC86946E76F3BEA93F428054  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Object>
struct Transformer_1_tD19681DA49D4AA38D8D48CE42752CBE15718DB47  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.SByte>
struct Transformer_1_t664F7EECE18DF51BE5DD248D5B93731F8A23DCD4  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.Single>
struct Transformer_1_tB28894046684B559EDC3DE1E3481E408A5BE3A89  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.TimeSpan>
struct Transformer_1_t1AB12F230CAB2407D401317A65F9A5463404A073  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.UInt16>
struct Transformer_1_t9AB703D7D55E206EFFA2B0270C980C290C374E32  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.UInt32>
struct Transformer_1_t4FD7FB274F8A13E577B2C68C562542FB8BE19BF5  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.UInt64>
struct Transformer_1_tF779A9DA86F954469CABF99E43E5D2126D6C7558  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Byte,System.UIntPtr>
struct Transformer_1_t1C9601B96FC325D98CD121FFF18A903AE06F926D  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Boolean>
struct Transformer_1_t8ABB0411B7298DFBBC20B58387ECF4E74BFBDEDD  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Byte>
struct Transformer_1_t65E3C27F47E4C586AEEB98C5F5F7EC12B7487F51  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Char>
struct Transformer_1_t94FEFA2C1D7C52972E627FEFFA99284D0DDC25F3  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transformer_1_t240346D763F8BC997367E7F857B6F69D68360595  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.DateTime>
struct Transformer_1_t4CC0B6F21608AE009CB235BE9B1BF15A9B0E3431  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.DateTimeOffset>
struct Transformer_1_t92CEE2D0E9F82F259F4B10113D85847D8DE54757  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Decimal>
struct Transformer_1_tE3062CB768903660C5318F9D9B7DDE15A714588C  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Diagnostics.Tracing.EmptyStruct>
struct Transformer_1_tBD1BBF19FDEEE663FCCC49AC10AADA1B059D325C  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Double>
struct Transformer_1_tFA2CCE2417FF56944AD841B7ED04360314120497  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Guid>
struct Transformer_1_t10C9C25A5618D14E4E001BDF9E20419A10A6DFB9  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Int16>
struct Transformer_1_tF7F040CDF505A8BEF12BEBEAA31FFD9BD43FF8F8  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Int32>
struct Transformer_1_tA741C25CF64E7496C977BB826C7D60FA98E8C970  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Int64>
struct Transformer_1_t23A5C3116CBF683F9F68EE3DDFF0E12802831AC4  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.IntPtr>
struct Transformer_1_tDEDEB8C2D8BA02B307B0EDD7EEC5D44DDFB05231  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Object>
struct Transformer_1_t026BF5A032AD1B2D3EEDA845C07E1202DFCBF82F  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.SByte>
struct Transformer_1_t1358C14103D206B57FA822096A13BEDC1A7A4048  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.Single>
struct Transformer_1_t761E0F084572634E94674D7C1912B56771C73045  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.TimeSpan>
struct Transformer_1_tD23E5E6A1A391F332A34AA4663D09426093C002A  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.UInt16>
struct Transformer_1_tD6009487878B22E34FDE5E3FBDC4B4E93CF5BC77  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.UInt32>
struct Transformer_1_t385ECD51AD4E2A1E86876F87BF89844FDE07DD32  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.UInt64>
struct Transformer_1_t0698CC99B4FA18A0050698BCB1D646E8C1C22984  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int16,System.UIntPtr>
struct Transformer_1_t6585D4102CCBAE872252AC5E0732CC8EF79DBB20  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Boolean>
struct Transformer_1_t2DBEC8D0800B8F041E03F876ABF5AF7D3DFE5D7B  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Byte>
struct Transformer_1_t2EE6D7CD39A5C2027ECB941A3759A9EBA3F0BB0C  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Char>
struct Transformer_1_t79A0EA03C0758462B77611F0C5FF7EB4477F9D95  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transformer_1_t3FB65B12F9B30A5AA121C6225ABBD98671D135DE  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.DateTime>
struct Transformer_1_t00DC76E5BE87873705F91E95AEF9B620DA10C64A  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.DateTimeOffset>
struct Transformer_1_tE5EF3DB7DB9777B2A122766AB8A2227D1C094B79  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Decimal>
struct Transformer_1_t25C83F04D27EBB3953BD3252D27F944B7081EFD4  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Diagnostics.Tracing.EmptyStruct>
struct Transformer_1_t0FBAD50C82E7A4C7D93A7E4DAE1B7765DEC256E8  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Double>
struct Transformer_1_t68826869D55A324A082EE643E06DFE0549C43F1B  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Guid>
struct Transformer_1_tAE2C376EED3A46831CB52406C90F7FF43F1F9F05  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Int16>
struct Transformer_1_t09EADD81A9C2CA1C3043FA5CD6706CA1530666E0  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Int32>
struct Transformer_1_t9E7C8EB2E7DA583C3C11956C5E93F3D313CE08D6  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Int64>
struct Transformer_1_t8B62B5B7F2FBA49FF26EC65A644535089EF385F2  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.IntPtr>
struct Transformer_1_tE65E26BDA2D86514F0E4F7DCA655FD6391C3498A  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Object>
struct Transformer_1_t65992AEC496277643CBC80A2F9BED723063EB848  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.SByte>
struct Transformer_1_t8A499D6FEF7443CA4CE5419B243505BB61DE7DEF  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.Single>
struct Transformer_1_t69D9451801937FE2AFF99FCCE268AA878D643D9B  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.TimeSpan>
struct Transformer_1_tE86E929A9B1ED9F0643091DE20F815B92553CA94  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.UInt16>
struct Transformer_1_t4021B15333DAA448023DFF6ED2E859037D86D3D9  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.UInt32>
struct Transformer_1_t1D933EC313B2537F0734DE0A2C329C45BFC02BEE  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.UInt64>
struct Transformer_1_tB4F33CE42FA8CDA6C1AEB382F3C767D3D702427D  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int32,System.UIntPtr>
struct Transformer_1_t64BE2DF002F043C82C776B57E74B06CBF540475A  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Boolean>
struct Transformer_1_tEAC0B3C94575ECFC1F5F52CF95B8281D45B17E82  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Byte>
struct Transformer_1_tEE83BA38EF2ECC4720D526BBB03AD2D7847DC673  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Char>
struct Transformer_1_t9BA41A256E2DA69FF4771DEB014C7A916468BC66  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transformer_1_t522A3AB35D286FE6FF0D73E32E18AF9BA2C889B6  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.DateTime>
struct Transformer_1_tCA45FD544A9D029E08729452F32B044016B2F8EE  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.DateTimeOffset>
struct Transformer_1_t857CBA0AC2F70C8D74D8183C19537F7A692F21A7  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Decimal>
struct Transformer_1_tE30A5AE1F549407B3087EBD3EC6E8DB713D78DC2  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Diagnostics.Tracing.EmptyStruct>
struct Transformer_1_t41E828E06402D572E82833CAFA0E9727745F7A0D  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Double>
struct Transformer_1_tD1B097B6BB34F0B4B3455970FC79E6A585DE5B8A  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Guid>
struct Transformer_1_t39D48650F87DB03E776EE44D5C8F156643CCD9A0  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Int16>
struct Transformer_1_tC51C59F619800C8468ED4694D7779761A5403071  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Int32>
struct Transformer_1_tCB26A79652B363A8064BBAF43700A09A80610C91  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Int64>
struct Transformer_1_tB3B4F4C80F506532A9BC19E9995C82DE17840E96  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.IntPtr>
struct Transformer_1_t60B3D9EF53100FA49F00B43536652E9473B31171  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Object>
struct Transformer_1_t55A8AAC336D2E181D0CC38D11BD1B30145E6479D  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.SByte>
struct Transformer_1_t01DCD4DD4A9D8250EDA7C3884A31ADCBC0CA2F31  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.Single>
struct Transformer_1_tDC0440FA1979CE8CAEE05E55C3F77B191B3864A5  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.TimeSpan>
struct Transformer_1_t5D03480C8430BB4B110B1A825293797FEA351E99  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.UInt16>
struct Transformer_1_t8A89FB68F46FF4353E966CC00B908CA34497EA95  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.UInt32>
struct Transformer_1_t0AFADFC854814929C26DD9D901BE57FF25AD0FAE  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.UInt64>
struct Transformer_1_t1DABC0789361F050A97DCB9B0BF426488849447B  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Int64,System.UIntPtr>
struct Transformer_1_tB15772C7E9B7C5700966A8D43542601D4E3C1E66  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.Object,System.Object>
struct Transformer_1_t338D76BCAA91120B467D3111015F22FB4F0FD2FA  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Boolean>
struct Transformer_1_t79570F2F3007DB1835D814B8075FDC98BC3553A7  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Byte>
struct Transformer_1_tF8540D89C13FFD7703F79D80D228D878E23A3ADE  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Char>
struct Transformer_1_tA6C8CCCFAE41F969307DFD6B15049A2AC4E87B2E  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transformer_1_t42D4002780D07F2123783F0D69A304CD6984F13D  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.DateTime>
struct Transformer_1_t7B71FCE554A579C8F8EE31C925E7CC3A260F65B0  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.DateTimeOffset>
struct Transformer_1_t0C4CCE96CE8A1C5FA519A098E2CBD37BEC2CA324  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Decimal>
struct Transformer_1_tC8E702F6B3A43AAD921E235014B8BEE380D6C8E6  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Diagnostics.Tracing.EmptyStruct>
struct Transformer_1_tBEAC8A938CBDB8AAB69661EFA8EA0FB141525D53  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Double>
struct Transformer_1_tF0766B96906F251FDCA58F9C63D53C429A053601  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Guid>
struct Transformer_1_tBBF50A3F30EEFDE66991F29F64E2D0A0455DE463  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Int16>
struct Transformer_1_tA87CAE242D2B98DEB22E378E1E67ABA48B2C74D4  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Int32>
struct Transformer_1_tD3A676069C04AAC638676241B25E06E84FEDDF60  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Int64>
struct Transformer_1_tE0C44E54BCD5DF5FF3AC9F52C13F1428FBBD4084  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.IntPtr>
struct Transformer_1_tAE4605051B411219A47F37FD57F817C772C5D831  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Object>
struct Transformer_1_t2100917DAFFEBF22F25BC5382C00308AE7962D49  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.SByte>
struct Transformer_1_t745DB47A09FCB8577D6C816C1169CFECBB32F2C5  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.Single>
struct Transformer_1_tBF9E21F5E62125133BAE8AB29F7A5FF8368A8867  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.TimeSpan>
struct Transformer_1_tF26DF9ED555578458A4BEBCC536B42CFE02ACC80  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.UInt16>
struct Transformer_1_t8D669EF524B3DA7294AF5ECC32689F786670F3BC  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.UInt32>
struct Transformer_1_t2C09253351F9C203CF31F34A19DE66BEA03581F3  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.UInt64>
struct Transformer_1_tCF1372796CC314E10F8635C4972C44383BAC7023  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.SByte,System.UIntPtr>
struct Transformer_1_tBE6DD3E5AECE0264800ECFE10CF373FC541893E1  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Boolean>
struct Transformer_1_t199C978828CCDD3DC4B333BD031B5DA73DE2C968  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Byte>
struct Transformer_1_t6F5F45E771B014CBE6BC711CD4C78E85A692E83F  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Char>
struct Transformer_1_tBBFF9537117C5BC9379D753F5293135DB33DF769  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transformer_1_t43360C920C6CB99E177E7D0C21F4631EB7353195  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.DateTime>
struct Transformer_1_tFF97AD2C8962456276364E309A52E6DE33100D56  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.DateTimeOffset>
struct Transformer_1_t43FCC452C755864725F9DF93DFBE108575461B01  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Decimal>
struct Transformer_1_t0FD280BFFA34F4D2822CCA89C0E579D1D039C6EC  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Diagnostics.Tracing.EmptyStruct>
struct Transformer_1_t4E404370A1452595E3C5DB7882E5D8953D10E1A5  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Double>
struct Transformer_1_t96993E76204149647596BB8B93F89AF01BBC2DA1  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Guid>
struct Transformer_1_tC04472BECF0E4CEEAC0DD81250C1C45100A49760  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Int16>
struct Transformer_1_t752D0C62D1A2E9A30D3F6E06FB35683298BACEE8  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Int32>
struct Transformer_1_tA6B55D2D785634BAC127EF306F25AD47252837A5  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Int64>
struct Transformer_1_t634A2D481C50B029D59732E0A8E9D02DF66A0551  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.IntPtr>
struct Transformer_1_t873B2E4C2418F756278367655E1C64D654382460  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Object>
struct Transformer_1_t892625DF88EAC62E91E8CCC189CB451B8DC38F37  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.SByte>
struct Transformer_1_t1996E09F6BED0E887AFBD3B5A3AE1C93DE6BF87A  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.Single>
struct Transformer_1_t4E1FF663FF50350704657A112291CD7D7596CEF1  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.TimeSpan>
struct Transformer_1_t91133D744423C020A19D0092C4FC03B6D3A4DFEE  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.UInt16>
struct Transformer_1_tE9522CA0DE0A4BE7D2EC9C999D7BDD2F4344FE62  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.UInt32>
struct Transformer_1_t1438E2C5AF736F2BAA3201667918AA58BE8FA46C  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.UInt64>
struct Transformer_1_t9D893B0CF47F60B5A1B332F156AE7885A7FA04AD  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt16,System.UIntPtr>
struct Transformer_1_tEF0B2B94C98E007D79F1E9A305F95F950D695A78  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Boolean>
struct Transformer_1_tF0E9BE6348CE010BB238AC31417785A08A6FB691  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Byte>
struct Transformer_1_tB3723D31B530FDEAA4A1F13AA0708DA982630899  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Char>
struct Transformer_1_t5476CAC37A40442328D49FE071C30E88285071D4  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transformer_1_t0FB7630995436BE02A2527779DBC4F2527867EEA  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.DateTime>
struct Transformer_1_t5D7AABD550DAD91D1A5365F5D8EF54C4DA2D3C52  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.DateTimeOffset>
struct Transformer_1_t928A4BC9752332E7976045EDA7D13F6580E95E62  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Decimal>
struct Transformer_1_tDCFCB89419FEE534E3F73EC59CE6765F40E3CDDC  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Diagnostics.Tracing.EmptyStruct>
struct Transformer_1_tC99356A59E2E936732EB9B87073CB69F8D9A0E56  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Double>
struct Transformer_1_tBA40A0C65141CC06E9FE7E2B859F14B7B186F5D6  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Guid>
struct Transformer_1_tEB01E6A2E0B3756D68B5715EC212184D5FF1583E  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Int16>
struct Transformer_1_t2F0D48F97FB9DB755CBD7D8BD1063744902DD7D4  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Int32>
struct Transformer_1_tEE904E877A0E7069658C31FC99833B17AC05794C  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Int64>
struct Transformer_1_tB77123930E8D4DBBDFEFB1F00D7ABD5F5862C41D  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.IntPtr>
struct Transformer_1_tD21324C229A06C2679EF7ADBF30B4721FCE846A9  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Object>
struct Transformer_1_t9591C03D292D1491DC84BED40FA4074B4BA228BA  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.SByte>
struct Transformer_1_tB8774B9E44E29CAB971A668FD6481EE169AB7512  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.Single>
struct Transformer_1_tF0690E4E722BA56F3D7C83E9AEB806F0B61B361D  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.TimeSpan>
struct Transformer_1_t8B10503B337E6FE4E07A3B64D22B131931C9A9F4  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.UInt16>
struct Transformer_1_t047D5C4AD3C79057AB7D69ECC9D23F74520D09D6  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.UInt32>
struct Transformer_1_t31C88D9234A257CF232D08C38BBC668EA052939A  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.UInt64>
struct Transformer_1_t1C223741D12F9A057F5F088DE61B4E5D53913211  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt32,System.UIntPtr>
struct Transformer_1_tEB25E9328D7461EC15D82291238C49E2485032FD  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Boolean>
struct Transformer_1_tE1D6D1C9A05B546D9C9CE23F63F38C39519B5CF5  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Byte>
struct Transformer_1_tA04593391E3C9151CF09B88E7F0B95B6EED79BFF  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Char>
struct Transformer_1_t6A70E5F51E34115D67058F5FBD3AD020056FE5F9  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transformer_1_t68FC4FB75CD82563AB347351CEFAE5414DA6F5EA  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.DateTime>
struct Transformer_1_t3914ABAA4D6712C66DD4949F2BA84F3EC15B4FA3  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.DateTimeOffset>
struct Transformer_1_tF6A13C624CBEF022B6BF46EA8998763A1BCF8A60  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Decimal>
struct Transformer_1_t1CCCD2A03706FE289179D42973958253711E1220  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Diagnostics.Tracing.EmptyStruct>
struct Transformer_1_t26EAA5376E027613D84066BFDACD29135BC0417F  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Double>
struct Transformer_1_tF7A377BD38E31E579BBB868F25B50E99BE887082  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Guid>
struct Transformer_1_t7A3CC6284B43CD7AE97F37A34B608ACB60C9BBF4  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Int16>
struct Transformer_1_t07F206606D946D6F7126E2639D2BA30EE77B275C  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Int32>
struct Transformer_1_tF8885F335E1C8610DD2BC9AC39EF6912377CA731  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Int64>
struct Transformer_1_tFC99DD5D67093DCEBB44F3A5BFDC47FDBBD7CF71  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.IntPtr>
struct Transformer_1_t8E4B28C9AAE813C657018A0863EED6247E00BC14  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Object>
struct Transformer_1_t402296E3476F5F09B16B675F17D3CDA6FCB34A9B  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.SByte>
struct Transformer_1_t2F20C0EB7F9357AF924B13ACE76627B27A3EE8C6  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.Single>
struct Transformer_1_t589CB07AE354480F71F892CCEF416B4B90FD20E1  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.TimeSpan>
struct Transformer_1_t92CD444E28392786C719A80E3BD6F19859C0F66F  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.UInt16>
struct Transformer_1_tEBBF3209CF2963A466018B425608A6F9A5DB0E30  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.UInt32>
struct Transformer_1_t8958FB9131F13E8258DE33FA6B69C3FF6197E880  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.UInt64>
struct Transformer_1_t3B28CAE7458C713C7593265008775661D4E2EBAE  : public MulticastDelegate_t
{
public:

public:
};


// System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<System.UInt64,System.UIntPtr>
struct Transformer_1_t77F1FDC69827B944451ACE5D2F9AF2FF2BBE0913  : public MulticastDelegate_t
{
public:

public:
};


// System.InvalidOperationException
struct InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.Xml.Schema.XmlListConverter
struct XmlListConverter_tC0C9B12C2CB4282697C8A738419B3595FB013DC2  : public XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8
{
public:
	// System.Xml.Schema.XmlValueConverter System.Xml.Schema.XmlListConverter::atomicConverter
	XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E * ___atomicConverter_32;

public:
	inline static int32_t get_offset_of_atomicConverter_32() { return static_cast<int32_t>(offsetof(XmlListConverter_tC0C9B12C2CB4282697C8A738419B3595FB013DC2, ___atomicConverter_32)); }
	inline XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E * get_atomicConverter_32() const { return ___atomicConverter_32; }
	inline XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E ** get_address_of_atomicConverter_32() { return &___atomicConverter_32; }
	inline void set_atomicConverter_32(XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E * value)
	{
		___atomicConverter_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___atomicConverter_32), (void*)value);
	}
};


// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_t0D76F16B2B9E513C3DFCE66CDCAC1768F5B6488C  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderFunc`1<System.Object>
struct RenderFunc_1_t6963E4F494F441886F42D47BFB357196C662DDB7  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph/RenderPass
struct RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035  : public RuntimeObject
{
public:
	// System.String UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph/RenderPass::name
	String_t* ___name_0;
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph/RenderPass::index
	int32_t ___index_1;
	// UnityEngine.Rendering.ProfilingSampler UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph/RenderPass::customSampler
	ProfilingSampler_t00574F1AB7FB336BBFCE3DE575A86B5DD2C9F99D * ___customSampler_2;
	// System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResource> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph/RenderPass::resourceReadList
	List_1_t3DB3A57DAA1C2A9B312E3B24A7C03D028DB1097A * ___resourceReadList_3;
	// System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphMutableResource> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph/RenderPass::resourceWriteList
	List_1_tEBA98BE7FBE0C275FAEB779DDACD275830D43BB8 * ___resourceWriteList_4;
	// System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResource> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph/RenderPass::usedRendererListList
	List_1_t3DB3A57DAA1C2A9B312E3B24A7C03D028DB1097A * ___usedRendererListList_5;
	// System.Boolean UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph/RenderPass::enableAsyncCompute
	bool ___enableAsyncCompute_6;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphMutableResource[] UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph/RenderPass::m_ColorBuffers
	RenderGraphMutableResourceU5BU5D_tC5DD0DF1CAE7DE95421B26158C9F5E24169156CA* ___m_ColorBuffers_7;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphMutableResource UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph/RenderPass::m_DepthBuffer
	RenderGraphMutableResource_t3658233BFA84721C15D19B38770A075F46950524  ___m_DepthBuffer_8;
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph/RenderPass::m_MaxColorBufferIndex
	int32_t ___m_MaxColorBufferIndex_9;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_customSampler_2() { return static_cast<int32_t>(offsetof(RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035, ___customSampler_2)); }
	inline ProfilingSampler_t00574F1AB7FB336BBFCE3DE575A86B5DD2C9F99D * get_customSampler_2() const { return ___customSampler_2; }
	inline ProfilingSampler_t00574F1AB7FB336BBFCE3DE575A86B5DD2C9F99D ** get_address_of_customSampler_2() { return &___customSampler_2; }
	inline void set_customSampler_2(ProfilingSampler_t00574F1AB7FB336BBFCE3DE575A86B5DD2C9F99D * value)
	{
		___customSampler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customSampler_2), (void*)value);
	}

	inline static int32_t get_offset_of_resourceReadList_3() { return static_cast<int32_t>(offsetof(RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035, ___resourceReadList_3)); }
	inline List_1_t3DB3A57DAA1C2A9B312E3B24A7C03D028DB1097A * get_resourceReadList_3() const { return ___resourceReadList_3; }
	inline List_1_t3DB3A57DAA1C2A9B312E3B24A7C03D028DB1097A ** get_address_of_resourceReadList_3() { return &___resourceReadList_3; }
	inline void set_resourceReadList_3(List_1_t3DB3A57DAA1C2A9B312E3B24A7C03D028DB1097A * value)
	{
		___resourceReadList_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resourceReadList_3), (void*)value);
	}

	inline static int32_t get_offset_of_resourceWriteList_4() { return static_cast<int32_t>(offsetof(RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035, ___resourceWriteList_4)); }
	inline List_1_tEBA98BE7FBE0C275FAEB779DDACD275830D43BB8 * get_resourceWriteList_4() const { return ___resourceWriteList_4; }
	inline List_1_tEBA98BE7FBE0C275FAEB779DDACD275830D43BB8 ** get_address_of_resourceWriteList_4() { return &___resourceWriteList_4; }
	inline void set_resourceWriteList_4(List_1_tEBA98BE7FBE0C275FAEB779DDACD275830D43BB8 * value)
	{
		___resourceWriteList_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resourceWriteList_4), (void*)value);
	}

	inline static int32_t get_offset_of_usedRendererListList_5() { return static_cast<int32_t>(offsetof(RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035, ___usedRendererListList_5)); }
	inline List_1_t3DB3A57DAA1C2A9B312E3B24A7C03D028DB1097A * get_usedRendererListList_5() const { return ___usedRendererListList_5; }
	inline List_1_t3DB3A57DAA1C2A9B312E3B24A7C03D028DB1097A ** get_address_of_usedRendererListList_5() { return &___usedRendererListList_5; }
	inline void set_usedRendererListList_5(List_1_t3DB3A57DAA1C2A9B312E3B24A7C03D028DB1097A * value)
	{
		___usedRendererListList_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___usedRendererListList_5), (void*)value);
	}

	inline static int32_t get_offset_of_enableAsyncCompute_6() { return static_cast<int32_t>(offsetof(RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035, ___enableAsyncCompute_6)); }
	inline bool get_enableAsyncCompute_6() const { return ___enableAsyncCompute_6; }
	inline bool* get_address_of_enableAsyncCompute_6() { return &___enableAsyncCompute_6; }
	inline void set_enableAsyncCompute_6(bool value)
	{
		___enableAsyncCompute_6 = value;
	}

	inline static int32_t get_offset_of_m_ColorBuffers_7() { return static_cast<int32_t>(offsetof(RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035, ___m_ColorBuffers_7)); }
	inline RenderGraphMutableResourceU5BU5D_tC5DD0DF1CAE7DE95421B26158C9F5E24169156CA* get_m_ColorBuffers_7() const { return ___m_ColorBuffers_7; }
	inline RenderGraphMutableResourceU5BU5D_tC5DD0DF1CAE7DE95421B26158C9F5E24169156CA** get_address_of_m_ColorBuffers_7() { return &___m_ColorBuffers_7; }
	inline void set_m_ColorBuffers_7(RenderGraphMutableResourceU5BU5D_tC5DD0DF1CAE7DE95421B26158C9F5E24169156CA* value)
	{
		___m_ColorBuffers_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorBuffers_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_DepthBuffer_8() { return static_cast<int32_t>(offsetof(RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035, ___m_DepthBuffer_8)); }
	inline RenderGraphMutableResource_t3658233BFA84721C15D19B38770A075F46950524  get_m_DepthBuffer_8() const { return ___m_DepthBuffer_8; }
	inline RenderGraphMutableResource_t3658233BFA84721C15D19B38770A075F46950524 * get_address_of_m_DepthBuffer_8() { return &___m_DepthBuffer_8; }
	inline void set_m_DepthBuffer_8(RenderGraphMutableResource_t3658233BFA84721C15D19B38770A075F46950524  value)
	{
		___m_DepthBuffer_8 = value;
	}

	inline static int32_t get_offset_of_m_MaxColorBufferIndex_9() { return static_cast<int32_t>(offsetof(RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035, ___m_MaxColorBufferIndex_9)); }
	inline int32_t get_m_MaxColorBufferIndex_9() const { return ___m_MaxColorBufferIndex_9; }
	inline int32_t* get_address_of_m_MaxColorBufferIndex_9() { return &___m_MaxColorBufferIndex_9; }
	inline void set_m_MaxColorBufferIndex_9(int32_t value)
	{
		___m_MaxColorBufferIndex_9 = value;
	}
};


// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph/RenderPass`1<System.Object>
struct RenderPass_1_t8E26DF96C7D796453D4050436A62B01576E92BA8  : public RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035
{
public:
	// PassData UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph/RenderPass`1::data
	RuntimeObject * ___data_10;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderFunc`1<PassData> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph/RenderPass`1::renderFunc
	RenderFunc_1_t6963E4F494F441886F42D47BFB357196C662DDB7 * ___renderFunc_11;

public:
	inline static int32_t get_offset_of_data_10() { return static_cast<int32_t>(offsetof(RenderPass_1_t8E26DF96C7D796453D4050436A62B01576E92BA8, ___data_10)); }
	inline RuntimeObject * get_data_10() const { return ___data_10; }
	inline RuntimeObject ** get_address_of_data_10() { return &___data_10; }
	inline void set_data_10(RuntimeObject * value)
	{
		___data_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_10), (void*)value);
	}

	inline static int32_t get_offset_of_renderFunc_11() { return static_cast<int32_t>(offsetof(RenderPass_1_t8E26DF96C7D796453D4050436A62B01576E92BA8, ___renderFunc_11)); }
	inline RenderFunc_1_t6963E4F494F441886F42D47BFB357196C662DDB7 * get_renderFunc_11() const { return ___renderFunc_11; }
	inline RenderFunc_1_t6963E4F494F441886F42D47BFB357196C662DDB7 ** get_address_of_renderFunc_11() { return &___renderFunc_11; }
	inline void set_renderFunc_11(RenderFunc_1_t6963E4F494F441886F42D47BFB357196C662DDB7 * value)
	{
		___renderFunc_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___renderFunc_11), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.UInt16[]
struct UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint16_t m_Items[1];

public:
	inline uint16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint16_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt32[]
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint32_t m_Items[1];

public:
	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt64[]
struct UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint64_t m_Items[1];

public:
	inline uint64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint64_t value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Rendering.RenderTargetIdentifier[]
struct RenderTargetIdentifierU5BU5D_t57069CA3F97B36638E39044168D1BEB956436DD4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RenderTargetIdentifier_tB7480EE944FC70E0AB7D499DB17D119EB65B0F5B  m_Items[1];

public:
	inline RenderTargetIdentifier_tB7480EE944FC70E0AB7D499DB17D119EB65B0F5B  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RenderTargetIdentifier_tB7480EE944FC70E0AB7D499DB17D119EB65B0F5B * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RenderTargetIdentifier_tB7480EE944FC70E0AB7D499DB17D119EB65B0F5B  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RenderTargetIdentifier_tB7480EE944FC70E0AB7D499DB17D119EB65B0F5B  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RenderTargetIdentifier_tB7480EE944FC70E0AB7D499DB17D119EB65B0F5B * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RenderTargetIdentifier_tB7480EE944FC70E0AB7D499DB17D119EB65B0F5B  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Color32[]
struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  m_Items[1];

public:
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  m_Items[1];

public:
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  m_Items[1];

public:
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  m_Items[1];

public:
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Object[]
struct ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * m_Items[1];

public:
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Rendering.HighDefinition.MigrationStep`2<System.Int32Enum,System.Object>[]
struct MigrationStep_2U5BU5D_tBC3DCCCDDC4D6F13B471C0C1E2B649A21D8714A7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MigrationStep_2_t57890783D2260455C7830D5E94EF6D325F12A3DA  m_Items[1];

public:
	inline MigrationStep_2_t57890783D2260455C7830D5E94EF6D325F12A3DA  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MigrationStep_2_t57890783D2260455C7830D5E94EF6D325F12A3DA * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MigrationStep_2_t57890783D2260455C7830D5E94EF6D325F12A3DA  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_MigrationAction_0), (void*)NULL);
	}
	inline MigrationStep_2_t57890783D2260455C7830D5E94EF6D325F12A3DA  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MigrationStep_2_t57890783D2260455C7830D5E94EF6D325F12A3DA * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MigrationStep_2_t57890783D2260455C7830D5E94EF6D325F12A3DA  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_MigrationAction_0), (void*)NULL);
	}
};


// System.Void System.ValueTuple`2<System.Object,System.Int32>::.ctor(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_mA278EF0809223335676C04C0859BB03C552D22A2_gshared (ValueTuple_2_t74D6CA9A08A6FCFF280CF9A4A5244FC0898C9E5F * __this, RuntimeObject * ___item10, int32_t ___item21, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.ValueTuple`2<System.Object,System.Int32>,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD31FCDDCF2A1FCB97F9603969F8E5648567C3168_gshared (Dictionary_2_t3D0F521AB54A429DFB2CDCEC6D9F496FEC6C84D8 * __this, ValueTuple_2_t74D6CA9A08A6FCFF280CF9A4A5244FC0898C9E5F  ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_m54114F5D347F44F2C0FD45AF09974A5B55EC5373_gshared (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.ValueTuple`2<System.Object,System.Int32>,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m123F743BCFDF56C9AC14F02AEF61EAB10A7151F3_gshared (Dictionary_2_t3D0F521AB54A429DFB2CDCEC6D9F496FEC6C84D8 * __this, ValueTuple_2_t74D6CA9A08A6FCFF280CF9A4A5244FC0898C9E5F  ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_m8803B4178385D39338A1EDDC39FE6D8152F01A1D_gshared_inline (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Object>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Stack_1_Pop_mD632EB4DA13E5CAEC62EECFAD1C88818F1223E20_gshared (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * __this, const RuntimeMethod* method);
// System.Void System.ValueTuple`2<System.Object,System.ValueTuple`2<System.Object,System.Int32>>::.ctor(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_m6FAA11B851F151283FF480600F0B198695C8946E_gshared (ValueTuple_2_t50705B2B5CEDC69B491D2335FB71C62CCFAD0331 * __this, RuntimeObject * ___item10, ValueTuple_2_t74D6CA9A08A6FCFF280CF9A4A5244FC0898C9E5F  ___item21, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.ValueTuple`2<System.Object,System.ValueTuple`2<System.Object,System.Int32>>>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m859CC861721274138078EA5E8F4981E50B78CBDE_gshared (List_1_tC865E14BB695393247CEFB631C575094B8701079 * __this, ValueTuple_2_t50705B2B5CEDC69B491D2335FB71C62CCFAD0331  ___item0, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.Rendering.AsyncGPUReadbackRequest::GetData<System.Single>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t2F93EF84A543D826D53EFEAFE52F5C42392D0D67  AsyncGPUReadbackRequest_GetData_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m3103D253E0298B049D6FE4206A9E18E716E5E2B1_gshared (AsyncGPUReadbackRequest_t0287C47661E145BF44C2FC0DBB1ECD73FD958B5C * __this, int32_t ___layer0, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.Rendering.AsyncGPUReadbackRequest::GetData<System.UInt32>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t46D89A67B73570077E7280CB4C709CB4E66EEA5E  AsyncGPUReadbackRequest_GetData_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m740336FEC66F6FA954ABCDDB886C64B4D5D7B867_gshared (AsyncGPUReadbackRequest_t0287C47661E145BF44C2FC0DBB1ECD73FD958B5C * __this, int32_t ___layer0, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.Rendering.CullingResults::GetNativeArray<UnityEngine.Rendering.VisibleLight>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t89C3343A50E798CEF85D6412699D078CA79D1638  CullingResults_GetNativeArray_TisVisibleLight_t0FB9CD9852C150E7F4C6EA0005A132D453E1A9F4_mACDB0C7A85042F3D0146F419B66D8DE08B767163_gshared (CullingResults_tFCB058F194E02A190E4719CFE5BC2A5A1BB1C21B * __this, void* ___dataPointer0, int32_t ___length1, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.Rendering.CullingResults::GetNativeArray<UnityEngine.Rendering.VisibleReflectionProbe>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tB89B8CD2BB5126750F1D718104BBEFFC38DE8FEC  CullingResults_GetNativeArray_TisVisibleReflectionProbe_t4446FDAB2C6F98E73568DAA5D7FA1B835FCB4215_mCA58080AE6F11DD97BF899D6A8CEA9A76521D540_gshared (CullingResults_tFCB058F194E02A190E4719CFE5BC2A5A1BB1C21B * __this, void* ___dataPointer0, int32_t ___length1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.HighDefinition.MigrationDescription`2<System.Int32Enum,System.Object>::.ctor(UnityEngine.Rendering.HighDefinition.MigrationStep`2<TVersion,TTarget>[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MigrationDescription_2__ctor_mB7E534783086A0FD4012087681F6F60479E93670_gshared (MigrationDescription_2_t2D210D8AE120A486A4BA618BCCF0662F35EC9242 * __this, MigrationStep_2U5BU5D_tBC3DCCCDDC4D6F13B471C0C1E2B649A21D8714A7* ___steps0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.HighDefinition.MigrationStep`2<System.Int32Enum,System.Object>::.ctor(TVersion,System.Action`1<TTarget>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MigrationStep_2__ctor_mF7395EA349BEFDFCF964C038F3206902DE2171D7_gshared (MigrationStep_2_t57890783D2260455C7830D5E94EF6D325F12A3DA * __this, int32_t ___version0, Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ___action1, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::.ctor(T,UnityEngine.UIElements.StyleKeyword)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleEnum_1__ctor_m9808A49AC4955C97AB41242A2EB776741D566E82_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, int32_t ___v0, int32_t ___keyword1, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::set_specificity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleEnum_1_set_specificity_mF1C94EF10622C93C04EA507D94C7294E5AFAC06B_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, int32_t ___value0, const RuntimeMethod* method);

// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void System.ValueTuple`2<System.Type,System.Int32>::.ctor(!0,!1)
inline void ValueTuple_2__ctor_m165066C301451137EF0B0A96B654B80E3D6328B3 (ValueTuple_2_t01D88DEEA69CE75D3FE98CBE6DE18C434CCB6E88 * __this, Type_t * ___item10, int32_t ___item21, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_2_t01D88DEEA69CE75D3FE98CBE6DE18C434CCB6E88 *, Type_t *, int32_t, const RuntimeMethod*))ValueTuple_2__ctor_mA278EF0809223335676C04C0859BB03C552D22A2_gshared)(__this, ___item10, ___item21, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.ValueTuple`2<System.Type,System.Int32>,System.Collections.Generic.Stack`1<System.Object>>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m5A246BE1478D5AAF776C27C639FA7A2CFC99FCF7 (Dictionary_2_tDB0173F7367ADD8C863509F3869BC63705A9B63E * __this, ValueTuple_2_t01D88DEEA69CE75D3FE98CBE6DE18C434CCB6E88  ___key0, Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tDB0173F7367ADD8C863509F3869BC63705A9B63E *, ValueTuple_2_t01D88DEEA69CE75D3FE98CBE6DE18C434CCB6E88 , Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 **, const RuntimeMethod*))Dictionary_2_TryGetValue_mD31FCDDCF2A1FCB97F9603969F8E5648567C3168_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
inline void Stack_1__ctor_m54114F5D347F44F2C0FD45AF09974A5B55EC5373 (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *, const RuntimeMethod*))Stack_1__ctor_m54114F5D347F44F2C0FD45AF09974A5B55EC5373_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.ValueTuple`2<System.Type,System.Int32>,System.Collections.Generic.Stack`1<System.Object>>::Add(!0,!1)
inline void Dictionary_2_Add_mB55E82A159A823B2EFD0951D81D9FFB2D1537AEC (Dictionary_2_tDB0173F7367ADD8C863509F3869BC63705A9B63E * __this, ValueTuple_2_t01D88DEEA69CE75D3FE98CBE6DE18C434CCB6E88  ___key0, Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDB0173F7367ADD8C863509F3869BC63705A9B63E *, ValueTuple_2_t01D88DEEA69CE75D3FE98CBE6DE18C434CCB6E88 , Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *, const RuntimeMethod*))Dictionary_2_Add_m123F743BCFDF56C9AC14F02AEF61EAB10A7151F3_gshared)(__this, ___key0, ___value1, method);
}
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
inline int32_t Stack_1_get_Count_m8803B4178385D39338A1EDDC39FE6D8152F01A1D_inline (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *, const RuntimeMethod*))Stack_1_get_Count_m8803B4178385D39338A1EDDC39FE6D8152F01A1D_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.Stack`1<System.Object>::Pop()
inline RuntimeObject * Stack_1_Pop_mD632EB4DA13E5CAEC62EECFAD1C88818F1223E20 (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *, const RuntimeMethod*))Stack_1_Pop_mD632EB4DA13E5CAEC62EECFAD1C88818F1223E20_gshared)(__this, method);
}
// System.Void System.ValueTuple`2<System.Object,System.ValueTuple`2<System.Type,System.Int32>>::.ctor(!0,!1)
inline void ValueTuple_2__ctor_m2608A054E27ECC5D65915B37E53803ADAA9A47BC (ValueTuple_2_tC1E4B764A22137F872FF33F434B43BE4B46D21F5 * __this, RuntimeObject * ___item10, ValueTuple_2_t01D88DEEA69CE75D3FE98CBE6DE18C434CCB6E88  ___item21, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_2_tC1E4B764A22137F872FF33F434B43BE4B46D21F5 *, RuntimeObject *, ValueTuple_2_t01D88DEEA69CE75D3FE98CBE6DE18C434CCB6E88 , const RuntimeMethod*))ValueTuple_2__ctor_m6FAA11B851F151283FF480600F0B198695C8946E_gshared)(__this, ___item10, ___item21, method);
}
// System.Void System.Collections.Generic.List`1<System.ValueTuple`2<System.Object,System.ValueTuple`2<System.Type,System.Int32>>>::Add(!0)
inline void List_1_Add_mAAACAA53634A9E7D20D94B3333B23E6F6F5B2031 (List_1_tC6996D2CBDA52BAA8F08554F7E920E603DB33417 * __this, ValueTuple_2_tC1E4B764A22137F872FF33F434B43BE4B46D21F5  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC6996D2CBDA52BAA8F08554F7E920E603DB33417 *, ValueTuple_2_tC1E4B764A22137F872FF33F434B43BE4B46D21F5 , const RuntimeMethod*))List_1_Add_m859CC861721274138078EA5E8F4981E50B78CBDE_gshared)(__this, ___item0, method);
}
// System.Array UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray * GameObject_GetComponentsInternal_mAB759217A3AD0831ABD9387163126D391459E1B8 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, Type_t * ___type0, bool ___useSearchTypeAsArrayReturnType1, bool ___recursive2, bool ___includeInactive3, bool ___reverse4, RuntimeObject * ___resultList5, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mesh::DefaultDimensionForChannel(UnityEngine.Rendering.VertexAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh_DefaultDimensionForChannel_mF943AF434BB9F54DBB3B3DE65F7B816E617A89C9 (int32_t ___channel0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Mesh::get_canAccess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mesh_get_canAccess_m1E0020EA7961227FBC0D90D851A49BCF7EB1E194 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Mesh::HasVertexAttribute(UnityEngine.Rendering.VertexAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mesh_HasVertexAttribute_m87C57B859ECB5224EEB77ED9BD3B6FF30F5A9B1C (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___attr0, const RuntimeMethod* method);
// System.Array UnityEngine.Mesh::GetAllocArrayFromChannelImpl(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray * Mesh_GetAllocArrayFromChannelImpl_mFDE324953466F6DBAC14CD4B48105B62181CC399 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::PrintErrorCantAccessChannel(UnityEngine.Rendering.VertexAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_PrintErrorCantAccessChannel_m2E8A25959739B006557A94F7E460E8BE0B3ABB19 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___ch0, const RuntimeMethod* method);
// System.Array UnityEngine.NoAllocHelpers::ExtractArrayFromList(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray * NoAllocHelpers_ExtractArrayFromList_mB4B8B76B4F160975C949FB3E15C1D497DBAE8EDC (RuntimeObject * ___list0, const RuntimeMethod* method);
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9* Object_FindObjectsOfType_m3FC26FB3B36525BFBFCCCD1AEEE8A86712A12203 (Type_t * ___type0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Rendering.AsyncGPUReadbackRequest::get_done()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncGPUReadbackRequest_get_done_mC8E8C89FB97F37B04F72B914C0363618A557EA89 (AsyncGPUReadbackRequest_t0287C47661E145BF44C2FC0DBB1ECD73FD958B5C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Rendering.AsyncGPUReadbackRequest::get_hasError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncGPUReadbackRequest_get_hasError_m0BFEA26DDBE594511DA5CD3FE90706E40377CE10 (AsyncGPUReadbackRequest_t0287C47661E145BF44C2FC0DBB1ECD73FD958B5C * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706 (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Rendering.AsyncGPUReadbackRequest::get_layerCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AsyncGPUReadbackRequest_get_layerCount_m68F01913C4890956394E29B3309C2E9D559453C2 (AsyncGPUReadbackRequest_t0287C47661E145BF44C2FC0DBB1ECD73FD958B5C * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.Rendering.AsyncGPUReadbackRequest::GetDataRaw(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AsyncGPUReadbackRequest_GetDataRaw_m400CF07C52652A7156FD8FE7F3BFAD26379F9658 (AsyncGPUReadbackRequest_t0287C47661E145BF44C2FC0DBB1ECD73FD958B5C * __this, int32_t ___layer0, const RuntimeMethod* method);
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027 (intptr_t ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Rendering.AsyncGPUReadbackRequest::get_layerDataSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AsyncGPUReadbackRequest_get_layerDataSize_m31C733B287D137534FCCDA037427EF079DA19CC3 (AsyncGPUReadbackRequest_t0287C47661E145BF44C2FC0DBB1ECD73FD958B5C * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.Rendering.AsyncGPUReadbackRequest::GetData<System.Single>(System.Int32)
inline NativeArray_1_t2F93EF84A543D826D53EFEAFE52F5C42392D0D67  AsyncGPUReadbackRequest_GetData_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m3103D253E0298B049D6FE4206A9E18E716E5E2B1 (AsyncGPUReadbackRequest_t0287C47661E145BF44C2FC0DBB1ECD73FD958B5C * __this, int32_t ___layer0, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t2F93EF84A543D826D53EFEAFE52F5C42392D0D67  (*) (AsyncGPUReadbackRequest_t0287C47661E145BF44C2FC0DBB1ECD73FD958B5C *, int32_t, const RuntimeMethod*))AsyncGPUReadbackRequest_GetData_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m3103D253E0298B049D6FE4206A9E18E716E5E2B1_gshared)(__this, ___layer0, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.Rendering.AsyncGPUReadbackRequest::GetData<System.UInt32>(System.Int32)
inline NativeArray_1_t46D89A67B73570077E7280CB4C709CB4E66EEA5E  AsyncGPUReadbackRequest_GetData_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m740336FEC66F6FA954ABCDDB886C64B4D5D7B867 (AsyncGPUReadbackRequest_t0287C47661E145BF44C2FC0DBB1ECD73FD958B5C * __this, int32_t ___layer0, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t46D89A67B73570077E7280CB4C709CB4E66EEA5E  (*) (AsyncGPUReadbackRequest_t0287C47661E145BF44C2FC0DBB1ECD73FD958B5C *, int32_t, const RuntimeMethod*))AsyncGPUReadbackRequest_GetData_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m740336FEC66F6FA954ABCDDB886C64B4D5D7B867_gshared)(__this, ___layer0, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.Rendering.CullingResults::GetNativeArray<UnityEngine.Rendering.VisibleLight>(System.Void*,System.Int32)
inline NativeArray_1_t89C3343A50E798CEF85D6412699D078CA79D1638  CullingResults_GetNativeArray_TisVisibleLight_t0FB9CD9852C150E7F4C6EA0005A132D453E1A9F4_mACDB0C7A85042F3D0146F419B66D8DE08B767163 (CullingResults_tFCB058F194E02A190E4719CFE5BC2A5A1BB1C21B * __this, void* ___dataPointer0, int32_t ___length1, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t89C3343A50E798CEF85D6412699D078CA79D1638  (*) (CullingResults_tFCB058F194E02A190E4719CFE5BC2A5A1BB1C21B *, void*, int32_t, const RuntimeMethod*))CullingResults_GetNativeArray_TisVisibleLight_t0FB9CD9852C150E7F4C6EA0005A132D453E1A9F4_mACDB0C7A85042F3D0146F419B66D8DE08B767163_gshared)(__this, ___dataPointer0, ___length1, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.Rendering.CullingResults::GetNativeArray<UnityEngine.Rendering.VisibleReflectionProbe>(System.Void*,System.Int32)
inline NativeArray_1_tB89B8CD2BB5126750F1D718104BBEFFC38DE8FEC  CullingResults_GetNativeArray_TisVisibleReflectionProbe_t4446FDAB2C6F98E73568DAA5D7FA1B835FCB4215_mCA58080AE6F11DD97BF899D6A8CEA9A76521D540 (CullingResults_tFCB058F194E02A190E4719CFE5BC2A5A1BB1C21B * __this, void* ___dataPointer0, int32_t ___length1, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tB89B8CD2BB5126750F1D718104BBEFFC38DE8FEC  (*) (CullingResults_tFCB058F194E02A190E4719CFE5BC2A5A1BB1C21B *, void*, int32_t, const RuntimeMethod*))CullingResults_GetNativeArray_TisVisibleReflectionProbe_t4446FDAB2C6F98E73568DAA5D7FA1B835FCB4215_mCA58080AE6F11DD97BF899D6A8CEA9A76521D540_gshared)(__this, ___dataPointer0, ___length1, method);
}
// System.Void UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph/RenderPass::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPass_Clear_m216A695EE93282211427AFAE4876C742D5CBE627 (RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph/RenderPass>::get_Count()
inline int32_t List_1_get_Count_m0B6FAC22324A918CFA9E37637257E82823029437_inline (List_1_t7BE901F61F1A406FC143D643C9923B05DE767845 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t7BE901F61F1A406FC143D643C9923B05DE767845 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph/RenderPass>::Add(!0)
inline void List_1_Add_m011F5FA3CC5FBB00875D2C3615DED27D6CE38D60 (List_1_t7BE901F61F1A406FC143D643C9923B05DE767845 * __this, RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7BE901F61F1A406FC143D643C9923B05DE767845 *, RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035 *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphBuilder::.ctor(UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph/RenderPass,UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderGraphBuilder__ctor_m3EB345CC9E313C7C6EADFF534CA50FAF440D75CC (RenderGraphBuilder_t9026010D496B7D7D33BBFD0350D5014FAC7EF312 * __this, RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035 * ___renderPass0, RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 * ___resources1, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.ExecuteEvents::GetEventChain(UnityEngine.GameObject,System.Collections.Generic.IList`1<UnityEngine.Transform>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecuteEvents_GetEventChain_mD90FFC4A70E16AFA81AC6C9CFF174630F77C608C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___root0, RuntimeObject* ___eventChain1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * List_1_get_Item_m88FE4B6F43A2CD95BB9ECF8D801F206618FFFFB8_inline (List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * (*) (List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count()
inline int32_t List_1_get_Count_mFB4F65ABD2DD0845C2448493238223FB4079A90C_inline (List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.HighDefinition.MigrationDescription`2<System.Int32Enum,System.Object>::.ctor(UnityEngine.Rendering.HighDefinition.MigrationStep`2<TVersion,TTarget>[])
inline void MigrationDescription_2__ctor_mB7E534783086A0FD4012087681F6F60479E93670 (MigrationDescription_2_t2D210D8AE120A486A4BA618BCCF0662F35EC9242 * __this, MigrationStep_2U5BU5D_tBC3DCCCDDC4D6F13B471C0C1E2B649A21D8714A7* ___steps0, const RuntimeMethod* method)
{
	((  void (*) (MigrationDescription_2_t2D210D8AE120A486A4BA618BCCF0662F35EC9242 *, MigrationStep_2U5BU5D_tBC3DCCCDDC4D6F13B471C0C1E2B649A21D8714A7*, const RuntimeMethod*))MigrationDescription_2__ctor_mB7E534783086A0FD4012087681F6F60479E93670_gshared)(__this, ___steps0, method);
}
// System.Void UnityEngine.Rendering.HighDefinition.MigrationStep`2<System.Int32Enum,System.Object>::.ctor(TVersion,System.Action`1<TTarget>)
inline void MigrationStep_2__ctor_mF7395EA349BEFDFCF964C038F3206902DE2171D7 (MigrationStep_2_t57890783D2260455C7830D5E94EF6D325F12A3DA * __this, int32_t ___version0, Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ___action1, const RuntimeMethod* method)
{
	((  void (*) (MigrationStep_2_t57890783D2260455C7830D5E94EF6D325F12A3DA *, int32_t, Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 *, const RuntimeMethod*))MigrationStep_2__ctor_mF7395EA349BEFDFCF964C038F3206902DE2171D7_gshared)(__this, ___version0, ___action1, method);
}
// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleInt::get_keyword()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StyleInt_get_keyword_mB6F2DD4026E11125E24BC9EABD08C98900B02104 (StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::.ctor(T,UnityEngine.UIElements.StyleKeyword)
inline void StyleEnum_1__ctor_m9808A49AC4955C97AB41242A2EB776741D566E82 (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, int32_t ___v0, int32_t ___keyword1, const RuntimeMethod* method)
{
	((  void (*) (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *, int32_t, int32_t, const RuntimeMethod*))StyleEnum_1__ctor_m9808A49AC4955C97AB41242A2EB776741D566E82_gshared)(__this, ___v0, ___keyword1, method);
}
// System.Int32 UnityEngine.UIElements.StyleInt::get_specificity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StyleInt_get_specificity_m1D4B1CE4C250A58A554AB4A3F9EB135842107CDA (StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::set_specificity(System.Int32)
inline void StyleEnum_1_set_specificity_mF1C94EF10622C93C04EA507D94C7294E5AFAC06B (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *, int32_t, const RuntimeMethod*))StyleEnum_1_set_specificity_mF1C94EF10622C93C04EA507D94C7294E5AFAC06B_gshared)(__this, ___value0, method);
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.UInt16>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* XmlListConverter_ToArray_TisUInt16_tAE45CEF73BF720100519F6867F32145D075F928E_m205C1CF96FEABB0EAFBC8AE70952C3A9FB50BFE0_gshared (XmlListConverter_tC0C9B12C2CB4282697C8A738419B3595FB013DC2 * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlListConverter_ToArray_TisUInt16_tAE45CEF73BF720100519F6867F32145D075F928E_m205C1CF96FEABB0EAFBC8AE70952C3A9FB50BFE0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_tC24850134CAAF1886083DE793A4D1AE57578DE69 * V_1 = NULL;
	UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tA3BAB2482E28132A7CA9E0E21393027353C28B54_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* L_4 = (UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E*)(UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = (UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E*)L_4;
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		CHECK_PAUSE_POINT;
		UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E * L_7 = (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)__this->get_atomicConverter_32();
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck((RuntimeObject*)L_8);
		RuntimeObject * L_10 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (int32_t)L_9);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_11 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_11, /*hidden argument*/NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		NullCheck((XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_7);
		RuntimeObject * L_14 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_7, (RuntimeObject *)L_10, (Type_t *)L_12, (RuntimeObject*)L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (uint16_t)((*(uint16_t*)((uint16_t*)UnBox(L_14, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tA3BAB2482E28132A7CA9E0E21393027353C28B54_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* L_19 = V_2;
		return (UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E*)L_19;
	}

IL_0052:
	{
		RuntimeObject * L_20 = ___list0;
		List_1_tC24850134CAAF1886083DE793A4D1AE57578DE69 * L_21 = (List_1_tC24850134CAAF1886083DE793A4D1AE57578DE69 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_tC24850134CAAF1886083DE793A4D1AE57578DE69 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_tC24850134CAAF1886083DE793A4D1AE57578DE69 *)L_21;
		NullCheck((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_22;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		STORE_TRY_ID(methodExecutionContext, 0);
		{
			goto IL_0093;
		}

IL_0067:
		{
			CHECK_PAUSE_POINT;
			RuntimeObject* L_23 = V_4;
			NullCheck((RuntimeObject*)L_23);
			RuntimeObject * L_24 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
			V_5 = (RuntimeObject *)L_24;
			List_1_tC24850134CAAF1886083DE793A4D1AE57578DE69 * L_25 = V_1;
			XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E * L_26 = (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)__this->get_atomicConverter_32();
			RuntimeObject * L_27 = V_5;
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_28 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_29 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_28, /*hidden argument*/NULL);
			RuntimeObject* L_30 = ___nsResolver1;
			NullCheck((XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_26);
			RuntimeObject * L_31 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_26, (RuntimeObject *)L_27, (Type_t *)L_29, (RuntimeObject*)L_30);
			NullCheck((List_1_tC24850134CAAF1886083DE793A4D1AE57578DE69 *)L_25);
			((  void (*) (List_1_tC24850134CAAF1886083DE793A4D1AE57578DE69 *, uint16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_tC24850134CAAF1886083DE793A4D1AE57578DE69 *)L_25, (uint16_t)((*(uint16_t*)((uint16_t*)UnBox(L_31, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_32 = V_4;
			NullCheck((RuntimeObject*)L_32);
			bool L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
			if (L_33)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		STORE_TRY_ID(methodExecutionContext, -1);
		{
			RuntimeObject* L_34 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_34, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var));
			RuntimeObject* L_35 = V_6;
			if (!L_35)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_36 = V_6;
			NullCheck((RuntimeObject*)L_36);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, (RuntimeObject*)L_36);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
	}

IL_00b3:
	{
		List_1_tC24850134CAAF1886083DE793A4D1AE57578DE69 * L_37 = V_1;
		NullCheck((List_1_tC24850134CAAF1886083DE793A4D1AE57578DE69 *)L_37);
		UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* L_38 = ((  UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* (*) (List_1_tC24850134CAAF1886083DE793A4D1AE57578DE69 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_tC24850134CAAF1886083DE793A4D1AE57578DE69 *)L_37, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return (UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E*)L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.UInt32>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* XmlListConverter_ToArray_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m88B7788C4BB3756EC0A966401F1D13D662A1615A_gshared (XmlListConverter_tC0C9B12C2CB4282697C8A738419B3595FB013DC2 * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlListConverter_ToArray_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m88B7788C4BB3756EC0A966401F1D13D662A1615A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 * V_1 = NULL;
	UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tA3BAB2482E28132A7CA9E0E21393027353C28B54_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* L_4 = (UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB*)(UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = (UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB*)L_4;
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		CHECK_PAUSE_POINT;
		UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E * L_7 = (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)__this->get_atomicConverter_32();
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck((RuntimeObject*)L_8);
		RuntimeObject * L_10 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (int32_t)L_9);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_11 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_11, /*hidden argument*/NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		NullCheck((XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_7);
		RuntimeObject * L_14 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_7, (RuntimeObject *)L_10, (Type_t *)L_12, (RuntimeObject*)L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (uint32_t)((*(uint32_t*)((uint32_t*)UnBox(L_14, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tA3BAB2482E28132A7CA9E0E21393027353C28B54_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* L_19 = V_2;
		return (UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB*)L_19;
	}

IL_0052:
	{
		RuntimeObject * L_20 = ___list0;
		List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 * L_21 = (List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)L_21;
		NullCheck((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_22;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		STORE_TRY_ID(methodExecutionContext, 0);
		{
			goto IL_0093;
		}

IL_0067:
		{
			CHECK_PAUSE_POINT;
			RuntimeObject* L_23 = V_4;
			NullCheck((RuntimeObject*)L_23);
			RuntimeObject * L_24 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
			V_5 = (RuntimeObject *)L_24;
			List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 * L_25 = V_1;
			XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E * L_26 = (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)__this->get_atomicConverter_32();
			RuntimeObject * L_27 = V_5;
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_28 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_29 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_28, /*hidden argument*/NULL);
			RuntimeObject* L_30 = ___nsResolver1;
			NullCheck((XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_26);
			RuntimeObject * L_31 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_26, (RuntimeObject *)L_27, (Type_t *)L_29, (RuntimeObject*)L_30);
			NullCheck((List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)L_25);
			((  void (*) (List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)L_25, (uint32_t)((*(uint32_t*)((uint32_t*)UnBox(L_31, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_32 = V_4;
			NullCheck((RuntimeObject*)L_32);
			bool L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
			if (L_33)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		STORE_TRY_ID(methodExecutionContext, -1);
		{
			RuntimeObject* L_34 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_34, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var));
			RuntimeObject* L_35 = V_6;
			if (!L_35)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_36 = V_6;
			NullCheck((RuntimeObject*)L_36);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, (RuntimeObject*)L_36);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
	}

IL_00b3:
	{
		List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 * L_37 = V_1;
		NullCheck((List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)L_37);
		UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* L_38 = ((  UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* (*) (List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)L_37, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return (UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB*)L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.UInt64>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* XmlListConverter_ToArray_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_m904001409F4BCF396E5E8D0EB777561D72170836_gshared (XmlListConverter_tC0C9B12C2CB4282697C8A738419B3595FB013DC2 * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlListConverter_ToArray_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_m904001409F4BCF396E5E8D0EB777561D72170836_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 * V_1 = NULL;
	UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tA3BAB2482E28132A7CA9E0E21393027353C28B54_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* L_4 = (UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4*)(UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = (UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4*)L_4;
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		CHECK_PAUSE_POINT;
		UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E * L_7 = (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)__this->get_atomicConverter_32();
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck((RuntimeObject*)L_8);
		RuntimeObject * L_10 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (int32_t)L_9);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_11 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_11, /*hidden argument*/NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		NullCheck((XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_7);
		RuntimeObject * L_14 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_7, (RuntimeObject *)L_10, (Type_t *)L_12, (RuntimeObject*)L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (uint64_t)((*(uint64_t*)((uint64_t*)UnBox(L_14, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tA3BAB2482E28132A7CA9E0E21393027353C28B54_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* L_19 = V_2;
		return (UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4*)L_19;
	}

IL_0052:
	{
		RuntimeObject * L_20 = ___list0;
		List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 * L_21 = (List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 *)L_21;
		NullCheck((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_22;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		STORE_TRY_ID(methodExecutionContext, 0);
		{
			goto IL_0093;
		}

IL_0067:
		{
			CHECK_PAUSE_POINT;
			RuntimeObject* L_23 = V_4;
			NullCheck((RuntimeObject*)L_23);
			RuntimeObject * L_24 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
			V_5 = (RuntimeObject *)L_24;
			List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 * L_25 = V_1;
			XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E * L_26 = (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)__this->get_atomicConverter_32();
			RuntimeObject * L_27 = V_5;
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_28 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_29 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_28, /*hidden argument*/NULL);
			RuntimeObject* L_30 = ___nsResolver1;
			NullCheck((XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_26);
			RuntimeObject * L_31 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_26, (RuntimeObject *)L_27, (Type_t *)L_29, (RuntimeObject*)L_30);
			NullCheck((List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 *)L_25);
			((  void (*) (List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 *, uint64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 *)L_25, (uint64_t)((*(uint64_t*)((uint64_t*)UnBox(L_31, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_32 = V_4;
			NullCheck((RuntimeObject*)L_32);
			bool L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
			if (L_33)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		STORE_TRY_ID(methodExecutionContext, -1);
		{
			RuntimeObject* L_34 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_34, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var));
			RuntimeObject* L_35 = V_6;
			if (!L_35)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_36 = V_6;
			NullCheck((RuntimeObject*)L_36);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, (RuntimeObject*)L_36);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
	}

IL_00b3:
	{
		List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 * L_37 = V_1;
		NullCheck((List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 *)L_37);
		UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* L_38 = ((  UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* (*) (List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 *)L_37, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return (UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4*)L_38;
	}
}
// T[] UnityEngine.Component::GetComponents<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Component_GetComponents_TisRuntimeObject_mDC1D023FE07F73E1E8433D1E896D5F1250180C10_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this, /*hidden argument*/NULL);
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_1;
		goto IL_000f;
	}

IL_000f:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = V_0;
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2;
	}
}
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Component_GetComponentsInChildren_TisRuntimeObject_m6D4C38C330FCFD3C323B34031A7E877A5E2D453A_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_0;
		goto IL_000b;
	}

IL_000b:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = V_0;
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_1;
	}
}
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Component_GetComponentsInChildren_TisRuntimeObject_m6BE45C9DF68BC115084E66CE010DA328C6ECEB1B_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this, /*hidden argument*/NULL);
		bool L_1 = ___includeInactive0;
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2;
		goto IL_0010;
	}

IL_0010:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = V_0;
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_3;
	}
}
// T[] UnityEngine.Component::GetComponentsInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Component_GetComponentsInParent_TisRuntimeObject_m4C178287A7D9F411324F0D20D7214B40AC502A26_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_0;
		goto IL_000b;
	}

IL_000b:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = V_0;
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_1;
	}
}
// T[] UnityEngine.Component::GetComponentsInParent<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Component_GetComponentsInParent_TisRuntimeObject_m56104E1DFC5F47D3DB51348DD3935EEE53DCB433_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this, /*hidden argument*/NULL);
		bool L_1 = ___includeInactive0;
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2;
		goto IL_0010;
	}

IL_0010:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = V_0;
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_3;
	}
}
// T[] UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphObjectPool::GetTempArray<System.Object>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* RenderGraphObjectPool_GetTempArray_TisRuntimeObject_mEB0BB67D1AEED8B777A1642427D7B01270A86462_gshared (RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 * __this, int32_t ___size0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RenderGraphObjectPool_GetTempArray_TisRuntimeObject_mEB0BB67D1AEED8B777A1642427D7B01270A86462_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * V_0 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_1 = NULL;
	bool V_2 = false;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_3 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___size0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1054));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1055));
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B5_0 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1056));
		// if (!m_ArrayPool.TryGetValue((typeof(T), size), out var stack))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1057));
		Dictionary_2_tDB0173F7367ADD8C863509F3869BC63705A9B63E * L_0 = (Dictionary_2_tDB0173F7367ADD8C863509F3869BC63705A9B63E *)__this->get_m_ArrayPool_0();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1067));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_1, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1067));
		int32_t L_3 = ___size0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1068));
		ValueTuple_2_t01D88DEEA69CE75D3FE98CBE6DE18C434CCB6E88  L_4;
		memset((&L_4), 0, sizeof(L_4));
		ValueTuple_2__ctor_m165066C301451137EF0B0A96B654B80E3D6328B3((&L_4), (Type_t *)L_2, (int32_t)L_3, /*hidden argument*/ValueTuple_2__ctor_m165066C301451137EF0B0A96B654B80E3D6328B3_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1068));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1069));
		NullCheck((Dictionary_2_tDB0173F7367ADD8C863509F3869BC63705A9B63E *)L_0);
		bool L_5 = Dictionary_2_TryGetValue_m5A246BE1478D5AAF776C27C639FA7A2CFC99FCF7((Dictionary_2_tDB0173F7367ADD8C863509F3869BC63705A9B63E *)L_0, (ValueTuple_2_t01D88DEEA69CE75D3FE98CBE6DE18C434CCB6E88 )L_4, (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 **)(Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m5A246BE1478D5AAF776C27C639FA7A2CFC99FCF7_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1069));
		V_2 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1058));
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_004a;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1059));
		// stack = new Stack<object>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1060));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1070));
		Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * L_7 = (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)il2cpp_codegen_object_new(Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163_il2cpp_TypeInfo_var);
		Stack_1__ctor_m54114F5D347F44F2C0FD45AF09974A5B55EC5373(L_7, /*hidden argument*/Stack_1__ctor_m54114F5D347F44F2C0FD45AF09974A5B55EC5373_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1070));
		V_0 = (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_7;
		// m_ArrayPool.Add((typeof(T), size), stack);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1061));
		Dictionary_2_tDB0173F7367ADD8C863509F3869BC63705A9B63E * L_8 = (Dictionary_2_tDB0173F7367ADD8C863509F3869BC63705A9B63E *)__this->get_m_ArrayPool_0();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_9 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1071));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_9, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1071));
		int32_t L_11 = ___size0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1072));
		ValueTuple_2_t01D88DEEA69CE75D3FE98CBE6DE18C434CCB6E88  L_12;
		memset((&L_12), 0, sizeof(L_12));
		ValueTuple_2__ctor_m165066C301451137EF0B0A96B654B80E3D6328B3((&L_12), (Type_t *)L_10, (int32_t)L_11, /*hidden argument*/ValueTuple_2__ctor_m165066C301451137EF0B0A96B654B80E3D6328B3_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1072));
		Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * L_13 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1073));
		NullCheck((Dictionary_2_tDB0173F7367ADD8C863509F3869BC63705A9B63E *)L_8);
		Dictionary_2_Add_mB55E82A159A823B2EFD0951D81D9FFB2D1537AEC((Dictionary_2_tDB0173F7367ADD8C863509F3869BC63705A9B63E *)L_8, (ValueTuple_2_t01D88DEEA69CE75D3FE98CBE6DE18C434CCB6E88 )L_12, (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_13, /*hidden argument*/Dictionary_2_Add_mB55E82A159A823B2EFD0951D81D9FFB2D1537AEC_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1073));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1062));
	}

IL_004a:
	{
		// var result = stack.Count > 0 ? (T[])stack.Pop() : new T[size];
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1063));
		Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * L_14 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1074));
		NullCheck((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_14);
		int32_t L_15 = Stack_1_get_Count_m8803B4178385D39338A1EDDC39FE6D8152F01A1D_inline((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_14, /*hidden argument*/Stack_1_get_Count_m8803B4178385D39338A1EDDC39FE6D8152F01A1D_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1074));
		if ((((int32_t)L_15) > ((int32_t)0)))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_16 = ___size0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)L_16);
		G_B5_0 = L_17;
		goto IL_0066;
	}

IL_005b:
	{
		Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * L_18 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1075));
		NullCheck((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_18);
		RuntimeObject * L_19 = Stack_1_Pop_mD632EB4DA13E5CAEC62EECFAD1C88818F1223E20((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_18, /*hidden argument*/Stack_1_Pop_mD632EB4DA13E5CAEC62EECFAD1C88818F1223E20_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1075));
		G_B5_0 = ((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)Castclass((RuntimeObject*)L_19, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
	}

IL_0066:
	{
		V_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)G_B5_0;
		// m_AllocatedArrays.Add((result, (typeof(T), size)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1064));
		List_1_tC6996D2CBDA52BAA8F08554F7E920E603DB33417 * L_20 = (List_1_tC6996D2CBDA52BAA8F08554F7E920E603DB33417 *)__this->get_m_AllocatedArrays_1();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_21 = V_1;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_22 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1076));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_23 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_22, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1076));
		int32_t L_24 = ___size0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1077));
		ValueTuple_2_t01D88DEEA69CE75D3FE98CBE6DE18C434CCB6E88  L_25;
		memset((&L_25), 0, sizeof(L_25));
		ValueTuple_2__ctor_m165066C301451137EF0B0A96B654B80E3D6328B3((&L_25), (Type_t *)L_23, (int32_t)L_24, /*hidden argument*/ValueTuple_2__ctor_m165066C301451137EF0B0A96B654B80E3D6328B3_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1077));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1078));
		ValueTuple_2_tC1E4B764A22137F872FF33F434B43BE4B46D21F5  L_26;
		memset((&L_26), 0, sizeof(L_26));
		ValueTuple_2__ctor_m2608A054E27ECC5D65915B37E53803ADAA9A47BC((&L_26), (RuntimeObject *)(RuntimeObject *)L_21, (ValueTuple_2_t01D88DEEA69CE75D3FE98CBE6DE18C434CCB6E88 )L_25, /*hidden argument*/ValueTuple_2__ctor_m2608A054E27ECC5D65915B37E53803ADAA9A47BC_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1078));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1079));
		NullCheck((List_1_tC6996D2CBDA52BAA8F08554F7E920E603DB33417 *)L_20);
		List_1_Add_mAAACAA53634A9E7D20D94B3333B23E6F6F5B2031((List_1_tC6996D2CBDA52BAA8F08554F7E920E603DB33417 *)L_20, (ValueTuple_2_tC1E4B764A22137F872FF33F434B43BE4B46D21F5 )L_26, /*hidden argument*/List_1_Add_mAAACAA53634A9E7D20D94B3333B23E6F6F5B2031_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1079));
		// return result;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1065));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_27 = V_1;
		V_3 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_27;
		goto IL_008d;
	}

IL_008d:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1066));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_28 = V_3;
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_28;
	}
}
// T[] UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphObjectPool::GetTempArray<UnityEngine.Rendering.RenderTargetIdentifier>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTargetIdentifierU5BU5D_t57069CA3F97B36638E39044168D1BEB956436DD4* RenderGraphObjectPool_GetTempArray_TisRenderTargetIdentifier_tB7480EE944FC70E0AB7D499DB17D119EB65B0F5B_m14E2E0F61B64B9019DB81D202FC1D17A12607910_gshared (RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 * __this, int32_t ___size0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RenderGraphObjectPool_GetTempArray_TisRenderTargetIdentifier_tB7480EE944FC70E0AB7D499DB17D119EB65B0F5B_m14E2E0F61B64B9019DB81D202FC1D17A12607910_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * V_0 = NULL;
	RenderTargetIdentifierU5BU5D_t57069CA3F97B36638E39044168D1BEB956436DD4* V_1 = NULL;
	bool V_2 = false;
	RenderTargetIdentifierU5BU5D_t57069CA3F97B36638E39044168D1BEB956436DD4* V_3 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___size0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1054));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1055));
	RenderTargetIdentifierU5BU5D_t57069CA3F97B36638E39044168D1BEB956436DD4* G_B5_0 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1056));
		// if (!m_ArrayPool.TryGetValue((typeof(T), size), out var stack))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1057));
		Dictionary_2_tDB0173F7367ADD8C863509F3869BC63705A9B63E * L_0 = (Dictionary_2_tDB0173F7367ADD8C863509F3869BC63705A9B63E *)__this->get_m_ArrayPool_0();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1067));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_1, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1067));
		int32_t L_3 = ___size0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1068));
		ValueTuple_2_t01D88DEEA69CE75D3FE98CBE6DE18C434CCB6E88  L_4;
		memset((&L_4), 0, sizeof(L_4));
		ValueTuple_2__ctor_m165066C301451137EF0B0A96B654B80E3D6328B3((&L_4), (Type_t *)L_2, (int32_t)L_3, /*hidden argument*/ValueTuple_2__ctor_m165066C301451137EF0B0A96B654B80E3D6328B3_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1068));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1069));
		NullCheck((Dictionary_2_tDB0173F7367ADD8C863509F3869BC63705A9B63E *)L_0);
		bool L_5 = Dictionary_2_TryGetValue_m5A246BE1478D5AAF776C27C639FA7A2CFC99FCF7((Dictionary_2_tDB0173F7367ADD8C863509F3869BC63705A9B63E *)L_0, (ValueTuple_2_t01D88DEEA69CE75D3FE98CBE6DE18C434CCB6E88 )L_4, (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 **)(Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m5A246BE1478D5AAF776C27C639FA7A2CFC99FCF7_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1069));
		V_2 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1058));
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_004a;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1059));
		// stack = new Stack<object>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1060));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1070));
		Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * L_7 = (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)il2cpp_codegen_object_new(Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163_il2cpp_TypeInfo_var);
		Stack_1__ctor_m54114F5D347F44F2C0FD45AF09974A5B55EC5373(L_7, /*hidden argument*/Stack_1__ctor_m54114F5D347F44F2C0FD45AF09974A5B55EC5373_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1070));
		V_0 = (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_7;
		// m_ArrayPool.Add((typeof(T), size), stack);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1061));
		Dictionary_2_tDB0173F7367ADD8C863509F3869BC63705A9B63E * L_8 = (Dictionary_2_tDB0173F7367ADD8C863509F3869BC63705A9B63E *)__this->get_m_ArrayPool_0();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_9 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1071));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_9, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1071));
		int32_t L_11 = ___size0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1072));
		ValueTuple_2_t01D88DEEA69CE75D3FE98CBE6DE18C434CCB6E88  L_12;
		memset((&L_12), 0, sizeof(L_12));
		ValueTuple_2__ctor_m165066C301451137EF0B0A96B654B80E3D6328B3((&L_12), (Type_t *)L_10, (int32_t)L_11, /*hidden argument*/ValueTuple_2__ctor_m165066C301451137EF0B0A96B654B80E3D6328B3_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1072));
		Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * L_13 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1073));
		NullCheck((Dictionary_2_tDB0173F7367ADD8C863509F3869BC63705A9B63E *)L_8);
		Dictionary_2_Add_mB55E82A159A823B2EFD0951D81D9FFB2D1537AEC((Dictionary_2_tDB0173F7367ADD8C863509F3869BC63705A9B63E *)L_8, (ValueTuple_2_t01D88DEEA69CE75D3FE98CBE6DE18C434CCB6E88 )L_12, (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_13, /*hidden argument*/Dictionary_2_Add_mB55E82A159A823B2EFD0951D81D9FFB2D1537AEC_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1073));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1062));
	}

IL_004a:
	{
		// var result = stack.Count > 0 ? (T[])stack.Pop() : new T[size];
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1063));
		Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * L_14 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1074));
		NullCheck((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_14);
		int32_t L_15 = Stack_1_get_Count_m8803B4178385D39338A1EDDC39FE6D8152F01A1D_inline((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_14, /*hidden argument*/Stack_1_get_Count_m8803B4178385D39338A1EDDC39FE6D8152F01A1D_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1074));
		if ((((int32_t)L_15) > ((int32_t)0)))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_16 = ___size0;
		RenderTargetIdentifierU5BU5D_t57069CA3F97B36638E39044168D1BEB956436DD4* L_17 = (RenderTargetIdentifierU5BU5D_t57069CA3F97B36638E39044168D1BEB956436DD4*)(RenderTargetIdentifierU5BU5D_t57069CA3F97B36638E39044168D1BEB956436DD4*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)L_16);
		G_B5_0 = L_17;
		goto IL_0066;
	}

IL_005b:
	{
		Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * L_18 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1075));
		NullCheck((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_18);
		RuntimeObject * L_19 = Stack_1_Pop_mD632EB4DA13E5CAEC62EECFAD1C88818F1223E20((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_18, /*hidden argument*/Stack_1_Pop_mD632EB4DA13E5CAEC62EECFAD1C88818F1223E20_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1075));
		G_B5_0 = ((RenderTargetIdentifierU5BU5D_t57069CA3F97B36638E39044168D1BEB956436DD4*)Castclass((RuntimeObject*)L_19, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
	}

IL_0066:
	{
		V_1 = (RenderTargetIdentifierU5BU5D_t57069CA3F97B36638E39044168D1BEB956436DD4*)G_B5_0;
		// m_AllocatedArrays.Add((result, (typeof(T), size)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1064));
		List_1_tC6996D2CBDA52BAA8F08554F7E920E603DB33417 * L_20 = (List_1_tC6996D2CBDA52BAA8F08554F7E920E603DB33417 *)__this->get_m_AllocatedArrays_1();
		RenderTargetIdentifierU5BU5D_t57069CA3F97B36638E39044168D1BEB956436DD4* L_21 = V_1;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_22 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1076));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_23 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_22, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1076));
		int32_t L_24 = ___size0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1077));
		ValueTuple_2_t01D88DEEA69CE75D3FE98CBE6DE18C434CCB6E88  L_25;
		memset((&L_25), 0, sizeof(L_25));
		ValueTuple_2__ctor_m165066C301451137EF0B0A96B654B80E3D6328B3((&L_25), (Type_t *)L_23, (int32_t)L_24, /*hidden argument*/ValueTuple_2__ctor_m165066C301451137EF0B0A96B654B80E3D6328B3_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1077));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1078));
		ValueTuple_2_tC1E4B764A22137F872FF33F434B43BE4B46D21F5  L_26;
		memset((&L_26), 0, sizeof(L_26));
		ValueTuple_2__ctor_m2608A054E27ECC5D65915B37E53803ADAA9A47BC((&L_26), (RuntimeObject *)(RuntimeObject *)L_21, (ValueTuple_2_t01D88DEEA69CE75D3FE98CBE6DE18C434CCB6E88 )L_25, /*hidden argument*/ValueTuple_2__ctor_m2608A054E27ECC5D65915B37E53803ADAA9A47BC_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1078));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1079));
		NullCheck((List_1_tC6996D2CBDA52BAA8F08554F7E920E603DB33417 *)L_20);
		List_1_Add_mAAACAA53634A9E7D20D94B3333B23E6F6F5B2031((List_1_tC6996D2CBDA52BAA8F08554F7E920E603DB33417 *)L_20, (ValueTuple_2_tC1E4B764A22137F872FF33F434B43BE4B46D21F5 )L_26, /*hidden argument*/List_1_Add_mAAACAA53634A9E7D20D94B3333B23E6F6F5B2031_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1079));
		// return result;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1065));
		RenderTargetIdentifierU5BU5D_t57069CA3F97B36638E39044168D1BEB956436DD4* L_27 = V_1;
		V_3 = (RenderTargetIdentifierU5BU5D_t57069CA3F97B36638E39044168D1BEB956436DD4*)L_27;
		goto IL_008d;
	}

IL_008d:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 1066));
		RenderTargetIdentifierU5BU5D_t57069CA3F97B36638E39044168D1BEB956436DD4* L_28 = V_3;
		return (RenderTargetIdentifierU5BU5D_t57069CA3F97B36638E39044168D1BEB956436DD4*)L_28;
	}
}
// T[] UnityEngine.GameObject::GetComponents<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* GameObject_GetComponents_TisRuntimeObject_m5EA1B9B8C5B01E9DE33C6FB0D9AD52F85E0D3911_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObject_GetComponents_TisRuntimeObject_m5EA1B9B8C5B01E9DE33C6FB0D9AD52F85E0D3911_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_0, /*hidden argument*/NULL);
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)__this);
		RuntimeArray * L_2 = GameObject_GetComponentsInternal_mAB759217A3AD0831ABD9387163126D391459E1B8((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)__this, (Type_t *)L_1, (bool)1, (bool)0, (bool)1, (bool)0, (RuntimeObject *)NULL, /*hidden argument*/NULL);
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)Castclass((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_001e;
	}

IL_001e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = V_0;
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_3;
	}
}
// T[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* GameObject_GetComponentsInChildren_TisRuntimeObject_mF6284FE6B77A126095C692AA4FAC2A7748448AFA_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)__this);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_0;
		goto IL_000b;
	}

IL_000b:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = V_0;
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_1;
	}
}
// T[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* GameObject_GetComponentsInChildren_TisRuntimeObject_mFF238916BEA468E58A72E7C1EE6F5D9729CA4D43_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObject_GetComponentsInChildren_TisRuntimeObject_mFF238916BEA468E58A72E7C1EE6F5D9729CA4D43_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_0, /*hidden argument*/NULL);
		bool L_2 = ___includeInactive0;
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)__this);
		RuntimeArray * L_3 = GameObject_GetComponentsInternal_mAB759217A3AD0831ABD9387163126D391459E1B8((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)__this, (Type_t *)L_1, (bool)1, (bool)1, (bool)L_2, (bool)0, (RuntimeObject *)NULL, /*hidden argument*/NULL);
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_001e;
	}

IL_001e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = V_0;
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_4;
	}
}
// T[] UnityEngine.GameObject::GetComponentsInParent<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* GameObject_GetComponentsInParent_TisRuntimeObject_m80BC53BC6926863115F0039372F2CB123D4A44BE_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObject_GetComponentsInParent_TisRuntimeObject_m80BC53BC6926863115F0039372F2CB123D4A44BE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_0, /*hidden argument*/NULL);
		bool L_2 = ___includeInactive0;
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)__this);
		RuntimeArray * L_3 = GameObject_GetComponentsInternal_mAB759217A3AD0831ABD9387163126D391459E1B8((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)__this, (Type_t *)L_1, (bool)1, (bool)1, (bool)L_2, (bool)1, (RuntimeObject *)NULL, /*hidden argument*/NULL);
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_001e;
	}

IL_001e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = V_0;
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<System.Object>(UnityEngine.Rendering.VertexAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Mesh_GetAllocArrayFromChannel_TisRuntimeObject_mA5F18E3462F04632978FDE240F85E28A870C2B2F_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2 = Mesh_DefaultDimensionForChannel_mF943AF434BB9F54DBB3B3DE65F7B816E617A89C9((int32_t)L_1, /*hidden argument*/NULL);
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_3;
		goto IL_0012;
	}

IL_0012:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = V_0;
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<System.Object>(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Mesh_GetAllocArrayFromChannel_TisRuntimeObject_m72CF8BBE548B570F27C87B6900191B9BC58FCA73_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_2 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_0 = Mesh_get_canAccess_m1E0020EA7961227FBC0D90D851A49BCF7EB1E194((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, /*hidden argument*/NULL);
		V_0 = (bool)L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_3 = Mesh_HasVertexAttribute_m87C57B859ECB5224EEB77ED9BD3B6FF30F5A9B1C((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_2, /*hidden argument*/NULL);
		V_1 = (bool)L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_5 = ___channel0;
		int32_t L_6 = ___format1;
		int32_t L_7 = ___dim2;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		RuntimeArray * L_8 = Mesh_GetAllocArrayFromChannelImpl_mFDE324953466F6DBAC14CD4B48105B62181CC399((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_5, (int32_t)L_6, (int32_t)L_7, /*hidden argument*/NULL);
		V_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)Castclass((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_003e;
	}

IL_0028:
	{
		goto IL_0035;
	}

IL_002b:
	{
		int32_t L_9 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Mesh_PrintErrorCantAccessChannel_m2E8A25959739B006557A94F7E460E8BE0B3ABB19((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_9, /*hidden argument*/NULL);
	}

IL_0035:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0);
		V_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_10;
		goto IL_003e;
	}

IL_003e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = V_2;
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_11;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Color32>(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* Mesh_GetAllocArrayFromChannel_TisColor32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23_m4B3891162A682BB637507D7D7529AFA4F0C80CE3_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* V_2 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_0 = Mesh_get_canAccess_m1E0020EA7961227FBC0D90D851A49BCF7EB1E194((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, /*hidden argument*/NULL);
		V_0 = (bool)L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_3 = Mesh_HasVertexAttribute_m87C57B859ECB5224EEB77ED9BD3B6FF30F5A9B1C((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_2, /*hidden argument*/NULL);
		V_1 = (bool)L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_5 = ___channel0;
		int32_t L_6 = ___format1;
		int32_t L_7 = ___dim2;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		RuntimeArray * L_8 = Mesh_GetAllocArrayFromChannelImpl_mFDE324953466F6DBAC14CD4B48105B62181CC399((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_5, (int32_t)L_6, (int32_t)L_7, /*hidden argument*/NULL);
		V_2 = (Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983*)((Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983*)Castclass((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_003e;
	}

IL_0028:
	{
		goto IL_0035;
	}

IL_002b:
	{
		int32_t L_9 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Mesh_PrintErrorCantAccessChannel_m2E8A25959739B006557A94F7E460E8BE0B3ABB19((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_9, /*hidden argument*/NULL);
	}

IL_0035:
	{
		Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* L_10 = (Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983*)(Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0);
		V_2 = (Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983*)L_10;
		goto IL_003e;
	}

IL_003e:
	{
		Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* L_11 = V_2;
		return (Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983*)L_11;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector2>(UnityEngine.Rendering.VertexAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* Mesh_GetAllocArrayFromChannel_TisVector2_tA85D2DD88578276CA8A8796756458277E72D073D_m5C40565F81077409CEBD6BB7B2C5ABC02A44F0A8_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, const RuntimeMethod* method)
{
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2 = Mesh_DefaultDimensionForChannel_mF943AF434BB9F54DBB3B3DE65F7B816E617A89C9((int32_t)L_1, /*hidden argument*/NULL);
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_3 = ((  Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* (*) (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)L_3;
		goto IL_0012;
	}

IL_0012:
	{
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_4 = V_0;
		return (Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector2>(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* Mesh_GetAllocArrayFromChannel_TisVector2_tA85D2DD88578276CA8A8796756458277E72D073D_m6D8AF77439E7F5AD3656075625D18D191068C09F_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* V_2 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_0 = Mesh_get_canAccess_m1E0020EA7961227FBC0D90D851A49BCF7EB1E194((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, /*hidden argument*/NULL);
		V_0 = (bool)L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_3 = Mesh_HasVertexAttribute_m87C57B859ECB5224EEB77ED9BD3B6FF30F5A9B1C((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_2, /*hidden argument*/NULL);
		V_1 = (bool)L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_5 = ___channel0;
		int32_t L_6 = ___format1;
		int32_t L_7 = ___dim2;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		RuntimeArray * L_8 = Mesh_GetAllocArrayFromChannelImpl_mFDE324953466F6DBAC14CD4B48105B62181CC399((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_5, (int32_t)L_6, (int32_t)L_7, /*hidden argument*/NULL);
		V_2 = (Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)((Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)Castclass((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_003e;
	}

IL_0028:
	{
		goto IL_0035;
	}

IL_002b:
	{
		int32_t L_9 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Mesh_PrintErrorCantAccessChannel_m2E8A25959739B006557A94F7E460E8BE0B3ABB19((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_9, /*hidden argument*/NULL);
	}

IL_0035:
	{
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_10 = (Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0);
		V_2 = (Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)L_10;
		goto IL_003e;
	}

IL_003e:
	{
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_11 = V_2;
		return (Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)L_11;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector3>(UnityEngine.Rendering.VertexAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* Mesh_GetAllocArrayFromChannel_TisVector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_m2A198BF0F2DF179DF0C126C5A0BAFA1B75765F4E_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, const RuntimeMethod* method)
{
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2 = Mesh_DefaultDimensionForChannel_mF943AF434BB9F54DBB3B3DE65F7B816E617A89C9((int32_t)L_1, /*hidden argument*/NULL);
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_3 = ((  Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* (*) (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)L_3;
		goto IL_0012;
	}

IL_0012:
	{
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_4 = V_0;
		return (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector3>(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* Mesh_GetAllocArrayFromChannel_TisVector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_m083189084CF765FF8179220A926820E814D85F56_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* V_2 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_0 = Mesh_get_canAccess_m1E0020EA7961227FBC0D90D851A49BCF7EB1E194((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, /*hidden argument*/NULL);
		V_0 = (bool)L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_3 = Mesh_HasVertexAttribute_m87C57B859ECB5224EEB77ED9BD3B6FF30F5A9B1C((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_2, /*hidden argument*/NULL);
		V_1 = (bool)L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_5 = ___channel0;
		int32_t L_6 = ___format1;
		int32_t L_7 = ___dim2;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		RuntimeArray * L_8 = Mesh_GetAllocArrayFromChannelImpl_mFDE324953466F6DBAC14CD4B48105B62181CC399((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_5, (int32_t)L_6, (int32_t)L_7, /*hidden argument*/NULL);
		V_2 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)((Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)Castclass((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_003e;
	}

IL_0028:
	{
		goto IL_0035;
	}

IL_002b:
	{
		int32_t L_9 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Mesh_PrintErrorCantAccessChannel_m2E8A25959739B006557A94F7E460E8BE0B3ABB19((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_9, /*hidden argument*/NULL);
	}

IL_0035:
	{
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_10 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0);
		V_2 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)L_10;
		goto IL_003e;
	}

IL_003e:
	{
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_11 = V_2;
		return (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)L_11;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector4>(UnityEngine.Rendering.VertexAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* Mesh_GetAllocArrayFromChannel_TisVector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_mBDD94A90E9F34CAC60C6B772992E35F66EF2D64D_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, const RuntimeMethod* method)
{
	Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2 = Mesh_DefaultDimensionForChannel_mF943AF434BB9F54DBB3B3DE65F7B816E617A89C9((int32_t)L_1, /*hidden argument*/NULL);
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_3 = ((  Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* (*) (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)L_3;
		goto IL_0012;
	}

IL_0012:
	{
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_4 = V_0;
		return (Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector4>(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* Mesh_GetAllocArrayFromChannel_TisVector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_mEADBC5B21EE5EA79F60D83CCD98B1BE0E5C03752_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* V_2 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_0 = Mesh_get_canAccess_m1E0020EA7961227FBC0D90D851A49BCF7EB1E194((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, /*hidden argument*/NULL);
		V_0 = (bool)L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_3 = Mesh_HasVertexAttribute_m87C57B859ECB5224EEB77ED9BD3B6FF30F5A9B1C((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_2, /*hidden argument*/NULL);
		V_1 = (bool)L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_5 = ___channel0;
		int32_t L_6 = ___format1;
		int32_t L_7 = ___dim2;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		RuntimeArray * L_8 = Mesh_GetAllocArrayFromChannelImpl_mFDE324953466F6DBAC14CD4B48105B62181CC399((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_5, (int32_t)L_6, (int32_t)L_7, /*hidden argument*/NULL);
		V_2 = (Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)Castclass((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_003e;
	}

IL_0028:
	{
		goto IL_0035;
	}

IL_002b:
	{
		int32_t L_9 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Mesh_PrintErrorCantAccessChannel_m2E8A25959739B006557A94F7E460E8BE0B3ABB19((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_9, /*hidden argument*/NULL);
	}

IL_0035:
	{
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_10 = (Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)(Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0);
		V_2 = (Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)L_10;
		goto IL_003e;
	}

IL_003e:
	{
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_11 = V_2;
		return (Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)L_11;
	}
}
// T[] UnityEngine.NoAllocHelpers::ExtractArrayFromListT<System.Object>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* NoAllocHelpers_ExtractArrayFromListT_TisRuntimeObject_mE481DEB3FC4919526C045BE7F46FF14FF9C19C8C_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = ___list0;
		RuntimeArray * L_1 = NoAllocHelpers_ExtractArrayFromList_mB4B8B76B4F160975C949FB3E15C1D497DBAE8EDC((RuntimeObject *)L_0, /*hidden argument*/NULL);
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)Castclass((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_000f;
	}

IL_000f:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = V_0;
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2;
	}
}
// T[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Object_FindObjectsOfType_TisRuntimeObject_mE570B614F68E0A19BD5F65061CDA9BEE6EDBD159_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Object_FindObjectsOfType_TisRuntimeObject_mE570B614F68E0A19BD5F65061CDA9BEE6EDBD159_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9* L_2 = Object_FindObjectsOfType_m3FC26FB3B36525BFBFCCCD1AEEE8A86712A12203((Type_t *)L_1, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_3;
		goto IL_0018;
	}

IL_0018:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = V_0;
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_4;
	}
}
// T[] UnityEngine.Resources::ConvertObjects<System.Object>(UnityEngine.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Resources_ConvertObjects_TisRuntimeObject_m94711E44E9B970084C63588FDEBE3D295D14A0DA_gshared (ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9* ___rawObjects0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	bool V_1 = false;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9* L_0 = ___rawObjects0;
		V_1 = (bool)((((RuntimeObject*)(ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL;
		goto IL_003d;
	}

IL_000d:
	{
		ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9* L_2 = ___rawObjects0;
		NullCheck(L_2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_3;
		V_3 = (int32_t)0;
		goto IL_002d;
	}

IL_001a:
	{
		CHECK_PAUSE_POINT;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = V_0;
		int32_t L_5 = V_3;
		ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9* L_6 = ___rawObjects0;
		int32_t L_7 = V_3;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_9, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))));
		int32_t L_10 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_002d:
	{
		int32_t L_11 = V_3;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = V_0;
		NullCheck(L_12);
		V_4 = (bool)((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))))? 1 : 0);
		bool L_13 = V_4;
		if (L_13)
		{
			goto IL_001a;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_14 = V_0;
		V_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_14;
		goto IL_003d;
	}

IL_003d:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = V_2;
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_15;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Boolean>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m4703200E8457C0A92046ED760F00CE44005EF424_gshared (bool ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t19A7258583FA1642B75695805A3C675EA09C25E5 * L_0 = ((Caster_1_t1C42C521F7CF8631FF6985A641436B54CEE018E8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		bool L_1 = ___value0;
		NullCheck((Transformer_1_t19A7258583FA1642B75695805A3C675EA09C25E5 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t19A7258583FA1642B75695805A3C675EA09C25E5 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t19A7258583FA1642B75695805A3C675EA09C25E5 *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Byte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m39405AED72DA92F26E0172BAAE2234CAD45EBB81_gshared (uint8_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tEF5D2D9847B566056189D34781B028AAC143AE94 * L_0 = ((Caster_1_tE0B5719D5D953F42A65E75E7D46BD8D7DD83D018_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint8_t L_1 = ___value0;
		NullCheck((Transformer_1_tEF5D2D9847B566056189D34781B028AAC143AE94 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_tEF5D2D9847B566056189D34781B028AAC143AE94 *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tEF5D2D9847B566056189D34781B028AAC143AE94 *)L_0, (uint8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Char>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_m98E56B5A92D022D027A74E25FDCC3D799EAB6804_gshared (Il2CppChar ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t324CE6226D2DB02125521E43B7578823697F11C9 * L_0 = ((Caster_1_tAFB70D9BBAD381451752BAEF28C81B52B2869977_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Il2CppChar L_1 = ___value0;
		NullCheck((Transformer_1_t324CE6226D2DB02125521E43B7578823697F11C9 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t324CE6226D2DB02125521E43B7578823697F11C9 *, Il2CppChar, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t324CE6226D2DB02125521E43B7578823697F11C9 *)L_0, (Il2CppChar)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisKeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE_mB928A3EAFC85B48CA5F8746998096D6892171B3C_gshared (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t986FAAB941679A366CE204DA40A2C414683DDE0A * L_0 = ((Caster_1_t09B5032BA61F81ADC8AEF23DEF9F301CE607AF7C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  L_1 = ___value0;
		NullCheck((Transformer_1_t986FAAB941679A366CE204DA40A2C414683DDE0A *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t986FAAB941679A366CE204DA40A2C414683DDE0A *, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t986FAAB941679A366CE204DA40A2C414683DDE0A *)L_0, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.DateTime>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisDateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_m67EC6A4FF20B881663660072CA639825FC347F8C_gshared (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tDA2EE3A4D871B443E8A28C71B0E0164A41D3DA02 * L_0 = ((Caster_1_tB37D2514A59669003F7F156FB271151F0D11E5FB_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_1 = ___value0;
		NullCheck((Transformer_1_tDA2EE3A4D871B443E8A28C71B0E0164A41D3DA02 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_tDA2EE3A4D871B443E8A28C71B0E0164A41D3DA02 *, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tDA2EE3A4D871B443E8A28C71B0E0164A41D3DA02 *)L_0, (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.DateTimeOffset>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisDateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_m3F6FD286745E992B6827D8C75772F7A3012CB51E_gshared (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tBE57A838EA9C265FA94567A0081AA9D93DDC74F8 * L_0 = ((Caster_1_tAD8FA143928683B1E0B6BEB460980A8543022E9B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  L_1 = ___value0;
		NullCheck((Transformer_1_tBE57A838EA9C265FA94567A0081AA9D93DDC74F8 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_tBE57A838EA9C265FA94567A0081AA9D93DDC74F8 *, DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tBE57A838EA9C265FA94567A0081AA9D93DDC74F8 *)L_0, (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Decimal>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisDecimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_m27A19C22B04469C383D0777A361CC0504DBFF8ED_gshared (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tA51CB05B3742EC3F46FA501481261EDEB730DABD * L_0 = ((Caster_1_t58883F2D0ACC52F20C8978FC28C9C9D9CCFC69C2_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_1 = ___value0;
		NullCheck((Transformer_1_tA51CB05B3742EC3F46FA501481261EDEB730DABD *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_tA51CB05B3742EC3F46FA501481261EDEB730DABD *, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tA51CB05B3742EC3F46FA501481261EDEB730DABD *)L_0, (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Diagnostics.Tracing.EmptyStruct>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisEmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082_mFE62B63ADDBFC56BD3809BA6A7C01D084B593D37_gshared (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t4BE562A96C7C1F79332E47AAC9A46C3302AB47A2 * L_0 = ((Caster_1_tAFED591EF13E015162D8B2F6F629837E43482837_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  L_1 = ___value0;
		NullCheck((Transformer_1_t4BE562A96C7C1F79332E47AAC9A46C3302AB47A2 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t4BE562A96C7C1F79332E47AAC9A46C3302AB47A2 *, EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t4BE562A96C7C1F79332E47AAC9A46C3302AB47A2 *)L_0, (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Double>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisDouble_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_m2642AADE370AEBFF905A6B0DA0A6259F236F748C_gshared (double ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t3D2772F81DACC0E761A22F7C74C18AD24C36D58D * L_0 = ((Caster_1_tF3B99FF3BBCDEA3D042AAF9F41A16C7AD4A29ED2_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		double L_1 = ___value0;
		NullCheck((Transformer_1_t3D2772F81DACC0E761A22F7C74C18AD24C36D58D *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t3D2772F81DACC0E761A22F7C74C18AD24C36D58D *, double, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t3D2772F81DACC0E761A22F7C74C18AD24C36D58D *)L_0, (double)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Guid>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisGuid_t_m5A0AFEE2BF910E98D56D0880005B1DDD51FD939C_gshared (Guid_t  ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t8542C56C05EB3E22016B2903F0EDCAC5D051355B * L_0 = ((Caster_1_tD296AE417E6EE7ADB8DAF202B8BC3203CBE89300_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Guid_t  L_1 = ___value0;
		NullCheck((Transformer_1_t8542C56C05EB3E22016B2903F0EDCAC5D051355B *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t8542C56C05EB3E22016B2903F0EDCAC5D051355B *, Guid_t , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t8542C56C05EB3E22016B2903F0EDCAC5D051355B *)L_0, (Guid_t )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Int16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisInt16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_m230E24E784CB02937D8335B389AEB021289B0A82_gshared (int16_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t436942B036692C49C596B552368FD0D9AEB19996 * L_0 = ((Caster_1_t699B4565B14DC3E4AAE69424E8CCCB8C5F5C84BF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int16_t L_1 = ___value0;
		NullCheck((Transformer_1_t436942B036692C49C596B552368FD0D9AEB19996 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t436942B036692C49C596B552368FD0D9AEB19996 *, int16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t436942B036692C49C596B552368FD0D9AEB19996 *)L_0, (int16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Int32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mB2ED9C3B935700D4BE55749949D58FE3B63B9B55_gshared (int32_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tD02BD295F6960A844F4E3D7D4CA9F0FBD4007780 * L_0 = ((Caster_1_t847B65F78580B4C35C46212B37066290881E839D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int32_t L_1 = ___value0;
		NullCheck((Transformer_1_tD02BD295F6960A844F4E3D7D4CA9F0FBD4007780 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_tD02BD295F6960A844F4E3D7D4CA9F0FBD4007780 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tD02BD295F6960A844F4E3D7D4CA9F0FBD4007780 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Int64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisInt64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_m8DCE839F3A6EA158B607CC83266509F8F1BE588F_gshared (int64_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t4FF63122CA8338DDEE466FBA386674D90B0DA997 * L_0 = ((Caster_1_tEE77AB8F884BD2579C99A38CFB1AAFEE0DCF07FA_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int64_t L_1 = ___value0;
		NullCheck((Transformer_1_t4FF63122CA8338DDEE466FBA386674D90B0DA997 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t4FF63122CA8338DDEE466FBA386674D90B0DA997 *, int64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t4FF63122CA8338DDEE466FBA386674D90B0DA997 *)L_0, (int64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.IntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisIntPtr_t_mABB7C010A235E7F7443E34811536985C56709032_gshared (intptr_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tD37A651949FE156BFC86946E76F3BEA93F428054 * L_0 = ((Caster_1_t02312CA733627756FCC99C1ED8322D3A6C51FB60_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		intptr_t L_1 = ___value0;
		NullCheck((Transformer_1_tD37A651949FE156BFC86946E76F3BEA93F428054 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_tD37A651949FE156BFC86946E76F3BEA93F428054 *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tD37A651949FE156BFC86946E76F3BEA93F428054 *)L_0, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Object>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisRuntimeObject_mB6959F0D52C5FF6F05B485070A979E423C7C058C_gshared (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tD19681DA49D4AA38D8D48CE42752CBE15718DB47 * L_0 = ((Caster_1_t79B0C615C852AD755B10B324A903BD8ECE30C1D2_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck((Transformer_1_tD19681DA49D4AA38D8D48CE42752CBE15718DB47 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_tD19681DA49D4AA38D8D48CE42752CBE15718DB47 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tD19681DA49D4AA38D8D48CE42752CBE15718DB47 *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.SByte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisSByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_m562963CD9F91D60E971EFA159959EF8A92E0C3AD_gshared (int8_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t664F7EECE18DF51BE5DD248D5B93731F8A23DCD4 * L_0 = ((Caster_1_t27F1F99B9A4CEB186ECF7805145934EA77CB1257_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int8_t L_1 = ___value0;
		NullCheck((Transformer_1_t664F7EECE18DF51BE5DD248D5B93731F8A23DCD4 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t664F7EECE18DF51BE5DD248D5B93731F8A23DCD4 *, int8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t664F7EECE18DF51BE5DD248D5B93731F8A23DCD4 *)L_0, (int8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.Single>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m0349C7393DD78A2B9EAFD91BBD31A83D1AEF0E06_gshared (float ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tB28894046684B559EDC3DE1E3481E408A5BE3A89 * L_0 = ((Caster_1_t5908B8116E70EA9E946E9F5128B622E9063630CC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		float L_1 = ___value0;
		NullCheck((Transformer_1_tB28894046684B559EDC3DE1E3481E408A5BE3A89 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_tB28894046684B559EDC3DE1E3481E408A5BE3A89 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tB28894046684B559EDC3DE1E3481E408A5BE3A89 *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.TimeSpan>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisTimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_mA16C77DBC2AE7C44F2DD9EF81CB34C302590EBBB_gshared (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t1AB12F230CAB2407D401317A65F9A5463404A073 * L_0 = ((Caster_1_t0B12755AB11A35CCF3F2B11D0A02101A3A325F45_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_1 = ___value0;
		NullCheck((Transformer_1_t1AB12F230CAB2407D401317A65F9A5463404A073 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t1AB12F230CAB2407D401317A65F9A5463404A073 *, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t1AB12F230CAB2407D401317A65F9A5463404A073 *)L_0, (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.UInt16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisUInt16_tAE45CEF73BF720100519F6867F32145D075F928E_m90785014402CE39C95C6A464FF15913865F0D20A_gshared (uint16_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t9AB703D7D55E206EFFA2B0270C980C290C374E32 * L_0 = ((Caster_1_t408C47A521D832C453740F1E3F374FCCB5E32E8A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint16_t L_1 = ___value0;
		NullCheck((Transformer_1_t9AB703D7D55E206EFFA2B0270C980C290C374E32 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t9AB703D7D55E206EFFA2B0270C980C290C374E32 *, uint16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t9AB703D7D55E206EFFA2B0270C980C290C374E32 *)L_0, (uint16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.UInt32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m9BCA2BA360B336C8F1990736BDD2CD3C0532B5F9_gshared (uint32_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t4FD7FB274F8A13E577B2C68C562542FB8BE19BF5 * L_0 = ((Caster_1_t674C9A8AF3118A1ACC250CBE1B160B5287944451_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint32_t L_1 = ___value0;
		NullCheck((Transformer_1_t4FD7FB274F8A13E577B2C68C562542FB8BE19BF5 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t4FD7FB274F8A13E577B2C68C562542FB8BE19BF5 *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t4FD7FB274F8A13E577B2C68C562542FB8BE19BF5 *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.UInt64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_m2C4DC528C0AE341726424A1F3F5856B320DD6B99_gshared (uint64_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tF779A9DA86F954469CABF99E43E5D2126D6C7558 * L_0 = ((Caster_1_t80311815F1B7E9467CB0674AEC735F4E06AF50CA_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint64_t L_1 = ___value0;
		NullCheck((Transformer_1_tF779A9DA86F954469CABF99E43E5D2126D6C7558 *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_tF779A9DA86F954469CABF99E43E5D2126D6C7558 *, uint64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tF779A9DA86F954469CABF99E43E5D2126D6C7558 *)L_0, (uint64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Byte>::Cast<System.UIntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t EnumHelper_1_Cast_TisUIntPtr_t_m1E02775612B080FE1AF0FD5661569EDC66A781E0_gshared (uintptr_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t1C9601B96FC325D98CD121FFF18A903AE06F926D * L_0 = ((Caster_1_t57C825D368DB63A6299B8DF204CDB497F51F538D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uintptr_t L_1 = ___value0;
		NullCheck((Transformer_1_t1C9601B96FC325D98CD121FFF18A903AE06F926D *)L_0);
		uint8_t L_2 = ((  uint8_t (*) (Transformer_1_t1C9601B96FC325D98CD121FFF18A903AE06F926D *, uintptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t1C9601B96FC325D98CD121FFF18A903AE06F926D *)L_0, (uintptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Boolean>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m192073E98ADAA1A5F226CDF612C5F4A1EA326F04_gshared (bool ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t8ABB0411B7298DFBBC20B58387ECF4E74BFBDEDD * L_0 = ((Caster_1_tCAA6ACA318706EA3CFC28187859C80CD568A8943_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		bool L_1 = ___value0;
		NullCheck((Transformer_1_t8ABB0411B7298DFBBC20B58387ECF4E74BFBDEDD *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t8ABB0411B7298DFBBC20B58387ECF4E74BFBDEDD *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t8ABB0411B7298DFBBC20B58387ECF4E74BFBDEDD *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Byte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mB151EF5C27C8C3E67DC8EF7612BB364AF5AE71CB_gshared (uint8_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t65E3C27F47E4C586AEEB98C5F5F7EC12B7487F51 * L_0 = ((Caster_1_tCFD75E9DB3970A86144B6EFA3E793B6C12B52B33_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint8_t L_1 = ___value0;
		NullCheck((Transformer_1_t65E3C27F47E4C586AEEB98C5F5F7EC12B7487F51 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t65E3C27F47E4C586AEEB98C5F5F7EC12B7487F51 *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t65E3C27F47E4C586AEEB98C5F5F7EC12B7487F51 *)L_0, (uint8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Char>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_mA781CBF81CB566C5B97681482DDE49EE24BF2D39_gshared (Il2CppChar ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t94FEFA2C1D7C52972E627FEFFA99284D0DDC25F3 * L_0 = ((Caster_1_tDE1C83FE3C48AB3782D0BCBC7ACD4EA1700DBF59_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Il2CppChar L_1 = ___value0;
		NullCheck((Transformer_1_t94FEFA2C1D7C52972E627FEFFA99284D0DDC25F3 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t94FEFA2C1D7C52972E627FEFFA99284D0DDC25F3 *, Il2CppChar, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t94FEFA2C1D7C52972E627FEFFA99284D0DDC25F3 *)L_0, (Il2CppChar)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisKeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE_mD2D22DC060CF312B9A3016DE6A971B06E2A060E7_gshared (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t240346D763F8BC997367E7F857B6F69D68360595 * L_0 = ((Caster_1_t6B1DD3EE8B308447896C88A6A69138BC65A5FA40_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  L_1 = ___value0;
		NullCheck((Transformer_1_t240346D763F8BC997367E7F857B6F69D68360595 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t240346D763F8BC997367E7F857B6F69D68360595 *, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t240346D763F8BC997367E7F857B6F69D68360595 *)L_0, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.DateTime>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisDateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_m25D70E9A31AFD54807927CE75E424595D55EE885_gshared (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t4CC0B6F21608AE009CB235BE9B1BF15A9B0E3431 * L_0 = ((Caster_1_t502C258C3B6A03A1FD5B2E3254072F77EE89A675_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_1 = ___value0;
		NullCheck((Transformer_1_t4CC0B6F21608AE009CB235BE9B1BF15A9B0E3431 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t4CC0B6F21608AE009CB235BE9B1BF15A9B0E3431 *, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t4CC0B6F21608AE009CB235BE9B1BF15A9B0E3431 *)L_0, (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.DateTimeOffset>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisDateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_m3C1554928412F1AFB670D5FE501C29108FD1BE6A_gshared (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t92CEE2D0E9F82F259F4B10113D85847D8DE54757 * L_0 = ((Caster_1_t11F20427B499F3CD52E11D6A1AB7C931DCF96DB8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  L_1 = ___value0;
		NullCheck((Transformer_1_t92CEE2D0E9F82F259F4B10113D85847D8DE54757 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t92CEE2D0E9F82F259F4B10113D85847D8DE54757 *, DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t92CEE2D0E9F82F259F4B10113D85847D8DE54757 *)L_0, (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Decimal>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisDecimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_m5C13043D24E9A69C7DCB2C4FCEF55CF0AF1C2C5F_gshared (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tE3062CB768903660C5318F9D9B7DDE15A714588C * L_0 = ((Caster_1_tB676512E7A350DB4ED01AA9C00F5621E3A8C7F0F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_1 = ___value0;
		NullCheck((Transformer_1_tE3062CB768903660C5318F9D9B7DDE15A714588C *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_tE3062CB768903660C5318F9D9B7DDE15A714588C *, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tE3062CB768903660C5318F9D9B7DDE15A714588C *)L_0, (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Diagnostics.Tracing.EmptyStruct>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisEmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082_m4923214A4EAA4DAA4CEC11C2C911816FE1F47ABD_gshared (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tBD1BBF19FDEEE663FCCC49AC10AADA1B059D325C * L_0 = ((Caster_1_t8218635FFE52C666262AEEAEE207339F47173DFF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  L_1 = ___value0;
		NullCheck((Transformer_1_tBD1BBF19FDEEE663FCCC49AC10AADA1B059D325C *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_tBD1BBF19FDEEE663FCCC49AC10AADA1B059D325C *, EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tBD1BBF19FDEEE663FCCC49AC10AADA1B059D325C *)L_0, (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Double>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisDouble_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_mF5FF48C2DBF5A36B8C7AAEBD55DA020E48AF83FB_gshared (double ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tFA2CCE2417FF56944AD841B7ED04360314120497 * L_0 = ((Caster_1_t03D8E1F7D51ED3D2AE2677EDF3B6A0F0A4416AB5_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		double L_1 = ___value0;
		NullCheck((Transformer_1_tFA2CCE2417FF56944AD841B7ED04360314120497 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_tFA2CCE2417FF56944AD841B7ED04360314120497 *, double, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tFA2CCE2417FF56944AD841B7ED04360314120497 *)L_0, (double)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Guid>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisGuid_t_mB76EE32A727B7F98A0F65C59B00E43C0D8FB43A7_gshared (Guid_t  ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t10C9C25A5618D14E4E001BDF9E20419A10A6DFB9 * L_0 = ((Caster_1_t5932849F6E79E1885331632BE0371A5087A6DD8C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Guid_t  L_1 = ___value0;
		NullCheck((Transformer_1_t10C9C25A5618D14E4E001BDF9E20419A10A6DFB9 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t10C9C25A5618D14E4E001BDF9E20419A10A6DFB9 *, Guid_t , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t10C9C25A5618D14E4E001BDF9E20419A10A6DFB9 *)L_0, (Guid_t )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Int16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisInt16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_m8F6C334DF8F1564AB5E45BA8211EE4456CBBB231_gshared (int16_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tF7F040CDF505A8BEF12BEBEAA31FFD9BD43FF8F8 * L_0 = ((Caster_1_t1F87BBD03AF9272751C51F5D605EFEF43AB46FE1_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int16_t L_1 = ___value0;
		NullCheck((Transformer_1_tF7F040CDF505A8BEF12BEBEAA31FFD9BD43FF8F8 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_tF7F040CDF505A8BEF12BEBEAA31FFD9BD43FF8F8 *, int16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tF7F040CDF505A8BEF12BEBEAA31FFD9BD43FF8F8 *)L_0, (int16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Int32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m1D6C095DECABD7ECA612CE50A9323CC7558CE492_gshared (int32_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tA741C25CF64E7496C977BB826C7D60FA98E8C970 * L_0 = ((Caster_1_tB23D3BA31E450FB0952F33E1D2DB4DBFCD754BE1_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int32_t L_1 = ___value0;
		NullCheck((Transformer_1_tA741C25CF64E7496C977BB826C7D60FA98E8C970 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_tA741C25CF64E7496C977BB826C7D60FA98E8C970 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tA741C25CF64E7496C977BB826C7D60FA98E8C970 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Int64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisInt64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_mA8667973E976E623362B3916BD0A01EEFB22FB84_gshared (int64_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t23A5C3116CBF683F9F68EE3DDFF0E12802831AC4 * L_0 = ((Caster_1_tCA7F280780B937135FD0247CC90F5BCAD8963441_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int64_t L_1 = ___value0;
		NullCheck((Transformer_1_t23A5C3116CBF683F9F68EE3DDFF0E12802831AC4 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t23A5C3116CBF683F9F68EE3DDFF0E12802831AC4 *, int64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t23A5C3116CBF683F9F68EE3DDFF0E12802831AC4 *)L_0, (int64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.IntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisIntPtr_t_m5938B0521628AA9D2A57E92925B307C735673EDC_gshared (intptr_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tDEDEB8C2D8BA02B307B0EDD7EEC5D44DDFB05231 * L_0 = ((Caster_1_t33C636F2356154C6CDFA5421A2797B1F58F30BCC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		intptr_t L_1 = ___value0;
		NullCheck((Transformer_1_tDEDEB8C2D8BA02B307B0EDD7EEC5D44DDFB05231 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_tDEDEB8C2D8BA02B307B0EDD7EEC5D44DDFB05231 *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tDEDEB8C2D8BA02B307B0EDD7EEC5D44DDFB05231 *)L_0, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Object>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisRuntimeObject_m8EE8133972CA40759750FDFE5701582530670348_gshared (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t026BF5A032AD1B2D3EEDA845C07E1202DFCBF82F * L_0 = ((Caster_1_tF7A61263020C72F89182A7A8527DE53779F6D045_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck((Transformer_1_t026BF5A032AD1B2D3EEDA845C07E1202DFCBF82F *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t026BF5A032AD1B2D3EEDA845C07E1202DFCBF82F *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t026BF5A032AD1B2D3EEDA845C07E1202DFCBF82F *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.SByte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisSByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_m93E20FE7F1103F6F41FD560C2458DD73F85633A3_gshared (int8_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t1358C14103D206B57FA822096A13BEDC1A7A4048 * L_0 = ((Caster_1_tE4ED47E76B44B007CC692D239C61ED53AE3DEC20_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int8_t L_1 = ___value0;
		NullCheck((Transformer_1_t1358C14103D206B57FA822096A13BEDC1A7A4048 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t1358C14103D206B57FA822096A13BEDC1A7A4048 *, int8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t1358C14103D206B57FA822096A13BEDC1A7A4048 *)L_0, (int8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.Single>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mD0181E906F9F43D543F29CE6062EB5408367D10C_gshared (float ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t761E0F084572634E94674D7C1912B56771C73045 * L_0 = ((Caster_1_tFFE1731A5A18D2FC62FB4FD0E140F893FEFCBFBC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		float L_1 = ___value0;
		NullCheck((Transformer_1_t761E0F084572634E94674D7C1912B56771C73045 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t761E0F084572634E94674D7C1912B56771C73045 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t761E0F084572634E94674D7C1912B56771C73045 *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.TimeSpan>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisTimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_m69F9C79C03AB361FF42EBA7B6B818AF9BC434D35_gshared (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tD23E5E6A1A391F332A34AA4663D09426093C002A * L_0 = ((Caster_1_tE7B6AE02946C8C7D035775855D3F8667EECF49F0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_1 = ___value0;
		NullCheck((Transformer_1_tD23E5E6A1A391F332A34AA4663D09426093C002A *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_tD23E5E6A1A391F332A34AA4663D09426093C002A *, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tD23E5E6A1A391F332A34AA4663D09426093C002A *)L_0, (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.UInt16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisUInt16_tAE45CEF73BF720100519F6867F32145D075F928E_m98848A814468F001D1BAE2AC1382BB04F4B9A0FA_gshared (uint16_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tD6009487878B22E34FDE5E3FBDC4B4E93CF5BC77 * L_0 = ((Caster_1_tAB8276A53DE8D0B71D0C922FBDC1EA643B4B0801_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint16_t L_1 = ___value0;
		NullCheck((Transformer_1_tD6009487878B22E34FDE5E3FBDC4B4E93CF5BC77 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_tD6009487878B22E34FDE5E3FBDC4B4E93CF5BC77 *, uint16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tD6009487878B22E34FDE5E3FBDC4B4E93CF5BC77 *)L_0, (uint16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.UInt32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_mB30F83D8D6EF175B27FD93FA87B6997566BDC30E_gshared (uint32_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t385ECD51AD4E2A1E86876F87BF89844FDE07DD32 * L_0 = ((Caster_1_t46C35E368FA9C3535F632F4A43107C8C0DECDF2D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint32_t L_1 = ___value0;
		NullCheck((Transformer_1_t385ECD51AD4E2A1E86876F87BF89844FDE07DD32 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t385ECD51AD4E2A1E86876F87BF89844FDE07DD32 *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t385ECD51AD4E2A1E86876F87BF89844FDE07DD32 *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.UInt64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_m40973C82E1D5B4B70939CE0007C506D0AB05F808_gshared (uint64_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t0698CC99B4FA18A0050698BCB1D646E8C1C22984 * L_0 = ((Caster_1_t0DD4ACB69C178BCC9281945CB5322037FF50ACD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint64_t L_1 = ___value0;
		NullCheck((Transformer_1_t0698CC99B4FA18A0050698BCB1D646E8C1C22984 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t0698CC99B4FA18A0050698BCB1D646E8C1C22984 *, uint64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t0698CC99B4FA18A0050698BCB1D646E8C1C22984 *)L_0, (uint64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int16>::Cast<System.UIntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EnumHelper_1_Cast_TisUIntPtr_t_mB8B15AA4089033746DB5FC9A7D782222FA37760A_gshared (uintptr_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t6585D4102CCBAE872252AC5E0732CC8EF79DBB20 * L_0 = ((Caster_1_tAB93366D39B91199FA6BB514B138640EEA06D826_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uintptr_t L_1 = ___value0;
		NullCheck((Transformer_1_t6585D4102CCBAE872252AC5E0732CC8EF79DBB20 *)L_0);
		int16_t L_2 = ((  int16_t (*) (Transformer_1_t6585D4102CCBAE872252AC5E0732CC8EF79DBB20 *, uintptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t6585D4102CCBAE872252AC5E0732CC8EF79DBB20 *)L_0, (uintptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Boolean>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_mD87021825E28AB9152A64711E36E831AB5BC1A69_gshared (bool ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t2DBEC8D0800B8F041E03F876ABF5AF7D3DFE5D7B * L_0 = ((Caster_1_t48A24901856804183E97D899F37E2B095C3D3AD0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		bool L_1 = ___value0;
		NullCheck((Transformer_1_t2DBEC8D0800B8F041E03F876ABF5AF7D3DFE5D7B *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t2DBEC8D0800B8F041E03F876ABF5AF7D3DFE5D7B *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t2DBEC8D0800B8F041E03F876ABF5AF7D3DFE5D7B *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Byte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m904BD89D0794EDD4BA1ECD63B007E98198FE842A_gshared (uint8_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t2EE6D7CD39A5C2027ECB941A3759A9EBA3F0BB0C * L_0 = ((Caster_1_tB8F12CF62FE2B524624E09DCE78970BE6555258F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint8_t L_1 = ___value0;
		NullCheck((Transformer_1_t2EE6D7CD39A5C2027ECB941A3759A9EBA3F0BB0C *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t2EE6D7CD39A5C2027ECB941A3759A9EBA3F0BB0C *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t2EE6D7CD39A5C2027ECB941A3759A9EBA3F0BB0C *)L_0, (uint8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Char>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_m250DB1C0688ED8987DEA68C8B4005B4C94701E81_gshared (Il2CppChar ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t79A0EA03C0758462B77611F0C5FF7EB4477F9D95 * L_0 = ((Caster_1_tD430240C674256CDF3116A5E5C05D32D14ADE25B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Il2CppChar L_1 = ___value0;
		NullCheck((Transformer_1_t79A0EA03C0758462B77611F0C5FF7EB4477F9D95 *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t79A0EA03C0758462B77611F0C5FF7EB4477F9D95 *, Il2CppChar, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t79A0EA03C0758462B77611F0C5FF7EB4477F9D95 *)L_0, (Il2CppChar)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisKeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE_mE245467808C465EB51EE6E7A6D381E77C35886C1_gshared (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t3FB65B12F9B30A5AA121C6225ABBD98671D135DE * L_0 = ((Caster_1_tA4C9DBDB9984A7DBDBE1E328A1E6D32056B598D5_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  L_1 = ___value0;
		NullCheck((Transformer_1_t3FB65B12F9B30A5AA121C6225ABBD98671D135DE *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t3FB65B12F9B30A5AA121C6225ABBD98671D135DE *, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t3FB65B12F9B30A5AA121C6225ABBD98671D135DE *)L_0, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.DateTime>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisDateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_mE31527D1BE35D2661853F15F4C0D708E9C0B8FD9_gshared (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t00DC76E5BE87873705F91E95AEF9B620DA10C64A * L_0 = ((Caster_1_t910ED4892D830D9260544CCD5A5BA17D0EAAC5A7_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_1 = ___value0;
		NullCheck((Transformer_1_t00DC76E5BE87873705F91E95AEF9B620DA10C64A *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t00DC76E5BE87873705F91E95AEF9B620DA10C64A *, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t00DC76E5BE87873705F91E95AEF9B620DA10C64A *)L_0, (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.DateTimeOffset>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisDateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_m9DE76E933754179F978E8996F91230BAC513DE6D_gshared (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tE5EF3DB7DB9777B2A122766AB8A2227D1C094B79 * L_0 = ((Caster_1_t3B656E50540D77F8D98EC3723A33AD022BA02142_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  L_1 = ___value0;
		NullCheck((Transformer_1_tE5EF3DB7DB9777B2A122766AB8A2227D1C094B79 *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_tE5EF3DB7DB9777B2A122766AB8A2227D1C094B79 *, DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tE5EF3DB7DB9777B2A122766AB8A2227D1C094B79 *)L_0, (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Decimal>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisDecimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_m6B23A7ADD84FEEFE2CF495A10C5F7F8A237F12F8_gshared (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t25C83F04D27EBB3953BD3252D27F944B7081EFD4 * L_0 = ((Caster_1_t37CFBE48D145A145182032241D4C96C7A9651872_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_1 = ___value0;
		NullCheck((Transformer_1_t25C83F04D27EBB3953BD3252D27F944B7081EFD4 *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t25C83F04D27EBB3953BD3252D27F944B7081EFD4 *, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t25C83F04D27EBB3953BD3252D27F944B7081EFD4 *)L_0, (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Diagnostics.Tracing.EmptyStruct>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisEmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082_mE33D0543DFD396F129480CE6EBB5AB7ED4953C63_gshared (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t0FBAD50C82E7A4C7D93A7E4DAE1B7765DEC256E8 * L_0 = ((Caster_1_t6C69308FA9D7112A4603D39468BDA09974918F69_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  L_1 = ___value0;
		NullCheck((Transformer_1_t0FBAD50C82E7A4C7D93A7E4DAE1B7765DEC256E8 *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t0FBAD50C82E7A4C7D93A7E4DAE1B7765DEC256E8 *, EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t0FBAD50C82E7A4C7D93A7E4DAE1B7765DEC256E8 *)L_0, (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Double>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisDouble_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_m18B425A1BD292BF835CD978A840B2B0495672AB6_gshared (double ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t68826869D55A324A082EE643E06DFE0549C43F1B * L_0 = ((Caster_1_t667DCCFE8DA1234CBF65A5978B6D27BE63CD598A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		double L_1 = ___value0;
		NullCheck((Transformer_1_t68826869D55A324A082EE643E06DFE0549C43F1B *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t68826869D55A324A082EE643E06DFE0549C43F1B *, double, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t68826869D55A324A082EE643E06DFE0549C43F1B *)L_0, (double)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Guid>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisGuid_t_m929A4D0FCC3C16092FBF35AB0C12A9A3C4ACA976_gshared (Guid_t  ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tAE2C376EED3A46831CB52406C90F7FF43F1F9F05 * L_0 = ((Caster_1_tB84AF4B31F4DAF0AB144E99A83CE997FB4C72D58_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Guid_t  L_1 = ___value0;
		NullCheck((Transformer_1_tAE2C376EED3A46831CB52406C90F7FF43F1F9F05 *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_tAE2C376EED3A46831CB52406C90F7FF43F1F9F05 *, Guid_t , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tAE2C376EED3A46831CB52406C90F7FF43F1F9F05 *)L_0, (Guid_t )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Int16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisInt16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_m79C33E1C8F36629007121977ACA4722E2BFB97A5_gshared (int16_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t09EADD81A9C2CA1C3043FA5CD6706CA1530666E0 * L_0 = ((Caster_1_t10436C94D617CD0D6ABB2F7D073CFA27B74C1E30_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int16_t L_1 = ___value0;
		NullCheck((Transformer_1_t09EADD81A9C2CA1C3043FA5CD6706CA1530666E0 *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t09EADD81A9C2CA1C3043FA5CD6706CA1530666E0 *, int16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t09EADD81A9C2CA1C3043FA5CD6706CA1530666E0 *)L_0, (int16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Int32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m3352690FD9B7810E53BD0226ABA15061DABC3861_gshared (int32_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t9E7C8EB2E7DA583C3C11956C5E93F3D313CE08D6 * L_0 = ((Caster_1_t14BB827E485FED333B17154453079AE34F1F49AD_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int32_t L_1 = ___value0;
		NullCheck((Transformer_1_t9E7C8EB2E7DA583C3C11956C5E93F3D313CE08D6 *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t9E7C8EB2E7DA583C3C11956C5E93F3D313CE08D6 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t9E7C8EB2E7DA583C3C11956C5E93F3D313CE08D6 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Int64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisInt64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_mCE856A4A6FA913D30106882D36D439389EBED04F_gshared (int64_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t8B62B5B7F2FBA49FF26EC65A644535089EF385F2 * L_0 = ((Caster_1_t7A312140662B26A86CC59C245C7C848163A49AB4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int64_t L_1 = ___value0;
		NullCheck((Transformer_1_t8B62B5B7F2FBA49FF26EC65A644535089EF385F2 *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t8B62B5B7F2FBA49FF26EC65A644535089EF385F2 *, int64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t8B62B5B7F2FBA49FF26EC65A644535089EF385F2 *)L_0, (int64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.IntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisIntPtr_t_mCFDB3D5473BAE1CBA9286BB2552E06C1C389121A_gshared (intptr_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tE65E26BDA2D86514F0E4F7DCA655FD6391C3498A * L_0 = ((Caster_1_t9C36147697AE67003B8A0EF11EEF2516066D90C4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		intptr_t L_1 = ___value0;
		NullCheck((Transformer_1_tE65E26BDA2D86514F0E4F7DCA655FD6391C3498A *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_tE65E26BDA2D86514F0E4F7DCA655FD6391C3498A *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tE65E26BDA2D86514F0E4F7DCA655FD6391C3498A *)L_0, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Object>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisRuntimeObject_m5381A5A027D55D6BD1F5AFEFDEFA4F6045D163AE_gshared (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t65992AEC496277643CBC80A2F9BED723063EB848 * L_0 = ((Caster_1_t31EFD992543429652A6ED1652D545CCD372DB7C5_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck((Transformer_1_t65992AEC496277643CBC80A2F9BED723063EB848 *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t65992AEC496277643CBC80A2F9BED723063EB848 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t65992AEC496277643CBC80A2F9BED723063EB848 *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.SByte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisSByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_m60FDEFA18A26FD45A8D1668C7844B4EC02D525B0_gshared (int8_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t8A499D6FEF7443CA4CE5419B243505BB61DE7DEF * L_0 = ((Caster_1_t9347D88993875351431679E4107168C7CD28B825_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int8_t L_1 = ___value0;
		NullCheck((Transformer_1_t8A499D6FEF7443CA4CE5419B243505BB61DE7DEF *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t8A499D6FEF7443CA4CE5419B243505BB61DE7DEF *, int8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t8A499D6FEF7443CA4CE5419B243505BB61DE7DEF *)L_0, (int8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.Single>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m120DF6B1F211DE3BB1CB7D07FEF84C22A6704F3F_gshared (float ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t69D9451801937FE2AFF99FCCE268AA878D643D9B * L_0 = ((Caster_1_t3EA25BC7E67BA9A7DA94FB04B9939AA009AE1F2D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		float L_1 = ___value0;
		NullCheck((Transformer_1_t69D9451801937FE2AFF99FCCE268AA878D643D9B *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t69D9451801937FE2AFF99FCCE268AA878D643D9B *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t69D9451801937FE2AFF99FCCE268AA878D643D9B *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.TimeSpan>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisTimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_m77E6D4B131D8064BC00515F25FC3D872D1F189D1_gshared (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tE86E929A9B1ED9F0643091DE20F815B92553CA94 * L_0 = ((Caster_1_tFDA8B5B6F494CA32867BEDA1744607B9DE4AC7FD_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_1 = ___value0;
		NullCheck((Transformer_1_tE86E929A9B1ED9F0643091DE20F815B92553CA94 *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_tE86E929A9B1ED9F0643091DE20F815B92553CA94 *, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tE86E929A9B1ED9F0643091DE20F815B92553CA94 *)L_0, (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.UInt16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisUInt16_tAE45CEF73BF720100519F6867F32145D075F928E_m76AE6217EF496F71CA44BF726149CA82CA98A851_gshared (uint16_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t4021B15333DAA448023DFF6ED2E859037D86D3D9 * L_0 = ((Caster_1_t5A5C0360CA0AE23E50B74262E52C01F758755C97_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint16_t L_1 = ___value0;
		NullCheck((Transformer_1_t4021B15333DAA448023DFF6ED2E859037D86D3D9 *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t4021B15333DAA448023DFF6ED2E859037D86D3D9 *, uint16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t4021B15333DAA448023DFF6ED2E859037D86D3D9 *)L_0, (uint16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.UInt32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_mCF05B647DA52B81D78F7C1C9E805162DCC534EC0_gshared (uint32_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t1D933EC313B2537F0734DE0A2C329C45BFC02BEE * L_0 = ((Caster_1_t3A7D9F3C5EC2EF5D573D0A6E3F67BA58C73B050A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint32_t L_1 = ___value0;
		NullCheck((Transformer_1_t1D933EC313B2537F0734DE0A2C329C45BFC02BEE *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t1D933EC313B2537F0734DE0A2C329C45BFC02BEE *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t1D933EC313B2537F0734DE0A2C329C45BFC02BEE *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.UInt64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_mD9ACCDE304740CCDD7DE5D3061FEBA4751A50AAD_gshared (uint64_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tB4F33CE42FA8CDA6C1AEB382F3C767D3D702427D * L_0 = ((Caster_1_t5606234865DF0152C73166D640BD2651AAC8D43E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint64_t L_1 = ___value0;
		NullCheck((Transformer_1_tB4F33CE42FA8CDA6C1AEB382F3C767D3D702427D *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_tB4F33CE42FA8CDA6C1AEB382F3C767D3D702427D *, uint64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tB4F33CE42FA8CDA6C1AEB382F3C767D3D702427D *)L_0, (uint64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int32>::Cast<System.UIntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumHelper_1_Cast_TisUIntPtr_t_mCF8F606BDF81C71855C4901A31FE3DDE2B41D07D_gshared (uintptr_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t64BE2DF002F043C82C776B57E74B06CBF540475A * L_0 = ((Caster_1_t0233A96550545D6F17A5141586520D492131F3AF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uintptr_t L_1 = ___value0;
		NullCheck((Transformer_1_t64BE2DF002F043C82C776B57E74B06CBF540475A *)L_0);
		int32_t L_2 = ((  int32_t (*) (Transformer_1_t64BE2DF002F043C82C776B57E74B06CBF540475A *, uintptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t64BE2DF002F043C82C776B57E74B06CBF540475A *)L_0, (uintptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Boolean>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_mB862CD59E18B5D6DE3975635D248445FC1DCFEDC_gshared (bool ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tEAC0B3C94575ECFC1F5F52CF95B8281D45B17E82 * L_0 = ((Caster_1_t78D880B4DED6A81AFFB3DA6D32BA8A0E295F3788_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		bool L_1 = ___value0;
		NullCheck((Transformer_1_tEAC0B3C94575ECFC1F5F52CF95B8281D45B17E82 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_tEAC0B3C94575ECFC1F5F52CF95B8281D45B17E82 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tEAC0B3C94575ECFC1F5F52CF95B8281D45B17E82 *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Byte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m767C2FDFF9ED64B0241800DCD45D84B6C424BBAF_gshared (uint8_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tEE83BA38EF2ECC4720D526BBB03AD2D7847DC673 * L_0 = ((Caster_1_tF1E9F5ACC455E168230D60D0AE5E848A5DBE2930_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint8_t L_1 = ___value0;
		NullCheck((Transformer_1_tEE83BA38EF2ECC4720D526BBB03AD2D7847DC673 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_tEE83BA38EF2ECC4720D526BBB03AD2D7847DC673 *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tEE83BA38EF2ECC4720D526BBB03AD2D7847DC673 *)L_0, (uint8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Char>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_mCA8359EA41F7B4D4F0334509E5C772674870DF27_gshared (Il2CppChar ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t9BA41A256E2DA69FF4771DEB014C7A916468BC66 * L_0 = ((Caster_1_t95AC156F3D75823ABA3B6749B8E5DAAF8EB6AB25_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Il2CppChar L_1 = ___value0;
		NullCheck((Transformer_1_t9BA41A256E2DA69FF4771DEB014C7A916468BC66 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t9BA41A256E2DA69FF4771DEB014C7A916468BC66 *, Il2CppChar, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t9BA41A256E2DA69FF4771DEB014C7A916468BC66 *)L_0, (Il2CppChar)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisKeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE_mDED6BE58F3B45FF48522331B6D37042116DC852B_gshared (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t522A3AB35D286FE6FF0D73E32E18AF9BA2C889B6 * L_0 = ((Caster_1_t8B6EA4487FE31C415BCD954287C70DF849E09E08_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  L_1 = ___value0;
		NullCheck((Transformer_1_t522A3AB35D286FE6FF0D73E32E18AF9BA2C889B6 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t522A3AB35D286FE6FF0D73E32E18AF9BA2C889B6 *, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t522A3AB35D286FE6FF0D73E32E18AF9BA2C889B6 *)L_0, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.DateTime>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisDateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_m7AF2CC9A88EF6C7BA7062CBC9E6671DCFDDDE6C4_gshared (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tCA45FD544A9D029E08729452F32B044016B2F8EE * L_0 = ((Caster_1_t2314A24A7931390C6867F5AB59BCE7DF7875EDB6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_1 = ___value0;
		NullCheck((Transformer_1_tCA45FD544A9D029E08729452F32B044016B2F8EE *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_tCA45FD544A9D029E08729452F32B044016B2F8EE *, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tCA45FD544A9D029E08729452F32B044016B2F8EE *)L_0, (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.DateTimeOffset>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisDateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_mA79E752D231DF346C6FDB3DB95DC5E91D1E994D5_gshared (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t857CBA0AC2F70C8D74D8183C19537F7A692F21A7 * L_0 = ((Caster_1_t39143C74EFB8AD6200EFEE9E31A9EBDC9718F1E5_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  L_1 = ___value0;
		NullCheck((Transformer_1_t857CBA0AC2F70C8D74D8183C19537F7A692F21A7 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t857CBA0AC2F70C8D74D8183C19537F7A692F21A7 *, DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t857CBA0AC2F70C8D74D8183C19537F7A692F21A7 *)L_0, (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Decimal>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisDecimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_mF70A048030A6D511CFFA1F5C68CDF76AF0817985_gshared (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tE30A5AE1F549407B3087EBD3EC6E8DB713D78DC2 * L_0 = ((Caster_1_t4B1D64CB72ED6461809D48568ECB009A92F781FE_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_1 = ___value0;
		NullCheck((Transformer_1_tE30A5AE1F549407B3087EBD3EC6E8DB713D78DC2 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_tE30A5AE1F549407B3087EBD3EC6E8DB713D78DC2 *, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tE30A5AE1F549407B3087EBD3EC6E8DB713D78DC2 *)L_0, (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Diagnostics.Tracing.EmptyStruct>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisEmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082_m438A2CEB68A593F5B57AC0CC95CCBDF3E5746A53_gshared (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t41E828E06402D572E82833CAFA0E9727745F7A0D * L_0 = ((Caster_1_t279DFE68F30E6659059D94B02BD5361A9BBE40D4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  L_1 = ___value0;
		NullCheck((Transformer_1_t41E828E06402D572E82833CAFA0E9727745F7A0D *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t41E828E06402D572E82833CAFA0E9727745F7A0D *, EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t41E828E06402D572E82833CAFA0E9727745F7A0D *)L_0, (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Double>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisDouble_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_m576C2E63208E9FA2318899CD5A9E0CD526980673_gshared (double ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tD1B097B6BB34F0B4B3455970FC79E6A585DE5B8A * L_0 = ((Caster_1_tFFC10B3F233B81FE8D4EA64668FE2EA15A433C6D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		double L_1 = ___value0;
		NullCheck((Transformer_1_tD1B097B6BB34F0B4B3455970FC79E6A585DE5B8A *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_tD1B097B6BB34F0B4B3455970FC79E6A585DE5B8A *, double, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tD1B097B6BB34F0B4B3455970FC79E6A585DE5B8A *)L_0, (double)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Guid>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisGuid_t_m0AB9E683843C5F8026B4BE353B704B9C0445562B_gshared (Guid_t  ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t39D48650F87DB03E776EE44D5C8F156643CCD9A0 * L_0 = ((Caster_1_t7F15074A7BC9B5DA634F74067B2CAA3E4D8C7379_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Guid_t  L_1 = ___value0;
		NullCheck((Transformer_1_t39D48650F87DB03E776EE44D5C8F156643CCD9A0 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t39D48650F87DB03E776EE44D5C8F156643CCD9A0 *, Guid_t , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t39D48650F87DB03E776EE44D5C8F156643CCD9A0 *)L_0, (Guid_t )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Int16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisInt16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_mC7DC8A4161C7584AECE6AF041D57B381EE5A477F_gshared (int16_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tC51C59F619800C8468ED4694D7779761A5403071 * L_0 = ((Caster_1_tE25B230380E2CE54B9276690CD814DE511450833_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int16_t L_1 = ___value0;
		NullCheck((Transformer_1_tC51C59F619800C8468ED4694D7779761A5403071 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_tC51C59F619800C8468ED4694D7779761A5403071 *, int16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tC51C59F619800C8468ED4694D7779761A5403071 *)L_0, (int16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Int32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m037FE224C3CFAAD3497F4B3F31C82178225B384B_gshared (int32_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tCB26A79652B363A8064BBAF43700A09A80610C91 * L_0 = ((Caster_1_t3B87E9C89959ABEE4F6F1172FFA2D99D20FEAF4D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int32_t L_1 = ___value0;
		NullCheck((Transformer_1_tCB26A79652B363A8064BBAF43700A09A80610C91 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_tCB26A79652B363A8064BBAF43700A09A80610C91 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tCB26A79652B363A8064BBAF43700A09A80610C91 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Int64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisInt64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_mECC8829C16BE4538050F0A94F292AB8BC5EEE745_gshared (int64_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tB3B4F4C80F506532A9BC19E9995C82DE17840E96 * L_0 = ((Caster_1_t7D3ABA04133A298DFD0422ADFEBDEF3656AF0031_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int64_t L_1 = ___value0;
		NullCheck((Transformer_1_tB3B4F4C80F506532A9BC19E9995C82DE17840E96 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_tB3B4F4C80F506532A9BC19E9995C82DE17840E96 *, int64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tB3B4F4C80F506532A9BC19E9995C82DE17840E96 *)L_0, (int64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.IntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisIntPtr_t_mA69192E793A3C7BEE631D420533AFFBBEE0E6F70_gshared (intptr_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t60B3D9EF53100FA49F00B43536652E9473B31171 * L_0 = ((Caster_1_t9E4D034C656C467484BBD42F5B9FF5B91F790BED_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		intptr_t L_1 = ___value0;
		NullCheck((Transformer_1_t60B3D9EF53100FA49F00B43536652E9473B31171 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t60B3D9EF53100FA49F00B43536652E9473B31171 *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t60B3D9EF53100FA49F00B43536652E9473B31171 *)L_0, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Object>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisRuntimeObject_m9841D59B401BD9CBB358259BD32F5CE8276474C0_gshared (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t55A8AAC336D2E181D0CC38D11BD1B30145E6479D * L_0 = ((Caster_1_t7F4B7F98CCD80CC0E1B52334B484C566B3772846_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck((Transformer_1_t55A8AAC336D2E181D0CC38D11BD1B30145E6479D *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t55A8AAC336D2E181D0CC38D11BD1B30145E6479D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t55A8AAC336D2E181D0CC38D11BD1B30145E6479D *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.SByte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisSByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_m053631F41BC7D2E505B1600D5DF0B87718AC9F26_gshared (int8_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t01DCD4DD4A9D8250EDA7C3884A31ADCBC0CA2F31 * L_0 = ((Caster_1_tD1867CCD99C0E4D6779357AA6EAE58CA54AE0AF4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int8_t L_1 = ___value0;
		NullCheck((Transformer_1_t01DCD4DD4A9D8250EDA7C3884A31ADCBC0CA2F31 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t01DCD4DD4A9D8250EDA7C3884A31ADCBC0CA2F31 *, int8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t01DCD4DD4A9D8250EDA7C3884A31ADCBC0CA2F31 *)L_0, (int8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.Single>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mD79C3D4ADCAC01009016633870F0F851B99BD7C7_gshared (float ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tDC0440FA1979CE8CAEE05E55C3F77B191B3864A5 * L_0 = ((Caster_1_tCADDC259BB0BC859D77522BE7660068F2B40F0FC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		float L_1 = ___value0;
		NullCheck((Transformer_1_tDC0440FA1979CE8CAEE05E55C3F77B191B3864A5 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_tDC0440FA1979CE8CAEE05E55C3F77B191B3864A5 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tDC0440FA1979CE8CAEE05E55C3F77B191B3864A5 *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.TimeSpan>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisTimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_m5562E71891F3CD5A26093B67877C592DC57BF410_gshared (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t5D03480C8430BB4B110B1A825293797FEA351E99 * L_0 = ((Caster_1_tB392A04593C4239456BD2F10286A27F0AE928679_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_1 = ___value0;
		NullCheck((Transformer_1_t5D03480C8430BB4B110B1A825293797FEA351E99 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t5D03480C8430BB4B110B1A825293797FEA351E99 *, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t5D03480C8430BB4B110B1A825293797FEA351E99 *)L_0, (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.UInt16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisUInt16_tAE45CEF73BF720100519F6867F32145D075F928E_mD5B60AFDB1E022C0979DE3346D185C44D2022A2C_gshared (uint16_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t8A89FB68F46FF4353E966CC00B908CA34497EA95 * L_0 = ((Caster_1_t9F5AB8620B99DD3C4BBDD28E6F5A78003016D254_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint16_t L_1 = ___value0;
		NullCheck((Transformer_1_t8A89FB68F46FF4353E966CC00B908CA34497EA95 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t8A89FB68F46FF4353E966CC00B908CA34497EA95 *, uint16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t8A89FB68F46FF4353E966CC00B908CA34497EA95 *)L_0, (uint16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.UInt32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_mB6D6836EC3E9686143CEF67C24015E934AFFF69D_gshared (uint32_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t0AFADFC854814929C26DD9D901BE57FF25AD0FAE * L_0 = ((Caster_1_t5F92169CA22878B796AF5109203D193F987A4A39_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint32_t L_1 = ___value0;
		NullCheck((Transformer_1_t0AFADFC854814929C26DD9D901BE57FF25AD0FAE *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t0AFADFC854814929C26DD9D901BE57FF25AD0FAE *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t0AFADFC854814929C26DD9D901BE57FF25AD0FAE *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.UInt64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_m17B3592AA114BB4F62C43FBE77386893E6A81672_gshared (uint64_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t1DABC0789361F050A97DCB9B0BF426488849447B * L_0 = ((Caster_1_tF96225B214D9B7EE71FE55E75A65EBD3AFEFAB6C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint64_t L_1 = ___value0;
		NullCheck((Transformer_1_t1DABC0789361F050A97DCB9B0BF426488849447B *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_t1DABC0789361F050A97DCB9B0BF426488849447B *, uint64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t1DABC0789361F050A97DCB9B0BF426488849447B *)L_0, (uint64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Int64>::Cast<System.UIntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumHelper_1_Cast_TisUIntPtr_t_mBC233F334A4E586EC36F2284329A6B2E317ABF44_gshared (uintptr_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tB15772C7E9B7C5700966A8D43542601D4E3C1E66 * L_0 = ((Caster_1_t02CDD619AF43E06FEDAB4F242EB5DAB284E98B19_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uintptr_t L_1 = ___value0;
		NullCheck((Transformer_1_tB15772C7E9B7C5700966A8D43542601D4E3C1E66 *)L_0);
		int64_t L_2 = ((  int64_t (*) (Transformer_1_tB15772C7E9B7C5700966A8D43542601D4E3C1E66 *, uintptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tB15772C7E9B7C5700966A8D43542601D4E3C1E66 *)L_0, (uintptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.Object>::Cast<System.Object>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * EnumHelper_1_Cast_TisRuntimeObject_m14B8662697DCB26B5CE66EFF6D0A9BA01937351F_gshared (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t338D76BCAA91120B467D3111015F22FB4F0FD2FA * L_0 = ((Caster_1_t195DBA8A516B142DCC1ACA2DA98380583B5F1D8E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck((Transformer_1_t338D76BCAA91120B467D3111015F22FB4F0FD2FA *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (Transformer_1_t338D76BCAA91120B467D3111015F22FB4F0FD2FA *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t338D76BCAA91120B467D3111015F22FB4F0FD2FA *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (RuntimeObject *)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Boolean>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_mAE533483D2EB9736CA5036F45470ADB1E9F54524_gshared (bool ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t79570F2F3007DB1835D814B8075FDC98BC3553A7 * L_0 = ((Caster_1_t9548AD2802014C51CE95C2D167F4C5AFF00F7AB0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		bool L_1 = ___value0;
		NullCheck((Transformer_1_t79570F2F3007DB1835D814B8075FDC98BC3553A7 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t79570F2F3007DB1835D814B8075FDC98BC3553A7 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t79570F2F3007DB1835D814B8075FDC98BC3553A7 *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Byte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m9C053DC9213280343424F5D4E6CA5412421EE9C1_gshared (uint8_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tF8540D89C13FFD7703F79D80D228D878E23A3ADE * L_0 = ((Caster_1_t6D09AA62870A76ABA6E5E4D301AFCCF93F194424_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint8_t L_1 = ___value0;
		NullCheck((Transformer_1_tF8540D89C13FFD7703F79D80D228D878E23A3ADE *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tF8540D89C13FFD7703F79D80D228D878E23A3ADE *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tF8540D89C13FFD7703F79D80D228D878E23A3ADE *)L_0, (uint8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Char>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_m76E7947556939FCC5864462556D6EABBED1A2885_gshared (Il2CppChar ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tA6C8CCCFAE41F969307DFD6B15049A2AC4E87B2E * L_0 = ((Caster_1_t7BED5C159FA7237F00FC5BF1362A67DD3DEE749A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Il2CppChar L_1 = ___value0;
		NullCheck((Transformer_1_tA6C8CCCFAE41F969307DFD6B15049A2AC4E87B2E *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tA6C8CCCFAE41F969307DFD6B15049A2AC4E87B2E *, Il2CppChar, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tA6C8CCCFAE41F969307DFD6B15049A2AC4E87B2E *)L_0, (Il2CppChar)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisKeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE_mFEFA14B14A9E77A4CE09CAE160CF3D675326177F_gshared (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t42D4002780D07F2123783F0D69A304CD6984F13D * L_0 = ((Caster_1_tFE5F9417466A4CB788D519C7878ECCB397E668A1_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  L_1 = ___value0;
		NullCheck((Transformer_1_t42D4002780D07F2123783F0D69A304CD6984F13D *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t42D4002780D07F2123783F0D69A304CD6984F13D *, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t42D4002780D07F2123783F0D69A304CD6984F13D *)L_0, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.DateTime>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisDateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_m673C9F8CB81B95A3CB90E49ABBE57EF86259907F_gshared (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t7B71FCE554A579C8F8EE31C925E7CC3A260F65B0 * L_0 = ((Caster_1_tB027436891672D8E446545806D30A74D601A125F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_1 = ___value0;
		NullCheck((Transformer_1_t7B71FCE554A579C8F8EE31C925E7CC3A260F65B0 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t7B71FCE554A579C8F8EE31C925E7CC3A260F65B0 *, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t7B71FCE554A579C8F8EE31C925E7CC3A260F65B0 *)L_0, (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.DateTimeOffset>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisDateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_mC26286A6D4E8B13D974E305ED759B60852346A79_gshared (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t0C4CCE96CE8A1C5FA519A098E2CBD37BEC2CA324 * L_0 = ((Caster_1_tC50D5F2635E0A7DCD57C363B1CA71CFEA00F93EF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  L_1 = ___value0;
		NullCheck((Transformer_1_t0C4CCE96CE8A1C5FA519A098E2CBD37BEC2CA324 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t0C4CCE96CE8A1C5FA519A098E2CBD37BEC2CA324 *, DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t0C4CCE96CE8A1C5FA519A098E2CBD37BEC2CA324 *)L_0, (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Decimal>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisDecimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_m740C047BDE43758747E4B36E049DC0AE266AFA60_gshared (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tC8E702F6B3A43AAD921E235014B8BEE380D6C8E6 * L_0 = ((Caster_1_tE749C798EEF25AA04DF0E56627917C360336EBA4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_1 = ___value0;
		NullCheck((Transformer_1_tC8E702F6B3A43AAD921E235014B8BEE380D6C8E6 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tC8E702F6B3A43AAD921E235014B8BEE380D6C8E6 *, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tC8E702F6B3A43AAD921E235014B8BEE380D6C8E6 *)L_0, (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Diagnostics.Tracing.EmptyStruct>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisEmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082_mECD8FBA0366809F56BB17362A9D59211AE7C3285_gshared (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tBEAC8A938CBDB8AAB69661EFA8EA0FB141525D53 * L_0 = ((Caster_1_t70BCB30FF0C2DF9E545F34DEF21271408068477F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  L_1 = ___value0;
		NullCheck((Transformer_1_tBEAC8A938CBDB8AAB69661EFA8EA0FB141525D53 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tBEAC8A938CBDB8AAB69661EFA8EA0FB141525D53 *, EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tBEAC8A938CBDB8AAB69661EFA8EA0FB141525D53 *)L_0, (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Double>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisDouble_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_m51A5D50B60E6833C3719179DAE4C745C4F72C18E_gshared (double ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tF0766B96906F251FDCA58F9C63D53C429A053601 * L_0 = ((Caster_1_tC218F4859CF65473DA915EE5333EFDCFEE72392E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		double L_1 = ___value0;
		NullCheck((Transformer_1_tF0766B96906F251FDCA58F9C63D53C429A053601 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tF0766B96906F251FDCA58F9C63D53C429A053601 *, double, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tF0766B96906F251FDCA58F9C63D53C429A053601 *)L_0, (double)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Guid>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisGuid_t_m0FE9A2031A026A598CD001010D084B0045B6A34D_gshared (Guid_t  ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tBBF50A3F30EEFDE66991F29F64E2D0A0455DE463 * L_0 = ((Caster_1_t8409BE0ECE6FE2A29D79E7044752D251CB863421_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Guid_t  L_1 = ___value0;
		NullCheck((Transformer_1_tBBF50A3F30EEFDE66991F29F64E2D0A0455DE463 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tBBF50A3F30EEFDE66991F29F64E2D0A0455DE463 *, Guid_t , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tBBF50A3F30EEFDE66991F29F64E2D0A0455DE463 *)L_0, (Guid_t )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Int16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisInt16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_mF38F852ACA2D84A5A751E725A2BD6E8075EAF7BF_gshared (int16_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tA87CAE242D2B98DEB22E378E1E67ABA48B2C74D4 * L_0 = ((Caster_1_t62F9F0EA0D2CF70BE880EC5B4DB6C4E3BD191FF1_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int16_t L_1 = ___value0;
		NullCheck((Transformer_1_tA87CAE242D2B98DEB22E378E1E67ABA48B2C74D4 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tA87CAE242D2B98DEB22E378E1E67ABA48B2C74D4 *, int16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tA87CAE242D2B98DEB22E378E1E67ABA48B2C74D4 *)L_0, (int16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Int32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mDC45B432580ACAEF29CFB6EAD130C43FD4EE2EE0_gshared (int32_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tD3A676069C04AAC638676241B25E06E84FEDDF60 * L_0 = ((Caster_1_t12F7AE622EDC8B8147BB5162376EAEBD2A1A716D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int32_t L_1 = ___value0;
		NullCheck((Transformer_1_tD3A676069C04AAC638676241B25E06E84FEDDF60 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tD3A676069C04AAC638676241B25E06E84FEDDF60 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tD3A676069C04AAC638676241B25E06E84FEDDF60 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Int64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisInt64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_m02A2989AD15E5C61CC8170CC360AD7D12462E6B0_gshared (int64_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tE0C44E54BCD5DF5FF3AC9F52C13F1428FBBD4084 * L_0 = ((Caster_1_t9136EB8D74B86E14C4D0B7DE2699BB30FF62ADE0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int64_t L_1 = ___value0;
		NullCheck((Transformer_1_tE0C44E54BCD5DF5FF3AC9F52C13F1428FBBD4084 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tE0C44E54BCD5DF5FF3AC9F52C13F1428FBBD4084 *, int64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tE0C44E54BCD5DF5FF3AC9F52C13F1428FBBD4084 *)L_0, (int64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.IntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisIntPtr_t_m10DFA878C4388DB28234BEDE38F5B5102467D111_gshared (intptr_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tAE4605051B411219A47F37FD57F817C772C5D831 * L_0 = ((Caster_1_t3AEE07159271C04282D4520F761455EA4BF25B90_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		intptr_t L_1 = ___value0;
		NullCheck((Transformer_1_tAE4605051B411219A47F37FD57F817C772C5D831 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tAE4605051B411219A47F37FD57F817C772C5D831 *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tAE4605051B411219A47F37FD57F817C772C5D831 *)L_0, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Object>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisRuntimeObject_mE1FDE0675779B26082666516C621FEC19B207148_gshared (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t2100917DAFFEBF22F25BC5382C00308AE7962D49 * L_0 = ((Caster_1_tDE4AB1F4E3BD9C2B0BF368F239F02CD0D92D7D3B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck((Transformer_1_t2100917DAFFEBF22F25BC5382C00308AE7962D49 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t2100917DAFFEBF22F25BC5382C00308AE7962D49 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t2100917DAFFEBF22F25BC5382C00308AE7962D49 *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.SByte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisSByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_m8ADF6B2EB361F9687FF8AD704E272E4CC73B65DD_gshared (int8_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t745DB47A09FCB8577D6C816C1169CFECBB32F2C5 * L_0 = ((Caster_1_tCC08F4371265D272EC5F5C61F06234FB4C49F905_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int8_t L_1 = ___value0;
		NullCheck((Transformer_1_t745DB47A09FCB8577D6C816C1169CFECBB32F2C5 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t745DB47A09FCB8577D6C816C1169CFECBB32F2C5 *, int8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t745DB47A09FCB8577D6C816C1169CFECBB32F2C5 *)L_0, (int8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.Single>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mC50E5A46276EEA9830E1DC4EE36D82C22F66C64A_gshared (float ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tBF9E21F5E62125133BAE8AB29F7A5FF8368A8867 * L_0 = ((Caster_1_tB1E0520D57EA2A38EB25F38157F7FAE2077D0519_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		float L_1 = ___value0;
		NullCheck((Transformer_1_tBF9E21F5E62125133BAE8AB29F7A5FF8368A8867 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tBF9E21F5E62125133BAE8AB29F7A5FF8368A8867 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tBF9E21F5E62125133BAE8AB29F7A5FF8368A8867 *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.TimeSpan>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisTimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_m136ECC8F15796D07201EF82AB5087C8577204CE7_gshared (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tF26DF9ED555578458A4BEBCC536B42CFE02ACC80 * L_0 = ((Caster_1_t063FFE54B6E834FCAADA9B98B6556AFEC0411632_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_1 = ___value0;
		NullCheck((Transformer_1_tF26DF9ED555578458A4BEBCC536B42CFE02ACC80 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tF26DF9ED555578458A4BEBCC536B42CFE02ACC80 *, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tF26DF9ED555578458A4BEBCC536B42CFE02ACC80 *)L_0, (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.UInt16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisUInt16_tAE45CEF73BF720100519F6867F32145D075F928E_mB9241B4372765DCC3E2FB1E580E530F582D1DC42_gshared (uint16_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t8D669EF524B3DA7294AF5ECC32689F786670F3BC * L_0 = ((Caster_1_tA4C712C2F66B1CCA6198D56E9156B3ED627F7E7F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint16_t L_1 = ___value0;
		NullCheck((Transformer_1_t8D669EF524B3DA7294AF5ECC32689F786670F3BC *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t8D669EF524B3DA7294AF5ECC32689F786670F3BC *, uint16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t8D669EF524B3DA7294AF5ECC32689F786670F3BC *)L_0, (uint16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.UInt32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_mD1099AA921562AC8786F080BFFE193F342C52968_gshared (uint32_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t2C09253351F9C203CF31F34A19DE66BEA03581F3 * L_0 = ((Caster_1_t4E01ADD98CF6A52B499B239DD79900153A6E8CB9_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint32_t L_1 = ___value0;
		NullCheck((Transformer_1_t2C09253351F9C203CF31F34A19DE66BEA03581F3 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_t2C09253351F9C203CF31F34A19DE66BEA03581F3 *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t2C09253351F9C203CF31F34A19DE66BEA03581F3 *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.UInt64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_m2D0D20AC9F0E60DE8262A897B6FE18ED9D025C75_gshared (uint64_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tCF1372796CC314E10F8635C4972C44383BAC7023 * L_0 = ((Caster_1_tA76F3CD44521225217CEE9D5E70655913B3652F6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint64_t L_1 = ___value0;
		NullCheck((Transformer_1_tCF1372796CC314E10F8635C4972C44383BAC7023 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tCF1372796CC314E10F8635C4972C44383BAC7023 *, uint64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tCF1372796CC314E10F8635C4972C44383BAC7023 *)L_0, (uint64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.SByte>::Cast<System.UIntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t EnumHelper_1_Cast_TisUIntPtr_t_mD2B5AC3EAE3E39B8293CD9DC72D51C837C0783F5_gshared (uintptr_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tBE6DD3E5AECE0264800ECFE10CF373FC541893E1 * L_0 = ((Caster_1_t27A7F78CA974CB9EB88650C0F7D4CCB345E0D6F0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uintptr_t L_1 = ___value0;
		NullCheck((Transformer_1_tBE6DD3E5AECE0264800ECFE10CF373FC541893E1 *)L_0);
		int8_t L_2 = ((  int8_t (*) (Transformer_1_tBE6DD3E5AECE0264800ECFE10CF373FC541893E1 *, uintptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tBE6DD3E5AECE0264800ECFE10CF373FC541893E1 *)L_0, (uintptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int8_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Boolean>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m3B872FF621B738CE1DF433FB14FE279F77DB875B_gshared (bool ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t199C978828CCDD3DC4B333BD031B5DA73DE2C968 * L_0 = ((Caster_1_t2AC7FD1B9C92018FCD42D2FBB7DE1C15E7C6141D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		bool L_1 = ___value0;
		NullCheck((Transformer_1_t199C978828CCDD3DC4B333BD031B5DA73DE2C968 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t199C978828CCDD3DC4B333BD031B5DA73DE2C968 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t199C978828CCDD3DC4B333BD031B5DA73DE2C968 *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Byte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mDA9B765AC14F77C923A7CDB3C0D706221CFD15E5_gshared (uint8_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t6F5F45E771B014CBE6BC711CD4C78E85A692E83F * L_0 = ((Caster_1_tA9F99D3DE3C2B79878574DA79394D40484CF909C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint8_t L_1 = ___value0;
		NullCheck((Transformer_1_t6F5F45E771B014CBE6BC711CD4C78E85A692E83F *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t6F5F45E771B014CBE6BC711CD4C78E85A692E83F *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t6F5F45E771B014CBE6BC711CD4C78E85A692E83F *)L_0, (uint8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Char>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_m08A6E25B90A3E4623E4D4C20C9BDED75E046317C_gshared (Il2CppChar ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tBBFF9537117C5BC9379D753F5293135DB33DF769 * L_0 = ((Caster_1_t439110BADC840296B0301DC221E3742B2C8E8934_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Il2CppChar L_1 = ___value0;
		NullCheck((Transformer_1_tBBFF9537117C5BC9379D753F5293135DB33DF769 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_tBBFF9537117C5BC9379D753F5293135DB33DF769 *, Il2CppChar, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tBBFF9537117C5BC9379D753F5293135DB33DF769 *)L_0, (Il2CppChar)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisKeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE_mC622F6D0E6E8E105E53938B01F21FBBE3929BE59_gshared (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t43360C920C6CB99E177E7D0C21F4631EB7353195 * L_0 = ((Caster_1_t9CF680A45E2713569B0D6E5DCD3ACE8E5CE11A5F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  L_1 = ___value0;
		NullCheck((Transformer_1_t43360C920C6CB99E177E7D0C21F4631EB7353195 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t43360C920C6CB99E177E7D0C21F4631EB7353195 *, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t43360C920C6CB99E177E7D0C21F4631EB7353195 *)L_0, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.DateTime>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisDateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_mC92B8CBBB0C4B10ED4E2450902EE2786DC858170_gshared (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tFF97AD2C8962456276364E309A52E6DE33100D56 * L_0 = ((Caster_1_t45EEB8AA14910B5FE2FEA34EC88A9154085E86BC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_1 = ___value0;
		NullCheck((Transformer_1_tFF97AD2C8962456276364E309A52E6DE33100D56 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_tFF97AD2C8962456276364E309A52E6DE33100D56 *, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tFF97AD2C8962456276364E309A52E6DE33100D56 *)L_0, (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.DateTimeOffset>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisDateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_mA1D9F1862F772E31942176AD3F8CD00167E46851_gshared (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t43FCC452C755864725F9DF93DFBE108575461B01 * L_0 = ((Caster_1_t0AD7C98192FA0900645BFF7111DF2264C1F11843_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  L_1 = ___value0;
		NullCheck((Transformer_1_t43FCC452C755864725F9DF93DFBE108575461B01 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t43FCC452C755864725F9DF93DFBE108575461B01 *, DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t43FCC452C755864725F9DF93DFBE108575461B01 *)L_0, (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Decimal>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisDecimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_mCD324132C02011B0B32CCC47A4808A77236AED44_gshared (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t0FD280BFFA34F4D2822CCA89C0E579D1D039C6EC * L_0 = ((Caster_1_tB30E4B83744A2AB4B34E2140F09FF2DBAD9067A2_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_1 = ___value0;
		NullCheck((Transformer_1_t0FD280BFFA34F4D2822CCA89C0E579D1D039C6EC *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t0FD280BFFA34F4D2822CCA89C0E579D1D039C6EC *, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t0FD280BFFA34F4D2822CCA89C0E579D1D039C6EC *)L_0, (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Diagnostics.Tracing.EmptyStruct>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisEmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082_m9B67538CB09A9BE23FFCE9BEC85E666C9A431017_gshared (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t4E404370A1452595E3C5DB7882E5D8953D10E1A5 * L_0 = ((Caster_1_t9F48A0F7F413295607FDDD8C95EAA2A8FB1BA77F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  L_1 = ___value0;
		NullCheck((Transformer_1_t4E404370A1452595E3C5DB7882E5D8953D10E1A5 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t4E404370A1452595E3C5DB7882E5D8953D10E1A5 *, EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t4E404370A1452595E3C5DB7882E5D8953D10E1A5 *)L_0, (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Double>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisDouble_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_m47C7D923FD0FB3DB00E561558507770017AE9BCE_gshared (double ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t96993E76204149647596BB8B93F89AF01BBC2DA1 * L_0 = ((Caster_1_tFA61F79F888D97CEE77D5548328774BE7E4EB84A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		double L_1 = ___value0;
		NullCheck((Transformer_1_t96993E76204149647596BB8B93F89AF01BBC2DA1 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t96993E76204149647596BB8B93F89AF01BBC2DA1 *, double, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t96993E76204149647596BB8B93F89AF01BBC2DA1 *)L_0, (double)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Guid>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisGuid_t_m654610841B56D96AD377D93B265DFEA5BCCD849F_gshared (Guid_t  ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tC04472BECF0E4CEEAC0DD81250C1C45100A49760 * L_0 = ((Caster_1_t62DA063BB7BB019FFBE6B9ED3A08D069E330FE87_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Guid_t  L_1 = ___value0;
		NullCheck((Transformer_1_tC04472BECF0E4CEEAC0DD81250C1C45100A49760 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_tC04472BECF0E4CEEAC0DD81250C1C45100A49760 *, Guid_t , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tC04472BECF0E4CEEAC0DD81250C1C45100A49760 *)L_0, (Guid_t )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Int16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisInt16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_m68BD7EC0E8A27ABE7F05B6775C994BBF0AC9CF61_gshared (int16_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t752D0C62D1A2E9A30D3F6E06FB35683298BACEE8 * L_0 = ((Caster_1_tF5CE3C0B8FDD93C834FC13D907003475F7844594_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int16_t L_1 = ___value0;
		NullCheck((Transformer_1_t752D0C62D1A2E9A30D3F6E06FB35683298BACEE8 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t752D0C62D1A2E9A30D3F6E06FB35683298BACEE8 *, int16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t752D0C62D1A2E9A30D3F6E06FB35683298BACEE8 *)L_0, (int16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Int32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mFD2ADB5D6FF91AD34628103AB08D7D69E52B3F80_gshared (int32_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tA6B55D2D785634BAC127EF306F25AD47252837A5 * L_0 = ((Caster_1_t8F8BD84B7E2CC9232254A7A82FBEA7C1C7227E24_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int32_t L_1 = ___value0;
		NullCheck((Transformer_1_tA6B55D2D785634BAC127EF306F25AD47252837A5 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_tA6B55D2D785634BAC127EF306F25AD47252837A5 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tA6B55D2D785634BAC127EF306F25AD47252837A5 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Int64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisInt64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_mDEB00F12BF02652DD353CC17480C93E61DAD532F_gshared (int64_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t634A2D481C50B029D59732E0A8E9D02DF66A0551 * L_0 = ((Caster_1_t7796DD6DA3A2E903A8337A4426EA117003E4FF07_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int64_t L_1 = ___value0;
		NullCheck((Transformer_1_t634A2D481C50B029D59732E0A8E9D02DF66A0551 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t634A2D481C50B029D59732E0A8E9D02DF66A0551 *, int64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t634A2D481C50B029D59732E0A8E9D02DF66A0551 *)L_0, (int64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.IntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisIntPtr_t_mA4FC52AC62D68943074BF8C0C5BFD283DBCC73D0_gshared (intptr_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t873B2E4C2418F756278367655E1C64D654382460 * L_0 = ((Caster_1_tF06869CDE05BEA07C45D10B5C27C152492D8F494_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		intptr_t L_1 = ___value0;
		NullCheck((Transformer_1_t873B2E4C2418F756278367655E1C64D654382460 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t873B2E4C2418F756278367655E1C64D654382460 *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t873B2E4C2418F756278367655E1C64D654382460 *)L_0, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Object>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisRuntimeObject_m33C8E0733764B34A5BCE1F2E6AFB8C155F39BEBF_gshared (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t892625DF88EAC62E91E8CCC189CB451B8DC38F37 * L_0 = ((Caster_1_t0E97020316A62558167F5F018A989125D28729AD_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck((Transformer_1_t892625DF88EAC62E91E8CCC189CB451B8DC38F37 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t892625DF88EAC62E91E8CCC189CB451B8DC38F37 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t892625DF88EAC62E91E8CCC189CB451B8DC38F37 *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.SByte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisSByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_m0E9A83FB710C70A26B0CCECD93E36054FD591BC6_gshared (int8_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t1996E09F6BED0E887AFBD3B5A3AE1C93DE6BF87A * L_0 = ((Caster_1_t7194A004154AABF5CF224780C51648A67A6757A2_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int8_t L_1 = ___value0;
		NullCheck((Transformer_1_t1996E09F6BED0E887AFBD3B5A3AE1C93DE6BF87A *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t1996E09F6BED0E887AFBD3B5A3AE1C93DE6BF87A *, int8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t1996E09F6BED0E887AFBD3B5A3AE1C93DE6BF87A *)L_0, (int8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.Single>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mCF0D075974C55087E231D074BC65919B184F61B0_gshared (float ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t4E1FF663FF50350704657A112291CD7D7596CEF1 * L_0 = ((Caster_1_t073650CFFC30F591C4E5B47753CBDF6EAEC9AA0D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		float L_1 = ___value0;
		NullCheck((Transformer_1_t4E1FF663FF50350704657A112291CD7D7596CEF1 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t4E1FF663FF50350704657A112291CD7D7596CEF1 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t4E1FF663FF50350704657A112291CD7D7596CEF1 *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.TimeSpan>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisTimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_m2B04CEE74D1BE3CF4EDB28113F73829B46C02053_gshared (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t91133D744423C020A19D0092C4FC03B6D3A4DFEE * L_0 = ((Caster_1_tC9893BC43C67D8FE44500C545C7D0B22FBDFA338_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_1 = ___value0;
		NullCheck((Transformer_1_t91133D744423C020A19D0092C4FC03B6D3A4DFEE *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t91133D744423C020A19D0092C4FC03B6D3A4DFEE *, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t91133D744423C020A19D0092C4FC03B6D3A4DFEE *)L_0, (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.UInt16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisUInt16_tAE45CEF73BF720100519F6867F32145D075F928E_mD814412C42F9D58EA1FDD6CE78D85CD7912178EC_gshared (uint16_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tE9522CA0DE0A4BE7D2EC9C999D7BDD2F4344FE62 * L_0 = ((Caster_1_t97E30322734EE96D22D5EDDDA8A32D7F28BF9E0D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint16_t L_1 = ___value0;
		NullCheck((Transformer_1_tE9522CA0DE0A4BE7D2EC9C999D7BDD2F4344FE62 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_tE9522CA0DE0A4BE7D2EC9C999D7BDD2F4344FE62 *, uint16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tE9522CA0DE0A4BE7D2EC9C999D7BDD2F4344FE62 *)L_0, (uint16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.UInt32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m569864A50A8516B4ED140C81F5208CAF8ABE5054_gshared (uint32_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t1438E2C5AF736F2BAA3201667918AA58BE8FA46C * L_0 = ((Caster_1_tEAB5EDC98E125207E56614BEDA0E194CDB6A81D2_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint32_t L_1 = ___value0;
		NullCheck((Transformer_1_t1438E2C5AF736F2BAA3201667918AA58BE8FA46C *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t1438E2C5AF736F2BAA3201667918AA58BE8FA46C *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t1438E2C5AF736F2BAA3201667918AA58BE8FA46C *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.UInt64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_m10412A2B6C85347835984822C2FA20E792A40553_gshared (uint64_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t9D893B0CF47F60B5A1B332F156AE7885A7FA04AD * L_0 = ((Caster_1_tE1468C16E0D935665BAFEAE58EC1DC80FEA18FD0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint64_t L_1 = ___value0;
		NullCheck((Transformer_1_t9D893B0CF47F60B5A1B332F156AE7885A7FA04AD *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_t9D893B0CF47F60B5A1B332F156AE7885A7FA04AD *, uint64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t9D893B0CF47F60B5A1B332F156AE7885A7FA04AD *)L_0, (uint64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt16>::Cast<System.UIntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t EnumHelper_1_Cast_TisUIntPtr_t_m4C89E4587F264A9DCAD1F7C77B9D279AA1CC44D1_gshared (uintptr_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tEF0B2B94C98E007D79F1E9A305F95F950D695A78 * L_0 = ((Caster_1_t9DA7DEC0029E18FF11AF097849FFE2FD2B961C60_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uintptr_t L_1 = ___value0;
		NullCheck((Transformer_1_tEF0B2B94C98E007D79F1E9A305F95F950D695A78 *)L_0);
		uint16_t L_2 = ((  uint16_t (*) (Transformer_1_tEF0B2B94C98E007D79F1E9A305F95F950D695A78 *, uintptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tEF0B2B94C98E007D79F1E9A305F95F950D695A78 *)L_0, (uintptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint16_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Boolean>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_mE45474D78C9C75421B50BA3B6F0D8A036086E3D4_gshared (bool ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tF0E9BE6348CE010BB238AC31417785A08A6FB691 * L_0 = ((Caster_1_t1B6BC63943ECA453AF4038A2F429DC89D1C88504_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		bool L_1 = ___value0;
		NullCheck((Transformer_1_tF0E9BE6348CE010BB238AC31417785A08A6FB691 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_tF0E9BE6348CE010BB238AC31417785A08A6FB691 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tF0E9BE6348CE010BB238AC31417785A08A6FB691 *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Byte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mA021FB7B9377D61AD510EFEE22C14B074DE4A97C_gshared (uint8_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tB3723D31B530FDEAA4A1F13AA0708DA982630899 * L_0 = ((Caster_1_t1E5C78F2324B0966F93815A21CF15C56A6D1D763_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint8_t L_1 = ___value0;
		NullCheck((Transformer_1_tB3723D31B530FDEAA4A1F13AA0708DA982630899 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_tB3723D31B530FDEAA4A1F13AA0708DA982630899 *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tB3723D31B530FDEAA4A1F13AA0708DA982630899 *)L_0, (uint8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Char>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_mCB509FD508A9096FD819CB976FCE17421E34AD79_gshared (Il2CppChar ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t5476CAC37A40442328D49FE071C30E88285071D4 * L_0 = ((Caster_1_tEED0D769437F89233D231DC79626AC0A6337593C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Il2CppChar L_1 = ___value0;
		NullCheck((Transformer_1_t5476CAC37A40442328D49FE071C30E88285071D4 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t5476CAC37A40442328D49FE071C30E88285071D4 *, Il2CppChar, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t5476CAC37A40442328D49FE071C30E88285071D4 *)L_0, (Il2CppChar)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisKeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE_m3214E0BD22A7B25FE44C18CF248F52316E7BC735_gshared (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t0FB7630995436BE02A2527779DBC4F2527867EEA * L_0 = ((Caster_1_t722135795C75F590A8BC1E4CE7DB7DDFFA14314A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  L_1 = ___value0;
		NullCheck((Transformer_1_t0FB7630995436BE02A2527779DBC4F2527867EEA *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t0FB7630995436BE02A2527779DBC4F2527867EEA *, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t0FB7630995436BE02A2527779DBC4F2527867EEA *)L_0, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.DateTime>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisDateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_mB9853A7D22563E8B8B771F5876882C9B092C5B20_gshared (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t5D7AABD550DAD91D1A5365F5D8EF54C4DA2D3C52 * L_0 = ((Caster_1_t3F3455CCFC9311D353A7D8C4A42200408CA558BC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_1 = ___value0;
		NullCheck((Transformer_1_t5D7AABD550DAD91D1A5365F5D8EF54C4DA2D3C52 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t5D7AABD550DAD91D1A5365F5D8EF54C4DA2D3C52 *, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t5D7AABD550DAD91D1A5365F5D8EF54C4DA2D3C52 *)L_0, (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.DateTimeOffset>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisDateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_m7D5EB067A14234897ACF89E7DF83657410CC2A50_gshared (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t928A4BC9752332E7976045EDA7D13F6580E95E62 * L_0 = ((Caster_1_t2EE1EC204134DA58566A851DFA40A0B880948A86_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  L_1 = ___value0;
		NullCheck((Transformer_1_t928A4BC9752332E7976045EDA7D13F6580E95E62 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t928A4BC9752332E7976045EDA7D13F6580E95E62 *, DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t928A4BC9752332E7976045EDA7D13F6580E95E62 *)L_0, (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Decimal>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisDecimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_m31875099D68E21BE514D36A42DE21BFB3C26AB90_gshared (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tDCFCB89419FEE534E3F73EC59CE6765F40E3CDDC * L_0 = ((Caster_1_t0BBCE2A7CB1298EE3E1F92A4EE98EE1FEA34EC7F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_1 = ___value0;
		NullCheck((Transformer_1_tDCFCB89419FEE534E3F73EC59CE6765F40E3CDDC *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_tDCFCB89419FEE534E3F73EC59CE6765F40E3CDDC *, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tDCFCB89419FEE534E3F73EC59CE6765F40E3CDDC *)L_0, (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Diagnostics.Tracing.EmptyStruct>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisEmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082_m52991F9C4A2BAFC16B33C6A3C863FF0EECE550DE_gshared (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tC99356A59E2E936732EB9B87073CB69F8D9A0E56 * L_0 = ((Caster_1_tEB26AB756A5FFD5D46CEFADFD4354B569FE79E35_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  L_1 = ___value0;
		NullCheck((Transformer_1_tC99356A59E2E936732EB9B87073CB69F8D9A0E56 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_tC99356A59E2E936732EB9B87073CB69F8D9A0E56 *, EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tC99356A59E2E936732EB9B87073CB69F8D9A0E56 *)L_0, (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Double>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisDouble_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_mE4FDEAE7059AF2D9FAFF04E2F28F252697F34DD3_gshared (double ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tBA40A0C65141CC06E9FE7E2B859F14B7B186F5D6 * L_0 = ((Caster_1_t4EF5B9F285768775D3C068FAF5475BD3A7560098_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		double L_1 = ___value0;
		NullCheck((Transformer_1_tBA40A0C65141CC06E9FE7E2B859F14B7B186F5D6 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_tBA40A0C65141CC06E9FE7E2B859F14B7B186F5D6 *, double, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tBA40A0C65141CC06E9FE7E2B859F14B7B186F5D6 *)L_0, (double)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Guid>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisGuid_t_m6635AF97CD8EFCDC822515F565C0503A6035A773_gshared (Guid_t  ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tEB01E6A2E0B3756D68B5715EC212184D5FF1583E * L_0 = ((Caster_1_t82D455B6810AAD5E0FB1B33CBEAE2D7F6B1215C1_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Guid_t  L_1 = ___value0;
		NullCheck((Transformer_1_tEB01E6A2E0B3756D68B5715EC212184D5FF1583E *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_tEB01E6A2E0B3756D68B5715EC212184D5FF1583E *, Guid_t , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tEB01E6A2E0B3756D68B5715EC212184D5FF1583E *)L_0, (Guid_t )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Int16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisInt16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_m3A03746E9FB5A67E1FAFBC546A726D7D461367CB_gshared (int16_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t2F0D48F97FB9DB755CBD7D8BD1063744902DD7D4 * L_0 = ((Caster_1_tFBB6815F7209EA2669845E4F5390708755B6A996_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int16_t L_1 = ___value0;
		NullCheck((Transformer_1_t2F0D48F97FB9DB755CBD7D8BD1063744902DD7D4 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t2F0D48F97FB9DB755CBD7D8BD1063744902DD7D4 *, int16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t2F0D48F97FB9DB755CBD7D8BD1063744902DD7D4 *)L_0, (int16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Int32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m817E92EDAC63A713BB5FC2374E08E7999D44CC40_gshared (int32_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tEE904E877A0E7069658C31FC99833B17AC05794C * L_0 = ((Caster_1_t79F9BB0534172847D8A8840D22FEA3ACBF6E2E30_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int32_t L_1 = ___value0;
		NullCheck((Transformer_1_tEE904E877A0E7069658C31FC99833B17AC05794C *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_tEE904E877A0E7069658C31FC99833B17AC05794C *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tEE904E877A0E7069658C31FC99833B17AC05794C *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Int64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisInt64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_m802F634F8484AA08CF5375C2FA35BFA704082BEC_gshared (int64_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tB77123930E8D4DBBDFEFB1F00D7ABD5F5862C41D * L_0 = ((Caster_1_t2E73FCE9B801A6C9D2357B69DB15EE7FF8CCDBD8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int64_t L_1 = ___value0;
		NullCheck((Transformer_1_tB77123930E8D4DBBDFEFB1F00D7ABD5F5862C41D *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_tB77123930E8D4DBBDFEFB1F00D7ABD5F5862C41D *, int64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tB77123930E8D4DBBDFEFB1F00D7ABD5F5862C41D *)L_0, (int64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.IntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisIntPtr_t_mB193F58608DFB76891B646A614E6FFA5CAF045AC_gshared (intptr_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tD21324C229A06C2679EF7ADBF30B4721FCE846A9 * L_0 = ((Caster_1_t7428F42D13DDC0C1A066BD1EE9BC521E66BA5BC1_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		intptr_t L_1 = ___value0;
		NullCheck((Transformer_1_tD21324C229A06C2679EF7ADBF30B4721FCE846A9 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_tD21324C229A06C2679EF7ADBF30B4721FCE846A9 *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tD21324C229A06C2679EF7ADBF30B4721FCE846A9 *)L_0, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Object>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisRuntimeObject_m2FF75954BEE32E7CBA81F696CFADEB32570A5295_gshared (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t9591C03D292D1491DC84BED40FA4074B4BA228BA * L_0 = ((Caster_1_tB69CF02AAB845E9B3DDB7E61DDA09AE13B6C05C2_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck((Transformer_1_t9591C03D292D1491DC84BED40FA4074B4BA228BA *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t9591C03D292D1491DC84BED40FA4074B4BA228BA *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t9591C03D292D1491DC84BED40FA4074B4BA228BA *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.SByte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisSByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_mB1165679FE03D30141CFB54B4E2BE302E9BA770A_gshared (int8_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tB8774B9E44E29CAB971A668FD6481EE169AB7512 * L_0 = ((Caster_1_t5B781D2583194FDAD58A1DEB85D1364FB241544E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int8_t L_1 = ___value0;
		NullCheck((Transformer_1_tB8774B9E44E29CAB971A668FD6481EE169AB7512 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_tB8774B9E44E29CAB971A668FD6481EE169AB7512 *, int8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tB8774B9E44E29CAB971A668FD6481EE169AB7512 *)L_0, (int8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.Single>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m70BC7C784870C55D1141CCE9A5418C9043782C55_gshared (float ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tF0690E4E722BA56F3D7C83E9AEB806F0B61B361D * L_0 = ((Caster_1_tFB47F8B972002AEAC72800811486FA13E467A8BF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		float L_1 = ___value0;
		NullCheck((Transformer_1_tF0690E4E722BA56F3D7C83E9AEB806F0B61B361D *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_tF0690E4E722BA56F3D7C83E9AEB806F0B61B361D *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tF0690E4E722BA56F3D7C83E9AEB806F0B61B361D *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.TimeSpan>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisTimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_m29031690307B405A095E8E3B3592FF735CA185CF_gshared (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t8B10503B337E6FE4E07A3B64D22B131931C9A9F4 * L_0 = ((Caster_1_tC8767D376B189ACD381153C9C173514211A0FE0F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_1 = ___value0;
		NullCheck((Transformer_1_t8B10503B337E6FE4E07A3B64D22B131931C9A9F4 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t8B10503B337E6FE4E07A3B64D22B131931C9A9F4 *, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t8B10503B337E6FE4E07A3B64D22B131931C9A9F4 *)L_0, (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.UInt16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisUInt16_tAE45CEF73BF720100519F6867F32145D075F928E_m12942B34C5E83255DBD90AEB2A90B3E7951E8864_gshared (uint16_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t047D5C4AD3C79057AB7D69ECC9D23F74520D09D6 * L_0 = ((Caster_1_t42992A2C9D038623500C211031C77C7208D43273_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint16_t L_1 = ___value0;
		NullCheck((Transformer_1_t047D5C4AD3C79057AB7D69ECC9D23F74520D09D6 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t047D5C4AD3C79057AB7D69ECC9D23F74520D09D6 *, uint16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t047D5C4AD3C79057AB7D69ECC9D23F74520D09D6 *)L_0, (uint16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.UInt32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m71AFD836AA7C64489EEF9407F203B4EC27425961_gshared (uint32_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t31C88D9234A257CF232D08C38BBC668EA052939A * L_0 = ((Caster_1_t87A4B6548293C1368DDFCB40BA06CF49106148F9_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint32_t L_1 = ___value0;
		NullCheck((Transformer_1_t31C88D9234A257CF232D08C38BBC668EA052939A *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t31C88D9234A257CF232D08C38BBC668EA052939A *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t31C88D9234A257CF232D08C38BBC668EA052939A *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.UInt64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_mE1C98F17A06AA92C3F21999A6E0FFE8EBEE7EC00_gshared (uint64_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t1C223741D12F9A057F5F088DE61B4E5D53913211 * L_0 = ((Caster_1_tFD458BDD72B070794987225E3DB7C380E3CC37D2_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint64_t L_1 = ___value0;
		NullCheck((Transformer_1_t1C223741D12F9A057F5F088DE61B4E5D53913211 *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_t1C223741D12F9A057F5F088DE61B4E5D53913211 *, uint64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t1C223741D12F9A057F5F088DE61B4E5D53913211 *)L_0, (uint64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt32>::Cast<System.UIntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t EnumHelper_1_Cast_TisUIntPtr_t_mE20967A9C6BCC22F95A0C0F33954E8F20C099B10_gshared (uintptr_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tEB25E9328D7461EC15D82291238C49E2485032FD * L_0 = ((Caster_1_t941B28C129B116297C114C4519CDE8190AB5C2D9_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uintptr_t L_1 = ___value0;
		NullCheck((Transformer_1_tEB25E9328D7461EC15D82291238C49E2485032FD *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (Transformer_1_tEB25E9328D7461EC15D82291238C49E2485032FD *, uintptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tEB25E9328D7461EC15D82291238C49E2485032FD *)L_0, (uintptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint32_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Boolean>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_mA6D4DB9B4A0AEBFDB545206DD5F50F1B3B99E137_gshared (bool ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tE1D6D1C9A05B546D9C9CE23F63F38C39519B5CF5 * L_0 = ((Caster_1_tD2A776BD441B8E1E656DBDBEA29CE09F6370B01D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		bool L_1 = ___value0;
		NullCheck((Transformer_1_tE1D6D1C9A05B546D9C9CE23F63F38C39519B5CF5 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_tE1D6D1C9A05B546D9C9CE23F63F38C39519B5CF5 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tE1D6D1C9A05B546D9C9CE23F63F38C39519B5CF5 *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Byte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mBB6EBFF5DB5352C897AF4E4871D475088E798CE8_gshared (uint8_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tA04593391E3C9151CF09B88E7F0B95B6EED79BFF * L_0 = ((Caster_1_t482CB7C00B7672BE86AB37B58803EDDA5253C159_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint8_t L_1 = ___value0;
		NullCheck((Transformer_1_tA04593391E3C9151CF09B88E7F0B95B6EED79BFF *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_tA04593391E3C9151CF09B88E7F0B95B6EED79BFF *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tA04593391E3C9151CF09B88E7F0B95B6EED79BFF *)L_0, (uint8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Char>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_m9A4AE5F28B661AB3608A08D4A008C6EFD59C8EF3_gshared (Il2CppChar ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t6A70E5F51E34115D67058F5FBD3AD020056FE5F9 * L_0 = ((Caster_1_tC3C7676E4988AB84AD5D483DF6D6D51F652B8EAA_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Il2CppChar L_1 = ___value0;
		NullCheck((Transformer_1_t6A70E5F51E34115D67058F5FBD3AD020056FE5F9 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t6A70E5F51E34115D67058F5FBD3AD020056FE5F9 *, Il2CppChar, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t6A70E5F51E34115D67058F5FBD3AD020056FE5F9 *)L_0, (Il2CppChar)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisKeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE_mBE29FD6567FF1B7F5CC17B11E8A50CBCB4E457F8_gshared (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t68FC4FB75CD82563AB347351CEFAE5414DA6F5EA * L_0 = ((Caster_1_tAEB42C1C02AED929BC1BEC04D98C0DF0C1BEFFC8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  L_1 = ___value0;
		NullCheck((Transformer_1_t68FC4FB75CD82563AB347351CEFAE5414DA6F5EA *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t68FC4FB75CD82563AB347351CEFAE5414DA6F5EA *, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t68FC4FB75CD82563AB347351CEFAE5414DA6F5EA *)L_0, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.DateTime>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisDateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_mAC44106BE1CC32C04B8323E028317909E16DE5D9_gshared (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t3914ABAA4D6712C66DD4949F2BA84F3EC15B4FA3 * L_0 = ((Caster_1_tCDE1BC83F41D1B9514A301F4F689ECD00B852E4B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_1 = ___value0;
		NullCheck((Transformer_1_t3914ABAA4D6712C66DD4949F2BA84F3EC15B4FA3 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t3914ABAA4D6712C66DD4949F2BA84F3EC15B4FA3 *, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t3914ABAA4D6712C66DD4949F2BA84F3EC15B4FA3 *)L_0, (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.DateTimeOffset>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisDateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_mA92902179E75C6237A1FAF1A93DBC8A54C3D9F1C_gshared (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tF6A13C624CBEF022B6BF46EA8998763A1BCF8A60 * L_0 = ((Caster_1_t648D614B6DE9FA1B879A571830C1B8BC23894BC0_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  L_1 = ___value0;
		NullCheck((Transformer_1_tF6A13C624CBEF022B6BF46EA8998763A1BCF8A60 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_tF6A13C624CBEF022B6BF46EA8998763A1BCF8A60 *, DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tF6A13C624CBEF022B6BF46EA8998763A1BCF8A60 *)L_0, (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Decimal>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisDecimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_mD190CF4C4FFCF5CF0B55A6551271A963D62BACB4_gshared (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t1CCCD2A03706FE289179D42973958253711E1220 * L_0 = ((Caster_1_t4F5F7A38C557F7B9436C5C1F5FF63A6B645F482C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_1 = ___value0;
		NullCheck((Transformer_1_t1CCCD2A03706FE289179D42973958253711E1220 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t1CCCD2A03706FE289179D42973958253711E1220 *, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t1CCCD2A03706FE289179D42973958253711E1220 *)L_0, (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Diagnostics.Tracing.EmptyStruct>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisEmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082_mD96A07754EB55396C0767DDFF0990FDE4642BA5C_gshared (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t26EAA5376E027613D84066BFDACD29135BC0417F * L_0 = ((Caster_1_t816F760E4CB91E8ED4749C51E1906DAA5FBFCBDD_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  L_1 = ___value0;
		NullCheck((Transformer_1_t26EAA5376E027613D84066BFDACD29135BC0417F *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t26EAA5376E027613D84066BFDACD29135BC0417F *, EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t26EAA5376E027613D84066BFDACD29135BC0417F *)L_0, (EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Double>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisDouble_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_m89DE2BCD31E38F694C6C046DD591D93E6A4905BD_gshared (double ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tF7A377BD38E31E579BBB868F25B50E99BE887082 * L_0 = ((Caster_1_tCA85C27159D944B0FA3E9E3AF4E43F1301C0856A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		double L_1 = ___value0;
		NullCheck((Transformer_1_tF7A377BD38E31E579BBB868F25B50E99BE887082 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_tF7A377BD38E31E579BBB868F25B50E99BE887082 *, double, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tF7A377BD38E31E579BBB868F25B50E99BE887082 *)L_0, (double)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Guid>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisGuid_t_m6A79FE5AAC75B2E933B0F2DF4316BDA9E79E6848_gshared (Guid_t  ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t7A3CC6284B43CD7AE97F37A34B608ACB60C9BBF4 * L_0 = ((Caster_1_t32E967508060A04E0F6F4A5A9E516B2751446098_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		Guid_t  L_1 = ___value0;
		NullCheck((Transformer_1_t7A3CC6284B43CD7AE97F37A34B608ACB60C9BBF4 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t7A3CC6284B43CD7AE97F37A34B608ACB60C9BBF4 *, Guid_t , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t7A3CC6284B43CD7AE97F37A34B608ACB60C9BBF4 *)L_0, (Guid_t )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Int16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisInt16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_mED333DF6FD1DC9723DE9E7A47A894EF358196150_gshared (int16_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t07F206606D946D6F7126E2639D2BA30EE77B275C * L_0 = ((Caster_1_tF3538AE7B545B5E66C20C4C751A1EAEE76E82FEF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int16_t L_1 = ___value0;
		NullCheck((Transformer_1_t07F206606D946D6F7126E2639D2BA30EE77B275C *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t07F206606D946D6F7126E2639D2BA30EE77B275C *, int16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t07F206606D946D6F7126E2639D2BA30EE77B275C *)L_0, (int16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Int32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mC432022B01CCED53D1279F08CCAAB4DBB83FBB41_gshared (int32_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tF8885F335E1C8610DD2BC9AC39EF6912377CA731 * L_0 = ((Caster_1_t053E7CA3C6B09080F453D7B9ADCED0B07B7355B2_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int32_t L_1 = ___value0;
		NullCheck((Transformer_1_tF8885F335E1C8610DD2BC9AC39EF6912377CA731 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_tF8885F335E1C8610DD2BC9AC39EF6912377CA731 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tF8885F335E1C8610DD2BC9AC39EF6912377CA731 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Int64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisInt64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_m51B47E785BA2597ABFBD0A9E7CAEBF2ECF1877AC_gshared (int64_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tFC99DD5D67093DCEBB44F3A5BFDC47FDBBD7CF71 * L_0 = ((Caster_1_t3DD97367B1E8C9F032197273CF90E5919C74B518_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int64_t L_1 = ___value0;
		NullCheck((Transformer_1_tFC99DD5D67093DCEBB44F3A5BFDC47FDBBD7CF71 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_tFC99DD5D67093DCEBB44F3A5BFDC47FDBBD7CF71 *, int64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tFC99DD5D67093DCEBB44F3A5BFDC47FDBBD7CF71 *)L_0, (int64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.IntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisIntPtr_t_m1BE5340DBEDC930432982B6738A5820A9A4FCD42_gshared (intptr_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t8E4B28C9AAE813C657018A0863EED6247E00BC14 * L_0 = ((Caster_1_t3E5340F9C3D63DE7B3280B37BCD14B25362CC87E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		intptr_t L_1 = ___value0;
		NullCheck((Transformer_1_t8E4B28C9AAE813C657018A0863EED6247E00BC14 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t8E4B28C9AAE813C657018A0863EED6247E00BC14 *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t8E4B28C9AAE813C657018A0863EED6247E00BC14 *)L_0, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Object>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisRuntimeObject_m24E9DBADCE63823F1FB2AA2A116982AD2BEA67FF_gshared (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t402296E3476F5F09B16B675F17D3CDA6FCB34A9B * L_0 = ((Caster_1_t1C8C6FEDED1BBCC86BF7F183BAAA65A65E37F6B9_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck((Transformer_1_t402296E3476F5F09B16B675F17D3CDA6FCB34A9B *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t402296E3476F5F09B16B675F17D3CDA6FCB34A9B *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t402296E3476F5F09B16B675F17D3CDA6FCB34A9B *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.SByte>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisSByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_m40171CC2B05F787A453D415B7B354C70FA91EB3C_gshared (int8_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t2F20C0EB7F9357AF924B13ACE76627B27A3EE8C6 * L_0 = ((Caster_1_t261B67D54DDBEE2E45C594357E6132EBCFC20C43_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		int8_t L_1 = ___value0;
		NullCheck((Transformer_1_t2F20C0EB7F9357AF924B13ACE76627B27A3EE8C6 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t2F20C0EB7F9357AF924B13ACE76627B27A3EE8C6 *, int8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t2F20C0EB7F9357AF924B13ACE76627B27A3EE8C6 *)L_0, (int8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.Single>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m08399F0F8C4F12BD2E29A845B2D5F7796C41B29E_gshared (float ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t589CB07AE354480F71F892CCEF416B4B90FD20E1 * L_0 = ((Caster_1_t758D846F58655E22B936DD8A2DB64283EA3805A2_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		float L_1 = ___value0;
		NullCheck((Transformer_1_t589CB07AE354480F71F892CCEF416B4B90FD20E1 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t589CB07AE354480F71F892CCEF416B4B90FD20E1 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t589CB07AE354480F71F892CCEF416B4B90FD20E1 *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.TimeSpan>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisTimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_mBD8CF0C29D9F8046510C4F5872622EB351F706AE_gshared (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t92CD444E28392786C719A80E3BD6F19859C0F66F * L_0 = ((Caster_1_t01551B272EDA007DB4640BBDA9745FCD8150E90F_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_1 = ___value0;
		NullCheck((Transformer_1_t92CD444E28392786C719A80E3BD6F19859C0F66F *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t92CD444E28392786C719A80E3BD6F19859C0F66F *, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t92CD444E28392786C719A80E3BD6F19859C0F66F *)L_0, (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.UInt16>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisUInt16_tAE45CEF73BF720100519F6867F32145D075F928E_m663895C442194B5C317393C7D716656B08408CAE_gshared (uint16_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_tEBBF3209CF2963A466018B425608A6F9A5DB0E30 * L_0 = ((Caster_1_t927662BF5FDD93421514AD6DFF5810834FC65437_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint16_t L_1 = ___value0;
		NullCheck((Transformer_1_tEBBF3209CF2963A466018B425608A6F9A5DB0E30 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_tEBBF3209CF2963A466018B425608A6F9A5DB0E30 *, uint16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_tEBBF3209CF2963A466018B425608A6F9A5DB0E30 *)L_0, (uint16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.UInt32>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m3A2842E06D5905F6E685A3033ECE6BB76E8912CF_gshared (uint32_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t8958FB9131F13E8258DE33FA6B69C3FF6197E880 * L_0 = ((Caster_1_t4FBD60419DE1522A1D8D6D26E18CCE6C5CBE862C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint32_t L_1 = ___value0;
		NullCheck((Transformer_1_t8958FB9131F13E8258DE33FA6B69C3FF6197E880 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t8958FB9131F13E8258DE33FA6B69C3FF6197E880 *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t8958FB9131F13E8258DE33FA6B69C3FF6197E880 *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.UInt64>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_m4F2C115C6D08D4097EC80756F75A08786FF84C9B_gshared (uint64_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t3B28CAE7458C713C7593265008775661D4E2EBAE * L_0 = ((Caster_1_tCD382BFE18B540FD55BB3D1DE0739E2718F2B9F7_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uint64_t L_1 = ___value0;
		NullCheck((Transformer_1_t3B28CAE7458C713C7593265008775661D4E2EBAE *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t3B28CAE7458C713C7593265008775661D4E2EBAE *, uint64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t3B28CAE7458C713C7593265008775661D4E2EBAE *)L_0, (uint64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint64_t)L_2;
	}
}
// UnderlyingType System.Diagnostics.Tracing.EnumHelper`1<System.UInt64>::Cast<System.UIntPtr>(ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumHelper_1_Cast_TisUIntPtr_t_mF6BC18592D238BE188D32FDF0722A5D2882A7763_gshared (uintptr_t ___value0, const RuntimeMethod* method)
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Transformer_1_t77F1FDC69827B944451ACE5D2F9AF2FF2BBE0913 * L_0 = ((Caster_1_tE9665C2AD78EA0AECF9AA50DC59E256EA789B56B_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		uintptr_t L_1 = ___value0;
		NullCheck((Transformer_1_t77F1FDC69827B944451ACE5D2F9AF2FF2BBE0913 *)L_0);
		uint64_t L_2 = ((  uint64_t (*) (Transformer_1_t77F1FDC69827B944451ACE5D2F9AF2FF2BBE0913 *, uintptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Transformer_1_t77F1FDC69827B944451ACE5D2F9AF2FF2BBE0913 *)L_0, (uintptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (uint64_t)L_2;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<System.Byte>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m703A74A313FE9EA25911440A31960B0CCF2A3324_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  V_2;
	memset((&V_2), 0, sizeof(V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  L_3 = V_1;
		V_0 = (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 )L_3;
		NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  L_4 = V_0;
		V_2 = (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  L_5 = V_2;
		return (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 )L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<System.Int32>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m79812A22661959D2B4F290958FD9C61E69528D28_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  V_2;
	memset((&V_2), 0, sizeof(V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  L_3 = V_1;
		V_0 = (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF )L_3;
		NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  L_4 = V_0;
		V_2 = (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  L_5 = V_2;
		return (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF )L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<System.Single>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t2F93EF84A543D826D53EFEAFE52F5C42392D0D67  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mC4C9F4383DD47A0D830B565BC325DF3A3D31A679_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_t2F93EF84A543D826D53EFEAFE52F5C42392D0D67  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t2F93EF84A543D826D53EFEAFE52F5C42392D0D67  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t2F93EF84A543D826D53EFEAFE52F5C42392D0D67  V_2;
	memset((&V_2), 0, sizeof(V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t2F93EF84A543D826D53EFEAFE52F5C42392D0D67 ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_t2F93EF84A543D826D53EFEAFE52F5C42392D0D67  L_3 = V_1;
		V_0 = (NativeArray_1_t2F93EF84A543D826D53EFEAFE52F5C42392D0D67 )L_3;
		NativeArray_1_t2F93EF84A543D826D53EFEAFE52F5C42392D0D67  L_4 = V_0;
		V_2 = (NativeArray_1_t2F93EF84A543D826D53EFEAFE52F5C42392D0D67 )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t2F93EF84A543D826D53EFEAFE52F5C42392D0D67  L_5 = V_2;
		return (NativeArray_1_t2F93EF84A543D826D53EFEAFE52F5C42392D0D67 )L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<System.UInt32>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t46D89A67B73570077E7280CB4C709CB4E66EEA5E  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_mBE9B1EC0EF64CBEB4A3CB84F91EFF165F4D4EA68_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_t46D89A67B73570077E7280CB4C709CB4E66EEA5E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t46D89A67B73570077E7280CB4C709CB4E66EEA5E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t46D89A67B73570077E7280CB4C709CB4E66EEA5E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t46D89A67B73570077E7280CB4C709CB4E66EEA5E ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_t46D89A67B73570077E7280CB4C709CB4E66EEA5E  L_3 = V_1;
		V_0 = (NativeArray_1_t46D89A67B73570077E7280CB4C709CB4E66EEA5E )L_3;
		NativeArray_1_t46D89A67B73570077E7280CB4C709CB4E66EEA5E  L_4 = V_0;
		V_2 = (NativeArray_1_t46D89A67B73570077E7280CB4C709CB4E66EEA5E )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t46D89A67B73570077E7280CB4C709CB4E66EEA5E  L_5 = V_2;
		return (NativeArray_1_t46D89A67B73570077E7280CB4C709CB4E66EEA5E )L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Experimental.GlobalIllumination.LightDataGI>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2_mD7AFB293FDB633E3BAAE963C0F5DB9A4A25E9649_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  L_3 = V_1;
		V_0 = (NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE )L_3;
		NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  L_4 = V_0;
		V_2 = (NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  L_5 = V_2;
		return (NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE )L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Plane>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPlane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED_m9610FDE0388D2A14248C97656170DC5B83C8BA88_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  V_2;
	memset((&V_2), 0, sizeof(V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  L_3 = V_1;
		V_0 = (NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 )L_3;
		NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  L_4 = V_0;
		V_2 = (NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  L_5 = V_2;
		return (NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 )L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Rendering.BatchVisibility>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBatchVisibility_t56334E279A62622BD0640403186E9A1017CF3062_mB397E70D8182B23E8F1F1F3D18CC3EF2290AC0D6_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  V_2;
	memset((&V_2), 0, sizeof(V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  L_3 = V_1;
		V_0 = (NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 )L_3;
		NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  L_4 = V_0;
		V_2 = (NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  L_5 = V_2;
		return (NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 )L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Rendering.VisibleLight>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t89C3343A50E798CEF85D6412699D078CA79D1638  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVisibleLight_t0FB9CD9852C150E7F4C6EA0005A132D453E1A9F4_m3E7AB3E41E3D5A232EA0A04C753B0A12F03E3417_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_t89C3343A50E798CEF85D6412699D078CA79D1638  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t89C3343A50E798CEF85D6412699D078CA79D1638  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t89C3343A50E798CEF85D6412699D078CA79D1638  V_2;
	memset((&V_2), 0, sizeof(V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t89C3343A50E798CEF85D6412699D078CA79D1638 ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_t89C3343A50E798CEF85D6412699D078CA79D1638  L_3 = V_1;
		V_0 = (NativeArray_1_t89C3343A50E798CEF85D6412699D078CA79D1638 )L_3;
		NativeArray_1_t89C3343A50E798CEF85D6412699D078CA79D1638  L_4 = V_0;
		V_2 = (NativeArray_1_t89C3343A50E798CEF85D6412699D078CA79D1638 )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t89C3343A50E798CEF85D6412699D078CA79D1638  L_5 = V_2;
		return (NativeArray_1_t89C3343A50E798CEF85D6412699D078CA79D1638 )L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Rendering.VisibleReflectionProbe>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tB89B8CD2BB5126750F1D718104BBEFFC38DE8FEC  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVisibleReflectionProbe_t4446FDAB2C6F98E73568DAA5D7FA1B835FCB4215_m9ADAACD043A64833A98B368479EE957732DBDD1F_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_tB89B8CD2BB5126750F1D718104BBEFFC38DE8FEC  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tB89B8CD2BB5126750F1D718104BBEFFC38DE8FEC  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tB89B8CD2BB5126750F1D718104BBEFFC38DE8FEC  V_2;
	memset((&V_2), 0, sizeof(V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tB89B8CD2BB5126750F1D718104BBEFFC38DE8FEC ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_tB89B8CD2BB5126750F1D718104BBEFFC38DE8FEC  L_3 = V_1;
		V_0 = (NativeArray_1_tB89B8CD2BB5126750F1D718104BBEFFC38DE8FEC )L_3;
		NativeArray_1_tB89B8CD2BB5126750F1D718104BBEFFC38DE8FEC  L_4 = V_0;
		V_2 = (NativeArray_1_tB89B8CD2BB5126750F1D718104BBEFFC38DE8FEC )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tB89B8CD2BB5126750F1D718104BBEFFC38DE8FEC  L_5 = V_2;
		return (NativeArray_1_tB89B8CD2BB5126750F1D718104BBEFFC38DE8FEC )L_5;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.Rendering.AsyncGPUReadbackRequest::GetData<System.Single>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t2F93EF84A543D826D53EFEAFE52F5C42392D0D67  AsyncGPUReadbackRequest_GetData_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m3103D253E0298B049D6FE4206A9E18E716E5E2B1_gshared (AsyncGPUReadbackRequest_t0287C47661E145BF44C2FC0DBB1ECD73FD958B5C * __this, int32_t ___layer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AsyncGPUReadbackRequest_GetData_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m3103D253E0298B049D6FE4206A9E18E716E5E2B1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NativeArray_1_t2F93EF84A543D826D53EFEAFE52F5C42392D0D67  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	NativeArray_1_t2F93EF84A543D826D53EFEAFE52F5C42392D0D67  V_4;
	memset((&V_4), 0, sizeof(V_4));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	{
		bool L_0 = AsyncGPUReadbackRequest_get_done_mC8E8C89FB97F37B04F72B914C0363618A557EA89((AsyncGPUReadbackRequest_t0287C47661E145BF44C2FC0DBB1ECD73FD958B5C *)(AsyncGPUReadbackRequest_t0287C47661E145BF44C2FC0DBB1ECD73FD958B5C *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		bool L_1 = AsyncGPUReadbackRequest_get_hasError_m0BFEA26DDBE594511DA5CD3FE90706E40377CE10((AsyncGPUReadbackRequest_t0287C47661E145BF44C2FC0DBB1ECD73FD958B5C *)(AsyncGPUReadbackRequest_t0287C47661E145BF44C2FC0DBB1ECD73FD958B5C *)__this, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
	}

IL_0012:
	{
		V_2 = (bool)G_B3_0;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_3 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_3, (String_t*)_stringLiteralD14430F2509574E600AA8D7284D7B032B55DE20F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, AsyncGPUReadbackRequest_GetData_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m3103D253E0298B049D6FE4206A9E18E716E5E2B1_RuntimeMethod_var);
	}

IL_0021:
	{
		int32_t L_4 = ___layer0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_5 = ___layer0;
		int32_t L_6 = AsyncGPUReadbackRequest_get_layerCount_m68F01913C4890956394E29B3309C2E9D559453C2((AsyncGPUReadbackRequest_t0287C47661E145BF44C2FC0DBB1ECD73FD958B5C *)(AsyncGPUReadbackRequest_t0287C47661E145BF44C2FC0DBB1ECD73FD958B5C *)__this, /*hidden argument*/NULL);
		G_B8_0 = ((((int32_t)((((int32_t)L_5) < ((int32_t)L_6))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0034;
	}

IL_0033:
	{
		G_B8_0 = 1;
	}

IL_0034:
	{
		V_3 = (bool)G_B8_0;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_8 = ___layer0;
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_9);
		int32_t L_11 = AsyncGPUReadbackRequest_get_layerCount_m68F01913C4890956394E29B3309C2E9D559453C2((AsyncGPUReadbackRequest_t0287C47661E145BF44C2FC0DBB1ECD73FD958B5C *)(AsyncGPUReadbackRequest_t0287C47661E145BF44C2FC0DBB1ECD73FD958B5C *)__this, /*hidden argument*/NULL);
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_12);
		String_t* L_14 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A((String_t*)_stringLiteral24AD1E07EB96FE8A3552CDF928F010338C1E0013, (RuntimeObject *)L_10, (RuntimeObject *)L_13, /*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_15 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_15, (String_t*)L_14, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, AsyncGPUReadbackRequest_GetData_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m3103D253E0298B049D6FE4206A9E18E716E5E2B1_RuntimeMethod_var);
	}

IL_0059:
	{
		int32_t L_16 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (int32_t)L_16;
		int32_t L_17 = ___layer0;
		intptr_t L_18 = AsyncGPUReadbackRequest_GetDataRaw_m400CF07C52652A7156FD8FE7F3BFAD26379F9658((AsyncGPUReadbackRequest_t0287C47661E145BF44C2FC0DBB1ECD73FD958B5C *)(AsyncGPUReadbackRequest_t0287C47661E145BF44C2FC0DBB1ECD73FD958B5C *)__this, (int32_t)L_17, /*hidden argument*/NULL);
		void* L_19 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)L_18, /*hidden argument*/NULL);
		int32_t L_20 = AsyncGPUReadbackRequest_get_layerDataSize_m31C733B287D137534FCCDA037427EF079DA19CC3((AsyncGPUReadbackRequest_t0287C47661E145BF44C2FC0DBB1ECD73FD958B5C *)(AsyncGPUReadbackRequest_t0287C47661E145BF44C2FC0DBB1ECD73FD958B5C *)__this, /*hidden argument*/NULL);
		int32_t L_21 = V_0;
		NativeArray_1_t2F93EF84A543D826D53EFEAFE52F5C42392D0D67  L_22 = ((  NativeArray_1_t2F93EF84A543D826D53EFEAFE52F5C42392D0D67  (*) (void*, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((void*)(void*)L_19, (int32_t)((int32_t)((int32_t)L_20/(int32_t)L_21)), (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_1 = (NativeArray_1_t2F93EF84A543D826D53EFEAFE52F5C42392D0D67 )L_22;
		NativeArray_1_t2F93EF84A543D826D53EFEAFE52F5C42392D0D67  L_23 = V_1;
		V_4 = (NativeArray_1_t2F93EF84A543D826D53EFEAFE52F5C42392D0D67 )L_23;
		goto IL_007f;
	}

IL_007f:
	{
		NativeArray_1_t2F93EF84A543D826D53EFEAFE52F5C42392D0D67  L_24 = V_4;
		return (NativeArray_1_t2F93EF84A543D826D53EFEAFE52F5C42392D0D67 )L_24;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t2F93EF84A543D826D53EFEAFE52F5C42392D0D67  AsyncGPUReadbackRequest_GetData_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m3103D253E0298B049D6FE4206A9E18E716E5E2B1_AdjustorThunk (RuntimeObject * __this, int32_t ___layer0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AsyncGPUReadbackRequest_t0287C47661E145BF44C2FC0DBB1ECD73FD958B5C * _thisAdjusted = reinterpret_cast<AsyncGPUReadbackRequest_t0287C47661E145BF44C2FC0DBB1ECD73FD958B5C *>(__this + _offset);
	return AsyncGPUReadbackRequest_GetData_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m3103D253E0298B049D6FE4206A9E18E716E5E2B1(_thisAdjusted, ___layer0, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.Rendering.AsyncGPUReadbackRequest::GetData<System.UInt32>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t46D89A67B73570077E7280CB4C709CB4E66EEA5E  AsyncGPUReadbackRequest_GetData_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m740336FEC66F6FA954ABCDDB886C64B4D5D7B867_gshared (AsyncGPUReadbackRequest_t0287C47661E145BF44C2FC0DBB1ECD73FD958B5C * __this, int32_t ___layer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AsyncGPUReadbackRequest_GetData_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m740336FEC66F6FA954ABCDDB886C64B4D5D7B867_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NativeArray_1_t46D89A67B73570077E7280CB4C709CB4E66EEA5E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	NativeArray_1_t46D89A67B73570077E7280CB4C709CB4E66EEA5E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	{
		bool L_0 = AsyncGPUReadbackRequest_get_done_mC8E8C89FB97F37B04F72B914C0363618A557EA89((AsyncGPUReadbackRequest_t0287C47661E145BF44C2FC0DBB1ECD73FD958B5C *)(AsyncGPUReadbackRequest_t0287C47661E145BF44C2FC0DBB1ECD73FD958B5C *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		bool L_1 = AsyncGPUReadbackRequest_get_hasError_m0BFEA26DDBE594511DA5CD3FE90706E40377CE10((AsyncGPUReadbackRequest_t0287C47661E145BF44C2FC0DBB1ECD73FD958B5C *)(AsyncGPUReadbackRequest_t0287C47661E145BF44C2FC0DBB1ECD73FD958B5C *)__this, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
	}

IL_0012:
	{
		V_2 = (bool)G_B3_0;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_3 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_3, (String_t*)_stringLiteralD14430F2509574E600AA8D7284D7B032B55DE20F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, AsyncGPUReadbackRequest_GetData_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m740336FEC66F6FA954ABCDDB886C64B4D5D7B867_RuntimeMethod_var);
	}

IL_0021:
	{
		int32_t L_4 = ___layer0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_5 = ___layer0;
		int32_t L_6 = AsyncGPUReadbackRequest_get_layerCount_m68F01913C4890956394E29B3309C2E9D559453C2((AsyncGPUReadbackRequest_t0287C47661E145BF44C2FC0DBB1ECD73FD958B5C *)(AsyncGPUReadbackRequest_t0287C47661E145BF44C2FC0DBB1ECD73FD958B5C *)__this, /*hidden argument*/NULL);
		G_B8_0 = ((((int32_t)((((int32_t)L_5) < ((int32_t)L_6))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0034;
	}

IL_0033:
	{
		G_B8_0 = 1;
	}

IL_0034:
	{
		V_3 = (bool)G_B8_0;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_8 = ___layer0;
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_9);
		int32_t L_11 = AsyncGPUReadbackRequest_get_layerCount_m68F01913C4890956394E29B3309C2E9D559453C2((AsyncGPUReadbackRequest_t0287C47661E145BF44C2FC0DBB1ECD73FD958B5C *)(AsyncGPUReadbackRequest_t0287C47661E145BF44C2FC0DBB1ECD73FD958B5C *)__this, /*hidden argument*/NULL);
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_12);
		String_t* L_14 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A((String_t*)_stringLiteral24AD1E07EB96FE8A3552CDF928F010338C1E0013, (RuntimeObject *)L_10, (RuntimeObject *)L_13, /*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_15 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_15, (String_t*)L_14, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, AsyncGPUReadbackRequest_GetData_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m740336FEC66F6FA954ABCDDB886C64B4D5D7B867_RuntimeMethod_var);
	}

IL_0059:
	{
		int32_t L_16 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (int32_t)L_16;
		int32_t L_17 = ___layer0;
		intptr_t L_18 = AsyncGPUReadbackRequest_GetDataRaw_m400CF07C52652A7156FD8FE7F3BFAD26379F9658((AsyncGPUReadbackRequest_t0287C47661E145BF44C2FC0DBB1ECD73FD958B5C *)(AsyncGPUReadbackRequest_t0287C47661E145BF44C2FC0DBB1ECD73FD958B5C *)__this, (int32_t)L_17, /*hidden argument*/NULL);
		void* L_19 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)L_18, /*hidden argument*/NULL);
		int32_t L_20 = AsyncGPUReadbackRequest_get_layerDataSize_m31C733B287D137534FCCDA037427EF079DA19CC3((AsyncGPUReadbackRequest_t0287C47661E145BF44C2FC0DBB1ECD73FD958B5C *)(AsyncGPUReadbackRequest_t0287C47661E145BF44C2FC0DBB1ECD73FD958B5C *)__this, /*hidden argument*/NULL);
		int32_t L_21 = V_0;
		NativeArray_1_t46D89A67B73570077E7280CB4C709CB4E66EEA5E  L_22 = ((  NativeArray_1_t46D89A67B73570077E7280CB4C709CB4E66EEA5E  (*) (void*, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((void*)(void*)L_19, (int32_t)((int32_t)((int32_t)L_20/(int32_t)L_21)), (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_1 = (NativeArray_1_t46D89A67B73570077E7280CB4C709CB4E66EEA5E )L_22;
		NativeArray_1_t46D89A67B73570077E7280CB4C709CB4E66EEA5E  L_23 = V_1;
		V_4 = (NativeArray_1_t46D89A67B73570077E7280CB4C709CB4E66EEA5E )L_23;
		goto IL_007f;
	}

IL_007f:
	{
		NativeArray_1_t46D89A67B73570077E7280CB4C709CB4E66EEA5E  L_24 = V_4;
		return (NativeArray_1_t46D89A67B73570077E7280CB4C709CB4E66EEA5E )L_24;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t46D89A67B73570077E7280CB4C709CB4E66EEA5E  AsyncGPUReadbackRequest_GetData_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m740336FEC66F6FA954ABCDDB886C64B4D5D7B867_AdjustorThunk (RuntimeObject * __this, int32_t ___layer0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AsyncGPUReadbackRequest_t0287C47661E145BF44C2FC0DBB1ECD73FD958B5C * _thisAdjusted = reinterpret_cast<AsyncGPUReadbackRequest_t0287C47661E145BF44C2FC0DBB1ECD73FD958B5C *>(__this + _offset);
	return AsyncGPUReadbackRequest_GetData_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m740336FEC66F6FA954ABCDDB886C64B4D5D7B867(_thisAdjusted, ___layer0, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.Rendering.CullingResults::GetNativeArray<UnityEngine.Rendering.VisibleLight>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t89C3343A50E798CEF85D6412699D078CA79D1638  CullingResults_GetNativeArray_TisVisibleLight_t0FB9CD9852C150E7F4C6EA0005A132D453E1A9F4_mACDB0C7A85042F3D0146F419B66D8DE08B767163_gshared (CullingResults_tFCB058F194E02A190E4719CFE5BC2A5A1BB1C21B * __this, void* ___dataPointer0, int32_t ___length1, const RuntimeMethod* method)
{
	NativeArray_1_t89C3343A50E798CEF85D6412699D078CA79D1638  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t89C3343A50E798CEF85D6412699D078CA79D1638  V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		void* L_0 = ___dataPointer0;
		int32_t L_1 = ___length1;
		NativeArray_1_t89C3343A50E798CEF85D6412699D078CA79D1638  L_2 = ((  NativeArray_1_t89C3343A50E798CEF85D6412699D078CA79D1638  (*) (void*, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((void*)(void*)L_0, (int32_t)L_1, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (NativeArray_1_t89C3343A50E798CEF85D6412699D078CA79D1638 )L_2;
		NativeArray_1_t89C3343A50E798CEF85D6412699D078CA79D1638  L_3 = V_0;
		V_1 = (NativeArray_1_t89C3343A50E798CEF85D6412699D078CA79D1638 )L_3;
		goto IL_000e;
	}

IL_000e:
	{
		NativeArray_1_t89C3343A50E798CEF85D6412699D078CA79D1638  L_4 = V_1;
		return (NativeArray_1_t89C3343A50E798CEF85D6412699D078CA79D1638 )L_4;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t89C3343A50E798CEF85D6412699D078CA79D1638  CullingResults_GetNativeArray_TisVisibleLight_t0FB9CD9852C150E7F4C6EA0005A132D453E1A9F4_mACDB0C7A85042F3D0146F419B66D8DE08B767163_AdjustorThunk (RuntimeObject * __this, void* ___dataPointer0, int32_t ___length1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CullingResults_tFCB058F194E02A190E4719CFE5BC2A5A1BB1C21B * _thisAdjusted = reinterpret_cast<CullingResults_tFCB058F194E02A190E4719CFE5BC2A5A1BB1C21B *>(__this + _offset);
	return CullingResults_GetNativeArray_TisVisibleLight_t0FB9CD9852C150E7F4C6EA0005A132D453E1A9F4_mACDB0C7A85042F3D0146F419B66D8DE08B767163(_thisAdjusted, ___dataPointer0, ___length1, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.Rendering.CullingResults::GetNativeArray<UnityEngine.Rendering.VisibleReflectionProbe>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tB89B8CD2BB5126750F1D718104BBEFFC38DE8FEC  CullingResults_GetNativeArray_TisVisibleReflectionProbe_t4446FDAB2C6F98E73568DAA5D7FA1B835FCB4215_mCA58080AE6F11DD97BF899D6A8CEA9A76521D540_gshared (CullingResults_tFCB058F194E02A190E4719CFE5BC2A5A1BB1C21B * __this, void* ___dataPointer0, int32_t ___length1, const RuntimeMethod* method)
{
	NativeArray_1_tB89B8CD2BB5126750F1D718104BBEFFC38DE8FEC  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tB89B8CD2BB5126750F1D718104BBEFFC38DE8FEC  V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		void* L_0 = ___dataPointer0;
		int32_t L_1 = ___length1;
		NativeArray_1_tB89B8CD2BB5126750F1D718104BBEFFC38DE8FEC  L_2 = ((  NativeArray_1_tB89B8CD2BB5126750F1D718104BBEFFC38DE8FEC  (*) (void*, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((void*)(void*)L_0, (int32_t)L_1, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (NativeArray_1_tB89B8CD2BB5126750F1D718104BBEFFC38DE8FEC )L_2;
		NativeArray_1_tB89B8CD2BB5126750F1D718104BBEFFC38DE8FEC  L_3 = V_0;
		V_1 = (NativeArray_1_tB89B8CD2BB5126750F1D718104BBEFFC38DE8FEC )L_3;
		goto IL_000e;
	}

IL_000e:
	{
		NativeArray_1_tB89B8CD2BB5126750F1D718104BBEFFC38DE8FEC  L_4 = V_1;
		return (NativeArray_1_tB89B8CD2BB5126750F1D718104BBEFFC38DE8FEC )L_4;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tB89B8CD2BB5126750F1D718104BBEFFC38DE8FEC  CullingResults_GetNativeArray_TisVisibleReflectionProbe_t4446FDAB2C6F98E73568DAA5D7FA1B835FCB4215_mCA58080AE6F11DD97BF899D6A8CEA9A76521D540_AdjustorThunk (RuntimeObject * __this, void* ___dataPointer0, int32_t ___length1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CullingResults_tFCB058F194E02A190E4719CFE5BC2A5A1BB1C21B * _thisAdjusted = reinterpret_cast<CullingResults_tFCB058F194E02A190E4719CFE5BC2A5A1BB1C21B *>(__this + _offset);
	return CullingResults_GetNativeArray_TisVisibleReflectionProbe_t4446FDAB2C6F98E73568DAA5D7FA1B835FCB4215_mCA58080AE6F11DD97BF899D6A8CEA9A76521D540(_thisAdjusted, ___dataPointer0, ___length1, method);
}
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderFunc`1<PassData> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph/RenderPass::GetExecuteDelegate<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderFunc_1_t6963E4F494F441886F42D47BFB357196C662DDB7 * RenderPass_GetExecuteDelegate_TisRuntimeObject_m23FB2C238E4C2C60FF27713DF813A667926D00F5_gshared (RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RenderPass_GetExecuteDelegate_TisRuntimeObject_m23FB2C238E4C2C60FF27713DF813A667926D00F5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 756));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 757));
	{
		// where PassData : class, new() => ((RenderPass<PassData>)this).renderFunc;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 758));
		NullCheck(((RenderPass_1_t8E26DF96C7D796453D4050436A62B01576E92BA8 *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		RenderFunc_1_t6963E4F494F441886F42D47BFB357196C662DDB7 * L_0 = (RenderFunc_1_t6963E4F494F441886F42D47BFB357196C662DDB7 *)((RenderPass_1_t8E26DF96C7D796453D4050436A62B01576E92BA8 *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_renderFunc_11();
		return (RenderFunc_1_t6963E4F494F441886F42D47BFB357196C662DDB7 *)L_0;
	}
}
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphBuilder UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph::AddRenderPass<System.Object>(System.String,PassData&,UnityEngine.Rendering.ProfilingSampler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderGraphBuilder_t9026010D496B7D7D33BBFD0350D5014FAC7EF312  RenderGraph_AddRenderPass_TisRuntimeObject_mDA964C9D83D9A6356BAF105F8EBFB0AC78E7090B_gshared (RenderGraph_t658E15F42351EE5E92398FC4EF9B25E75AC71042 * __this, String_t* ___passName0, RuntimeObject ** ___passData1, ProfilingSampler_t00574F1AB7FB336BBFCE3DE575A86B5DD2C9F99D * ___sampler2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RenderGraph_AddRenderPass_TisRuntimeObject_mDA964C9D83D9A6356BAF105F8EBFB0AC78E7090B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RenderPass_1_t8E26DF96C7D796453D4050436A62B01576E92BA8 * V_0 = NULL;
	RenderGraphBuilder_t9026010D496B7D7D33BBFD0350D5014FAC7EF312  V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___passName0), (&___passData1), (&___sampler2));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 478));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 479));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 480));
		// var renderPass = m_RenderGraphPool.Get<RenderPass<PassData>>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 481));
		RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 * L_0 = (RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 *)__this->get_m_RenderGraphPool_2();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 491));
		NullCheck((RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 *)L_0);
		RenderPass_1_t8E26DF96C7D796453D4050436A62B01576E92BA8 * L_1 = ((  RenderPass_1_t8E26DF96C7D796453D4050436A62B01576E92BA8 * (*) (RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 491));
		V_0 = (RenderPass_1_t8E26DF96C7D796453D4050436A62B01576E92BA8 *)L_1;
		// renderPass.Clear();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 482));
		RenderPass_1_t8E26DF96C7D796453D4050436A62B01576E92BA8 * L_2 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 492));
		NullCheck((RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035 *)L_2);
		RenderPass_Clear_m216A695EE93282211427AFAE4876C742D5CBE627((RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035 *)L_2, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 492));
		// renderPass.index = m_RenderPasses.Count;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 483));
		RenderPass_1_t8E26DF96C7D796453D4050436A62B01576E92BA8 * L_3 = V_0;
		List_1_t7BE901F61F1A406FC143D643C9923B05DE767845 * L_4 = (List_1_t7BE901F61F1A406FC143D643C9923B05DE767845 *)__this->get_m_RenderPasses_3();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 493));
		NullCheck((List_1_t7BE901F61F1A406FC143D643C9923B05DE767845 *)L_4);
		int32_t L_5 = List_1_get_Count_m0B6FAC22324A918CFA9E37637257E82823029437_inline((List_1_t7BE901F61F1A406FC143D643C9923B05DE767845 *)L_4, /*hidden argument*/List_1_get_Count_m0B6FAC22324A918CFA9E37637257E82823029437_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 493));
		NullCheck(L_3);
		((RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035 *)L_3)->set_index_1(L_5);
		// renderPass.data = m_RenderGraphPool.Get<PassData>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 484));
		RenderPass_1_t8E26DF96C7D796453D4050436A62B01576E92BA8 * L_6 = V_0;
		RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 * L_7 = (RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 *)__this->get_m_RenderGraphPool_2();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 494));
		NullCheck((RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 *)L_7);
		RuntimeObject * L_8 = ((  RuntimeObject * (*) (RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 494));
		NullCheck(L_6);
		L_6->set_data_10(L_8);
		// renderPass.name = passName;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 485));
		RenderPass_1_t8E26DF96C7D796453D4050436A62B01576E92BA8 * L_9 = V_0;
		String_t* L_10 = ___passName0;
		NullCheck(L_9);
		((RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035 *)L_9)->set_name_0(L_10);
		// renderPass.customSampler = sampler;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 486));
		RenderPass_1_t8E26DF96C7D796453D4050436A62B01576E92BA8 * L_11 = V_0;
		ProfilingSampler_t00574F1AB7FB336BBFCE3DE575A86B5DD2C9F99D * L_12 = ___sampler2;
		NullCheck(L_11);
		((RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035 *)L_11)->set_customSampler_2(L_12);
		// passData = renderPass.data;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 487));
		RuntimeObject ** L_13 = ___passData1;
		RenderPass_1_t8E26DF96C7D796453D4050436A62B01576E92BA8 * L_14 = V_0;
		NullCheck(L_14);
		RuntimeObject * L_15 = (RuntimeObject *)L_14->get_data_10();
		*(RuntimeObject **)L_13 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_13, (void*)L_15);
		// m_RenderPasses.Add(renderPass);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 488));
		List_1_t7BE901F61F1A406FC143D643C9923B05DE767845 * L_16 = (List_1_t7BE901F61F1A406FC143D643C9923B05DE767845 *)__this->get_m_RenderPasses_3();
		RenderPass_1_t8E26DF96C7D796453D4050436A62B01576E92BA8 * L_17 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 495));
		NullCheck((List_1_t7BE901F61F1A406FC143D643C9923B05DE767845 *)L_16);
		List_1_Add_m011F5FA3CC5FBB00875D2C3615DED27D6CE38D60((List_1_t7BE901F61F1A406FC143D643C9923B05DE767845 *)L_16, (RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035 *)L_17, /*hidden argument*/List_1_Add_m011F5FA3CC5FBB00875D2C3615DED27D6CE38D60_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 495));
		// return new RenderGraphBuilder(renderPass, m_Resources);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 489));
		RenderPass_1_t8E26DF96C7D796453D4050436A62B01576E92BA8 * L_18 = V_0;
		RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 * L_19 = (RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 *)__this->get_m_Resources_1();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 496));
		RenderGraphBuilder_t9026010D496B7D7D33BBFD0350D5014FAC7EF312  L_20;
		memset((&L_20), 0, sizeof(L_20));
		RenderGraphBuilder__ctor_m3EB345CC9E313C7C6EADFF534CA50FAF440D75CC((&L_20), (RenderPass_t76E9609EEAA24A42AC708764A04208023FA56035 *)L_18, (RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 *)L_19, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 496));
		V_1 = (RenderGraphBuilder_t9026010D496B7D7D33BBFD0350D5014FAC7EF312 )L_20;
		goto IL_006c;
	}

IL_006c:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 490));
		RenderGraphBuilder_t9026010D496B7D7D33BBFD0350D5014FAC7EF312  L_21 = V_1;
		return (RenderGraphBuilder_t9026010D496B7D7D33BBFD0350D5014FAC7EF312 )L_21;
	}
}
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::ExecuteHierarchy<System.Object>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_mB2DEEAF3F86ED5BECA570432FD5440948D5CB3B8_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___root0, BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___eventData1, EventFunction_1_t0D76F16B2B9E513C3DFCE66CDCAC1768F5B6488C * ___callbackFunction2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_mB2DEEAF3F86ED5BECA570432FD5440948D5CB3B8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_1 = NULL;
	bool V_2 = false;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_3 = NULL;
	bool V_4 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___root0), (&___eventData1), (&___callbackFunction2));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21010));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21011));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21012));
		// GetEventChain(root, s_InternalTransformList);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21013));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___root0;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE * L_1 = ((ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var))->get_s_InternalTransformList_18();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21027));
		ExecuteEvents_GetEventChain_mD90FFC4A70E16AFA81AC6C9CFF174630F77C608C((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0, (RuntimeObject*)L_1, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21027));
		// for (var i = 0; i < s_InternalTransformList.Count; i++)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21014));
		V_0 = (int32_t)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21015));
		goto IL_003d;
	}

IL_0011:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21016));
		// var transform = s_InternalTransformList[i];
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21017));
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE * L_2 = ((ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var))->get_s_InternalTransformList_18();
		int32_t L_3 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21028));
		NullCheck((List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE *)L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = List_1_get_Item_m88FE4B6F43A2CD95BB9ECF8D801F206618FFFFB8_inline((List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE *)L_2, (int32_t)L_3, /*hidden argument*/List_1_get_Item_m88FE4B6F43A2CD95BB9ECF8D801F206618FFFFB8_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21028));
		V_1 = (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_4;
		// if (Execute(transform.gameObject, eventData, callbackFunction))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21018));
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21029));
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_5);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_5, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21029));
		BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * L_7 = ___eventData1;
		EventFunction_1_t0D76F16B2B9E513C3DFCE66CDCAC1768F5B6488C * L_8 = ___callbackFunction2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21030));
		bool L_9 = ((  bool (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *, EventFunction_1_t0D76F16B2B9E513C3DFCE66CDCAC1768F5B6488C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_6, (BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *)L_7, (EventFunction_1_t0D76F16B2B9E513C3DFCE66CDCAC1768F5B6488C *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21030));
		V_2 = (bool)L_9;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21019));
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0038;
		}
	}
	{
		// return transform.gameObject;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21020));
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21031));
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_11);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_12 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_11, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21031));
		V_3 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_12;
		goto IL_0054;
	}

IL_0038:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21021));
		// for (var i = 0; i < s_InternalTransformList.Count; i++)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21022));
		int32_t L_13 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_003d:
	{
		// for (var i = 0; i < s_InternalTransformList.Count; i++)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21023));
		int32_t L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE * L_15 = ((ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var))->get_s_InternalTransformList_18();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21032));
		NullCheck((List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE *)L_15);
		int32_t L_16 = List_1_get_Count_mFB4F65ABD2DD0845C2448493238223FB4079A90C_inline((List_1_t4DBFD85DCFB946888856DBE52AC08C2AF69C4DBE *)L_15, /*hidden argument*/List_1_get_Count_mFB4F65ABD2DD0845C2448493238223FB4079A90C_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21032));
		V_4 = (bool)((((int32_t)L_14) < ((int32_t)L_16))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21024));
		bool L_17 = V_4;
		if (L_17)
		{
			goto IL_0011;
		}
	}
	{
		// return null;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21025));
		V_3 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
		goto IL_0054;
	}

IL_0054:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21026));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_18 = V_3;
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_18;
	}
}
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::GetEventHandler<System.Object>(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ExecuteEvents_GetEventHandler_TisRuntimeObject_m4A0A387AEA9C47C3DB85EAB3FE49C0689C0FFFA8_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___root0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExecuteEvents_GetEventHandler_TisRuntimeObject_m4A0A387AEA9C47C3DB85EAB3FE49C0689C0FFFA8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_0 = NULL;
	bool V_1 = false;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___root0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21096));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21097));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21098));
		// if (root == null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21099));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___root0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21114));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21114));
		V_1 = (bool)L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21100));
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		// return null;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21101));
		V_2 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
		goto IL_004b;
	}

IL_0010:
	{
		// Transform t = root.transform;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21102));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = ___root0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21115));
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_3, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21115));
		V_0 = (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_4;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21103));
		goto IL_003a;
	}

IL_0019:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21104));
		// if (CanHandleEvent<T>(t.gameObject))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21105));
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21116));
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_5);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_5, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21116));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21117));
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		bool L_7 = ((  bool (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21117));
		V_3 = (bool)L_7;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21106));
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0032;
		}
	}
	{
		// return t.gameObject;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21107));
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21118));
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_9);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_9, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21118));
		V_2 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_10;
		goto IL_004b;
	}

IL_0032:
	{
		// t = t.parent;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21108));
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21119));
		NullCheck((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_11);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_11, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21119));
		V_0 = (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_12;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21109));
	}

IL_003a:
	{
		// while (t != null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21110));
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21120));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_14 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_13, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21120));
		V_4 = (bool)L_14;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21111));
		bool L_15 = V_4;
		if (L_15)
		{
			goto IL_0019;
		}
	}
	{
		// return null;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21112));
		V_2 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
		goto IL_004b;
	}

IL_004b:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21113));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_16 = V_2;
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_16;
	}
}
// UnityEngine.Rendering.HighDefinition.MigrationDescription`2<TVersion,TTarget> UnityEngine.Rendering.HighDefinition.MigrationDescription::New<System.Int32Enum,System.Object>(UnityEngine.Rendering.HighDefinition.MigrationStep`2<TVersion,TTarget>[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MigrationDescription_2_t2D210D8AE120A486A4BA618BCCF0662F35EC9242  MigrationDescription_New_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_TisRuntimeObject_m2AD88BBAE180BD35934BA1CC89B79732F980D10F_gshared (MigrationStep_2U5BU5D_tBC3DCCCDDC4D6F13B471C0C1E2B649A21D8714A7* ___steps0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MigrationDescription_New_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_TisRuntimeObject_m2AD88BBAE180BD35934BA1CC89B79732F980D10F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MigrationDescription_2_t2D210D8AE120A486A4BA618BCCF0662F35EC9242  V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___steps0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_HighDefinition_Runtime + 1000));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_HighDefinition_Runtime + 1001));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_HighDefinition_Runtime + 1002));
		// return new MigrationDescription<TVersion, TTarget>(steps);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_HighDefinition_Runtime + 1003));
		MigrationStep_2U5BU5D_tBC3DCCCDDC4D6F13B471C0C1E2B649A21D8714A7* L_0 = ___steps0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_HighDefinition_Runtime + 1005));
		MigrationDescription_2_t2D210D8AE120A486A4BA618BCCF0662F35EC9242  L_1;
		memset((&L_1), 0, sizeof(L_1));
		MigrationDescription_2__ctor_mB7E534783086A0FD4012087681F6F60479E93670((&L_1), (MigrationStep_2U5BU5D_tBC3DCCCDDC4D6F13B471C0C1E2B649A21D8714A7*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_HighDefinition_Runtime + 1005));
		V_0 = (MigrationDescription_2_t2D210D8AE120A486A4BA618BCCF0662F35EC9242 )L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_HighDefinition_Runtime + 1004));
		MigrationDescription_2_t2D210D8AE120A486A4BA618BCCF0662F35EC9242  L_2 = V_0;
		return (MigrationDescription_2_t2D210D8AE120A486A4BA618BCCF0662F35EC9242 )L_2;
	}
}
// UnityEngine.Rendering.HighDefinition.MigrationStep`2<TVersion,TTarget> UnityEngine.Rendering.HighDefinition.MigrationStep::New<System.Int32Enum,System.Object>(TVersion,System.Action`1<TTarget>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MigrationStep_2_t57890783D2260455C7830D5E94EF6D325F12A3DA  MigrationStep_New_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_TisRuntimeObject_mF653636F7D18DD30544A093C1E7D3D68F9E1ED9F_gshared (int32_t ___version0, Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ___action1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MigrationStep_New_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_TisRuntimeObject_mF653636F7D18DD30544A093C1E7D3D68F9E1ED9F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MigrationStep_2_t57890783D2260455C7830D5E94EF6D325F12A3DA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___version0), (&___action1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_HighDefinition_Runtime + 1070));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_HighDefinition_Runtime + 1071));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_HighDefinition_Runtime + 1072));
		// { return new MigrationStep<TVersion, TTarget>(version, action); }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_HighDefinition_Runtime + 1073));
		int32_t L_0 = ___version0;
		Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * L_1 = ___action1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_HighDefinition_Runtime + 1075));
		MigrationStep_2_t57890783D2260455C7830D5E94EF6D325F12A3DA  L_2;
		memset((&L_2), 0, sizeof(L_2));
		MigrationStep_2__ctor_mF7395EA349BEFDFCF964C038F3206902DE2171D7((&L_2), (int32_t)L_0, (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_HighDefinition_Runtime + 1075));
		V_0 = (MigrationStep_2_t57890783D2260455C7830D5E94EF6D325F12A3DA )L_2;
		goto IL_000b;
	}

IL_000b:
	{
		// { return new MigrationStep<TVersion, TTarget>(version, action); }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_HighDefinition_Runtime + 1074));
		MigrationStep_2_t57890783D2260455C7830D5E94EF6D325F12A3DA  L_3 = V_0;
		return (MigrationStep_2_t57890783D2260455C7830D5E94EF6D325F12A3DA )L_3;
	}
}
// UnityEngine.Rendering.ProfilingSampler UnityEngine.Rendering.ProfilingSampler::Get<System.Int32Enum>(TEnum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProfilingSampler_t00574F1AB7FB336BBFCE3DE575A86B5DD2C9F99D * ProfilingSampler_Get_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_mF2CC212DE30788E5451264D3035A9BAEDB2945B8_gshared (int32_t ___marker0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ProfilingSampler_Get_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_mF2CC212DE30788E5451264D3035A9BAEDB2945B8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TProfilingSampler_1_t3F47BE3BE863DDDE0DE589A0944497506881D2CF * V_0 = NULL;
	ProfilingSampler_t00574F1AB7FB336BBFCE3DE575A86B5DD2C9F99D * V_1 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___marker0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 5754));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 5755));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 5756));
		// TProfilingSampler<TEnum>.samples.TryGetValue(marker, out var sampler);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 5757));
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Dictionary_2_t6D38279CB9584FA5B02AC661A0C9BEC4044E95E5 * L_0 = ((TProfilingSampler_1_t3F47BE3BE863DDDE0DE589A0944497506881D2CF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_samples_3();
		int32_t L_1 = ___marker0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 5760));
		NullCheck((Dictionary_2_t6D38279CB9584FA5B02AC661A0C9BEC4044E95E5 *)L_0);
		((  bool (*) (Dictionary_2_t6D38279CB9584FA5B02AC661A0C9BEC4044E95E5 *, int32_t, TProfilingSampler_1_t3F47BE3BE863DDDE0DE589A0944497506881D2CF **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Dictionary_2_t6D38279CB9584FA5B02AC661A0C9BEC4044E95E5 *)L_0, (int32_t)L_1, (TProfilingSampler_1_t3F47BE3BE863DDDE0DE589A0944497506881D2CF **)(TProfilingSampler_1_t3F47BE3BE863DDDE0DE589A0944497506881D2CF **)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 5760));
		// return sampler;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 5758));
		TProfilingSampler_1_t3F47BE3BE863DDDE0DE589A0944497506881D2CF * L_2 = V_0;
		V_1 = (ProfilingSampler_t00574F1AB7FB336BBFCE3DE575A86B5DD2C9F99D *)L_2;
		goto IL_0013;
	}

IL_0013:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 5759));
		ProfilingSampler_t00574F1AB7FB336BBFCE3DE575A86B5DD2C9F99D * L_3 = V_1;
		return (ProfilingSampler_t00574F1AB7FB336BBFCE3DE575A86B5DD2C9F99D *)L_3;
	}
}
// UnityEngine.Rendering.ProfilingSampler UnityEngine.Rendering.ProfilingSampler::Get<System.Object>(TEnum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProfilingSampler_t00574F1AB7FB336BBFCE3DE575A86B5DD2C9F99D * ProfilingSampler_Get_TisRuntimeObject_mD5DA62CFA497D3B5ECCBDFD70D55BC01131F9314_gshared (RuntimeObject * ___marker0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ProfilingSampler_Get_TisRuntimeObject_mD5DA62CFA497D3B5ECCBDFD70D55BC01131F9314_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TProfilingSampler_1_tA6DAD0F898FE80D447901785B60329673C3DFAA6 * V_0 = NULL;
	ProfilingSampler_t00574F1AB7FB336BBFCE3DE575A86B5DD2C9F99D * V_1 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___marker0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 5754));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 5755));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 5756));
		// TProfilingSampler<TEnum>.samples.TryGetValue(marker, out var sampler);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 5757));
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Dictionary_2_t528A508F31AD8427EF48D14234B4B780DA7CC05E * L_0 = ((TProfilingSampler_1_tA6DAD0F898FE80D447901785B60329673C3DFAA6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_samples_3();
		RuntimeObject * L_1 = ___marker0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 5760));
		NullCheck((Dictionary_2_t528A508F31AD8427EF48D14234B4B780DA7CC05E *)L_0);
		((  bool (*) (Dictionary_2_t528A508F31AD8427EF48D14234B4B780DA7CC05E *, RuntimeObject *, TProfilingSampler_1_tA6DAD0F898FE80D447901785B60329673C3DFAA6 **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Dictionary_2_t528A508F31AD8427EF48D14234B4B780DA7CC05E *)L_0, (RuntimeObject *)L_1, (TProfilingSampler_1_tA6DAD0F898FE80D447901785B60329673C3DFAA6 **)(TProfilingSampler_1_tA6DAD0F898FE80D447901785B60329673C3DFAA6 **)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 5760));
		// return sampler;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 5758));
		TProfilingSampler_1_tA6DAD0F898FE80D447901785B60329673C3DFAA6 * L_2 = V_0;
		V_1 = (ProfilingSampler_t00574F1AB7FB336BBFCE3DE575A86B5DD2C9F99D *)L_2;
		goto IL_0013;
	}

IL_0013:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 5759));
		ProfilingSampler_t00574F1AB7FB336BBFCE3DE575A86B5DD2C9F99D * L_3 = V_1;
		return (ProfilingSampler_t00574F1AB7FB336BBFCE3DE575A86B5DD2C9F99D *)L_3;
	}
}
// UnityEngine.UIElements.StyleEnum`1<T> UnityEngine.UIElements.StyleValueExtensions::ToStyleEnum<System.Int32Enum>(UnityEngine.UIElements.StyleInt,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  StyleValueExtensions_ToStyleEnum_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_m23F1DB8B35560B2F8A54DBB59C111DE0ED0FF86E_gshared (StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89  ___styleInt0, int32_t ___value1, const RuntimeMethod* method)
{
	StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___value1;
		int32_t L_1 = StyleInt_get_keyword_mB6F2DD4026E11125E24BC9EABD08C98900B02104((StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89 *)(StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89 *)(&___styleInt0), /*hidden argument*/NULL);
		StyleEnum_1__ctor_m9808A49AC4955C97AB41242A2EB776741D566E82((StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *)(StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *)(&V_0), (int32_t)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_2 = StyleInt_get_specificity_m1D4B1CE4C250A58A554AB4A3F9EB135842107CDA((StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89 *)(StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89 *)(&___styleInt0), /*hidden argument*/NULL);
		StyleEnum_1_set_specificity_mF1C94EF10622C93C04EA507D94C7294E5AFAC06B((StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *)(StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *)(&V_0), (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  L_3 = V_0;
		V_1 = (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C )L_3;
		goto IL_0023;
	}

IL_0023:
	{
		StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  L_4 = V_1;
		return (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C )L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_m8803B4178385D39338A1EDDC39FE6D8152F01A1D_gshared_inline (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Stack_1_get_Count_m8803B4178385D39338A1EDDC39FE6D8152F01A1DGenericMethods12_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Stack_1_get_Count_m8803B4178385D39338A1EDDC39FE6D8152F01A1D_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = (int32_t)__this->get__size_1();
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22GenericMethods12_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588GenericMethods12_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
