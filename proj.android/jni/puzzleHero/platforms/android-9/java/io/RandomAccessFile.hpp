/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.io.RandomAccessFile
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_RANDOMACCESSFILE_HPP_DECL
#define J2CPP_JAVA_IO_RANDOMACCESSFILE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace nio { namespace channels { class FileChannel; } } } }
namespace j2cpp { namespace java { namespace io { class Closeable; } } }
namespace j2cpp { namespace java { namespace io { class DataInput; } } }
namespace j2cpp { namespace java { namespace io { class File; } } }
namespace j2cpp { namespace java { namespace io { class FileDescriptor; } } }
namespace j2cpp { namespace java { namespace io { class DataOutput; } } }


#include <java/io/Closeable.hpp>
#include <java/io/DataInput.hpp>
#include <java/io/DataOutput.hpp>
#include <java/io/File.hpp>
#include <java/io/FileDescriptor.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/nio/channels/FileChannel.hpp>


namespace j2cpp {

namespace java { namespace io {

	class RandomAccessFile;
	class RandomAccessFile
		: public object<RandomAccessFile>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)
		J2CPP_DECLARE_METHOD(7)
		J2CPP_DECLARE_METHOD(8)
		J2CPP_DECLARE_METHOD(9)
		J2CPP_DECLARE_METHOD(10)
		J2CPP_DECLARE_METHOD(11)
		J2CPP_DECLARE_METHOD(12)
		J2CPP_DECLARE_METHOD(13)
		J2CPP_DECLARE_METHOD(14)
		J2CPP_DECLARE_METHOD(15)
		J2CPP_DECLARE_METHOD(16)
		J2CPP_DECLARE_METHOD(17)
		J2CPP_DECLARE_METHOD(18)
		J2CPP_DECLARE_METHOD(19)
		J2CPP_DECLARE_METHOD(20)
		J2CPP_DECLARE_METHOD(21)
		J2CPP_DECLARE_METHOD(22)
		J2CPP_DECLARE_METHOD(23)
		J2CPP_DECLARE_METHOD(24)
		J2CPP_DECLARE_METHOD(25)
		J2CPP_DECLARE_METHOD(26)
		J2CPP_DECLARE_METHOD(27)
		J2CPP_DECLARE_METHOD(28)
		J2CPP_DECLARE_METHOD(29)
		J2CPP_DECLARE_METHOD(30)
		J2CPP_DECLARE_METHOD(31)
		J2CPP_DECLARE_METHOD(32)
		J2CPP_DECLARE_METHOD(33)
		J2CPP_DECLARE_METHOD(34)
		J2CPP_DECLARE_METHOD(35)
		J2CPP_DECLARE_METHOD(36)
		J2CPP_DECLARE_METHOD(37)
		J2CPP_DECLARE_METHOD(38)
		J2CPP_DECLARE_METHOD(39)
		J2CPP_DECLARE_METHOD(40)
		J2CPP_DECLARE_METHOD(41)

		explicit RandomAccessFile(jobject jobj)
		: object<RandomAccessFile>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::io::Closeable>() const;
		operator local_ref<java::io::DataInput>() const;
		operator local_ref<java::io::DataOutput>() const;


		RandomAccessFile(local_ref< java::io::File > const&, local_ref< java::lang::String > const&);
		RandomAccessFile(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		void close();
		local_ref< java::nio::channels::FileChannel > getChannel();
		local_ref< java::io::FileDescriptor > getFD();
		jlong getFilePointer();
		jlong length();
		jint read();
		jint read(local_ref< array<jbyte,1> >  const&);
		jint read(local_ref< array<jbyte,1> >  const&, jint, jint);
		jboolean readBoolean();
		jbyte readByte();
		jchar readChar();
		jdouble readDouble();
		jfloat readFloat();
		void readFully(local_ref< array<jbyte,1> >  const&);
		void readFully(local_ref< array<jbyte,1> >  const&, jint, jint);
		jint readInt();
		local_ref< java::lang::String > readLine();
		jlong readLong();
		jshort readShort();
		jint readUnsignedByte();
		jint readUnsignedShort();
		local_ref< java::lang::String > readUTF();
		void seek(jlong);
		void setLength(jlong);
		jint skipBytes(jint);
		void write(local_ref< array<jbyte,1> >  const&);
		void write(local_ref< array<jbyte,1> >  const&, jint, jint);
		void write(jint);
		void writeBoolean(jboolean);
		void writeByte(jint);
		void writeBytes(local_ref< java::lang::String >  const&);
		void writeChar(jint);
		void writeChars(local_ref< java::lang::String >  const&);
		void writeDouble(jdouble);
		void writeFloat(jfloat);
		void writeInt(jint);
		void writeLong(jlong);
		void writeShort(jint);
		void writeUTF(local_ref< java::lang::String >  const&);
	}; //class RandomAccessFile

} //namespace io
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_RANDOMACCESSFILE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_RANDOMACCESSFILE_HPP_IMPL
#define J2CPP_JAVA_IO_RANDOMACCESSFILE_HPP_IMPL

namespace j2cpp {



java::io::RandomAccessFile::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::io::RandomAccessFile::operator local_ref<java::io::Closeable>() const
{
	return local_ref<java::io::Closeable>(get_jobject());
}

java::io::RandomAccessFile::operator local_ref<java::io::DataInput>() const
{
	return local_ref<java::io::DataInput>(get_jobject());
}

java::io::RandomAccessFile::operator local_ref<java::io::DataOutput>() const
{
	return local_ref<java::io::DataOutput>(get_jobject());
}


java::io::RandomAccessFile::RandomAccessFile(local_ref< java::io::File > const &a0, local_ref< java::lang::String > const &a1)
: object<java::io::RandomAccessFile>(
	call_new_object<
		java::io::RandomAccessFile::J2CPP_CLASS_NAME,
		java::io::RandomAccessFile::J2CPP_METHOD_NAME(0),
		java::io::RandomAccessFile::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
{
}



java::io::RandomAccessFile::RandomAccessFile(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
: object<java::io::RandomAccessFile>(
	call_new_object<
		java::io::RandomAccessFile::J2CPP_CLASS_NAME,
		java::io::RandomAccessFile::J2CPP_METHOD_NAME(1),
		java::io::RandomAccessFile::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1)
)
{
}


void java::io::RandomAccessFile::close()
{
	return call_method<
		java::io::RandomAccessFile::J2CPP_CLASS_NAME,
		java::io::RandomAccessFile::J2CPP_METHOD_NAME(2),
		java::io::RandomAccessFile::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject());
}


local_ref< java::nio::channels::FileChannel > java::io::RandomAccessFile::getChannel()
{
	return call_method<
		java::io::RandomAccessFile::J2CPP_CLASS_NAME,
		java::io::RandomAccessFile::J2CPP_METHOD_NAME(4),
		java::io::RandomAccessFile::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::nio::channels::FileChannel >
	>(get_jobject());
}

local_ref< java::io::FileDescriptor > java::io::RandomAccessFile::getFD()
{
	return call_method<
		java::io::RandomAccessFile::J2CPP_CLASS_NAME,
		java::io::RandomAccessFile::J2CPP_METHOD_NAME(5),
		java::io::RandomAccessFile::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::io::FileDescriptor >
	>(get_jobject());
}

jlong java::io::RandomAccessFile::getFilePointer()
{
	return call_method<
		java::io::RandomAccessFile::J2CPP_CLASS_NAME,
		java::io::RandomAccessFile::J2CPP_METHOD_NAME(6),
		java::io::RandomAccessFile::J2CPP_METHOD_SIGNATURE(6), 
		jlong
	>(get_jobject());
}

jlong java::io::RandomAccessFile::length()
{
	return call_method<
		java::io::RandomAccessFile::J2CPP_CLASS_NAME,
		java::io::RandomAccessFile::J2CPP_METHOD_NAME(7),
		java::io::RandomAccessFile::J2CPP_METHOD_SIGNATURE(7), 
		jlong
	>(get_jobject());
}

jint java::io::RandomAccessFile::read()
{
	return call_method<
		java::io::RandomAccessFile::J2CPP_CLASS_NAME,
		java::io::RandomAccessFile::J2CPP_METHOD_NAME(8),
		java::io::RandomAccessFile::J2CPP_METHOD_SIGNATURE(8), 
		jint
	>(get_jobject());
}

jint java::io::RandomAccessFile::read(local_ref< array<jbyte,1> > const &a0)
{
	return call_method<
		java::io::RandomAccessFile::J2CPP_CLASS_NAME,
		java::io::RandomAccessFile::J2CPP_METHOD_NAME(9),
		java::io::RandomAccessFile::J2CPP_METHOD_SIGNATURE(9), 
		jint
	>(get_jobject(), a0);
}

jint java::io::RandomAccessFile::read(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		java::io::RandomAccessFile::J2CPP_CLASS_NAME,
		java::io::RandomAccessFile::J2CPP_METHOD_NAME(10),
		java::io::RandomAccessFile::J2CPP_METHOD_SIGNATURE(10), 
		jint
	>(get_jobject(), a0, a1, a2);
}

jboolean java::io::RandomAccessFile::readBoolean()
{
	return call_method<
		java::io::RandomAccessFile::J2CPP_CLASS_NAME,
		java::io::RandomAccessFile::J2CPP_METHOD_NAME(11),
		java::io::RandomAccessFile::J2CPP_METHOD_SIGNATURE(11), 
		jboolean
	>(get_jobject());
}

jbyte java::io::RandomAccessFile::readByte()
{
	return call_method<
		java::io::RandomAccessFile::J2CPP_CLASS_NAME,
		java::io::RandomAccessFile::J2CPP_METHOD_NAME(12),
		java::io::RandomAccessFile::J2CPP_METHOD_SIGNATURE(12), 
		jbyte
	>(get_jobject());
}

jchar java::io::RandomAccessFile::readChar()
{
	return call_method<
		java::io::RandomAccessFile::J2CPP_CLASS_NAME,
		java::io::RandomAccessFile::J2CPP_METHOD_NAME(13),
		java::io::RandomAccessFile::J2CPP_METHOD_SIGNATURE(13), 
		jchar
	>(get_jobject());
}

jdouble java::io::RandomAccessFile::readDouble()
{
	return call_method<
		java::io::RandomAccessFile::J2CPP_CLASS_NAME,
		java::io::RandomAccessFile::J2CPP_METHOD_NAME(14),
		java::io::RandomAccessFile::J2CPP_METHOD_SIGNATURE(14), 
		jdouble
	>(get_jobject());
}

jfloat java::io::RandomAccessFile::readFloat()
{
	return call_method<
		java::io::RandomAccessFile::J2CPP_CLASS_NAME,
		java::io::RandomAccessFile::J2CPP_METHOD_NAME(15),
		java::io::RandomAccessFile::J2CPP_METHOD_SIGNATURE(15), 
		jfloat
	>(get_jobject());
}

void java::io::RandomAccessFile::readFully(local_ref< array<jbyte,1> > const &a0)
{
	return call_method<
		java::io::RandomAccessFile::J2CPP_CLASS_NAME,
		java::io::RandomAccessFile::J2CPP_METHOD_NAME(16),
		java::io::RandomAccessFile::J2CPP_METHOD_SIGNATURE(16), 
		void
	>(get_jobject(), a0);
}

void java::io::RandomAccessFile::readFully(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		java::io::RandomAccessFile::J2CPP_CLASS_NAME,
		java::io::RandomAccessFile::J2CPP_METHOD_NAME(17),
		java::io::RandomAccessFile::J2CPP_METHOD_SIGNATURE(17), 
		void
	>(get_jobject(), a0, a1, a2);
}

jint java::io::RandomAccessFile::readInt()
{
	return call_method<
		java::io::RandomAccessFile::J2CPP_CLASS_NAME,
		java::io::RandomAccessFile::J2CPP_METHOD_NAME(18),
		java::io::RandomAccessFile::J2CPP_METHOD_SIGNATURE(18), 
		jint
	>(get_jobject());
}

local_ref< java::lang::String > java::io::RandomAccessFile::readLine()
{
	return call_method<
		java::io::RandomAccessFile::J2CPP_CLASS_NAME,
		java::io::RandomAccessFile::J2CPP_METHOD_NAME(19),
		java::io::RandomAccessFile::J2CPP_METHOD_SIGNATURE(19), 
		local_ref< java::lang::String >
	>(get_jobject());
}

jlong java::io::RandomAccessFile::readLong()
{
	return call_method<
		java::io::RandomAccessFile::J2CPP_CLASS_NAME,
		java::io::RandomAccessFile::J2CPP_METHOD_NAME(20),
		java::io::RandomAccessFile::J2CPP_METHOD_SIGNATURE(20), 
		jlong
	>(get_jobject());
}

jshort java::io::RandomAccessFile::readShort()
{
	return call_method<
		java::io::RandomAccessFile::J2CPP_CLASS_NAME,
		java::io::RandomAccessFile::J2CPP_METHOD_NAME(21),
		java::io::RandomAccessFile::J2CPP_METHOD_SIGNATURE(21), 
		jshort
	>(get_jobject());
}

jint java::io::RandomAccessFile::readUnsignedByte()
{
	return call_method<
		java::io::RandomAccessFile::J2CPP_CLASS_NAME,
		java::io::RandomAccessFile::J2CPP_METHOD_NAME(22),
		java::io::RandomAccessFile::J2CPP_METHOD_SIGNATURE(22), 
		jint
	>(get_jobject());
}

jint java::io::RandomAccessFile::readUnsignedShort()
{
	return call_method<
		java::io::RandomAccessFile::J2CPP_CLASS_NAME,
		java::io::RandomAccessFile::J2CPP_METHOD_NAME(23),
		java::io::RandomAccessFile::J2CPP_METHOD_SIGNATURE(23), 
		jint
	>(get_jobject());
}

local_ref< java::lang::String > java::io::RandomAccessFile::readUTF()
{
	return call_method<
		java::io::RandomAccessFile::J2CPP_CLASS_NAME,
		java::io::RandomAccessFile::J2CPP_METHOD_NAME(24),
		java::io::RandomAccessFile::J2CPP_METHOD_SIGNATURE(24), 
		local_ref< java::lang::String >
	>(get_jobject());
}

void java::io::RandomAccessFile::seek(jlong a0)
{
	return call_method<
		java::io::RandomAccessFile::J2CPP_CLASS_NAME,
		java::io::RandomAccessFile::J2CPP_METHOD_NAME(25),
		java::io::RandomAccessFile::J2CPP_METHOD_SIGNATURE(25), 
		void
	>(get_jobject(), a0);
}

void java::io::RandomAccessFile::setLength(jlong a0)
{
	return call_method<
		java::io::RandomAccessFile::J2CPP_CLASS_NAME,
		java::io::RandomAccessFile::J2CPP_METHOD_NAME(26),
		java::io::RandomAccessFile::J2CPP_METHOD_SIGNATURE(26), 
		void
	>(get_jobject(), a0);
}

jint java::io::RandomAccessFile::skipBytes(jint a0)
{
	return call_method<
		java::io::RandomAccessFile::J2CPP_CLASS_NAME,
		java::io::RandomAccessFile::J2CPP_METHOD_NAME(27),
		java::io::RandomAccessFile::J2CPP_METHOD_SIGNATURE(27), 
		jint
	>(get_jobject(), a0);
}

void java::io::RandomAccessFile::write(local_ref< array<jbyte,1> > const &a0)
{
	return call_method<
		java::io::RandomAccessFile::J2CPP_CLASS_NAME,
		java::io::RandomAccessFile::J2CPP_METHOD_NAME(28),
		java::io::RandomAccessFile::J2CPP_METHOD_SIGNATURE(28), 
		void
	>(get_jobject(), a0);
}

void java::io::RandomAccessFile::write(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		java::io::RandomAccessFile::J2CPP_CLASS_NAME,
		java::io::RandomAccessFile::J2CPP_METHOD_NAME(29),
		java::io::RandomAccessFile::J2CPP_METHOD_SIGNATURE(29), 
		void
	>(get_jobject(), a0, a1, a2);
}

void java::io::RandomAccessFile::write(jint a0)
{
	return call_method<
		java::io::RandomAccessFile::J2CPP_CLASS_NAME,
		java::io::RandomAccessFile::J2CPP_METHOD_NAME(30),
		java::io::RandomAccessFile::J2CPP_METHOD_SIGNATURE(30), 
		void
	>(get_jobject(), a0);
}

void java::io::RandomAccessFile::writeBoolean(jboolean a0)
{
	return call_method<
		java::io::RandomAccessFile::J2CPP_CLASS_NAME,
		java::io::RandomAccessFile::J2CPP_METHOD_NAME(31),
		java::io::RandomAccessFile::J2CPP_METHOD_SIGNATURE(31), 
		void
	>(get_jobject(), a0);
}

void java::io::RandomAccessFile::writeByte(jint a0)
{
	return call_method<
		java::io::RandomAccessFile::J2CPP_CLASS_NAME,
		java::io::RandomAccessFile::J2CPP_METHOD_NAME(32),
		java::io::RandomAccessFile::J2CPP_METHOD_SIGNATURE(32), 
		void
	>(get_jobject(), a0);
}

void java::io::RandomAccessFile::writeBytes(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::io::RandomAccessFile::J2CPP_CLASS_NAME,
		java::io::RandomAccessFile::J2CPP_METHOD_NAME(33),
		java::io::RandomAccessFile::J2CPP_METHOD_SIGNATURE(33), 
		void
	>(get_jobject(), a0);
}

void java::io::RandomAccessFile::writeChar(jint a0)
{
	return call_method<
		java::io::RandomAccessFile::J2CPP_CLASS_NAME,
		java::io::RandomAccessFile::J2CPP_METHOD_NAME(34),
		java::io::RandomAccessFile::J2CPP_METHOD_SIGNATURE(34), 
		void
	>(get_jobject(), a0);
}

void java::io::RandomAccessFile::writeChars(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::io::RandomAccessFile::J2CPP_CLASS_NAME,
		java::io::RandomAccessFile::J2CPP_METHOD_NAME(35),
		java::io::RandomAccessFile::J2CPP_METHOD_SIGNATURE(35), 
		void
	>(get_jobject(), a0);
}

void java::io::RandomAccessFile::writeDouble(jdouble a0)
{
	return call_method<
		java::io::RandomAccessFile::J2CPP_CLASS_NAME,
		java::io::RandomAccessFile::J2CPP_METHOD_NAME(36),
		java::io::RandomAccessFile::J2CPP_METHOD_SIGNATURE(36), 
		void
	>(get_jobject(), a0);
}

void java::io::RandomAccessFile::writeFloat(jfloat a0)
{
	return call_method<
		java::io::RandomAccessFile::J2CPP_CLASS_NAME,
		java::io::RandomAccessFile::J2CPP_METHOD_NAME(37),
		java::io::RandomAccessFile::J2CPP_METHOD_SIGNATURE(37), 
		void
	>(get_jobject(), a0);
}

void java::io::RandomAccessFile::writeInt(jint a0)
{
	return call_method<
		java::io::RandomAccessFile::J2CPP_CLASS_NAME,
		java::io::RandomAccessFile::J2CPP_METHOD_NAME(38),
		java::io::RandomAccessFile::J2CPP_METHOD_SIGNATURE(38), 
		void
	>(get_jobject(), a0);
}

void java::io::RandomAccessFile::writeLong(jlong a0)
{
	return call_method<
		java::io::RandomAccessFile::J2CPP_CLASS_NAME,
		java::io::RandomAccessFile::J2CPP_METHOD_NAME(39),
		java::io::RandomAccessFile::J2CPP_METHOD_SIGNATURE(39), 
		void
	>(get_jobject(), a0);
}

void java::io::RandomAccessFile::writeShort(jint a0)
{
	return call_method<
		java::io::RandomAccessFile::J2CPP_CLASS_NAME,
		java::io::RandomAccessFile::J2CPP_METHOD_NAME(40),
		java::io::RandomAccessFile::J2CPP_METHOD_SIGNATURE(40), 
		void
	>(get_jobject(), a0);
}

void java::io::RandomAccessFile::writeUTF(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::io::RandomAccessFile::J2CPP_CLASS_NAME,
		java::io::RandomAccessFile::J2CPP_METHOD_NAME(41),
		java::io::RandomAccessFile::J2CPP_METHOD_SIGNATURE(41), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(java::io::RandomAccessFile,"java/io/RandomAccessFile")
J2CPP_DEFINE_METHOD(java::io::RandomAccessFile,0,"<init>","(Ljava/io/File;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::io::RandomAccessFile,1,"<init>","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::io::RandomAccessFile,2,"close","()V")
J2CPP_DEFINE_METHOD(java::io::RandomAccessFile,3,"finalize","()V")
J2CPP_DEFINE_METHOD(java::io::RandomAccessFile,4,"getChannel","()Ljava/nio/channels/FileChannel;")
J2CPP_DEFINE_METHOD(java::io::RandomAccessFile,5,"getFD","()Ljava/io/FileDescriptor;")
J2CPP_DEFINE_METHOD(java::io::RandomAccessFile,6,"getFilePointer","()J")
J2CPP_DEFINE_METHOD(java::io::RandomAccessFile,7,"length","()J")
J2CPP_DEFINE_METHOD(java::io::RandomAccessFile,8,"read","()I")
J2CPP_DEFINE_METHOD(java::io::RandomAccessFile,9,"read","([B)I")
J2CPP_DEFINE_METHOD(java::io::RandomAccessFile,10,"read","([BII)I")
J2CPP_DEFINE_METHOD(java::io::RandomAccessFile,11,"readBoolean","()Z")
J2CPP_DEFINE_METHOD(java::io::RandomAccessFile,12,"readByte","()B")
J2CPP_DEFINE_METHOD(java::io::RandomAccessFile,13,"readChar","()C")
J2CPP_DEFINE_METHOD(java::io::RandomAccessFile,14,"readDouble","()D")
J2CPP_DEFINE_METHOD(java::io::RandomAccessFile,15,"readFloat","()F")
J2CPP_DEFINE_METHOD(java::io::RandomAccessFile,16,"readFully","([B)V")
J2CPP_DEFINE_METHOD(java::io::RandomAccessFile,17,"readFully","([BII)V")
J2CPP_DEFINE_METHOD(java::io::RandomAccessFile,18,"readInt","()I")
J2CPP_DEFINE_METHOD(java::io::RandomAccessFile,19,"readLine","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::io::RandomAccessFile,20,"readLong","()J")
J2CPP_DEFINE_METHOD(java::io::RandomAccessFile,21,"readShort","()S")
J2CPP_DEFINE_METHOD(java::io::RandomAccessFile,22,"readUnsignedByte","()I")
J2CPP_DEFINE_METHOD(java::io::RandomAccessFile,23,"readUnsignedShort","()I")
J2CPP_DEFINE_METHOD(java::io::RandomAccessFile,24,"readUTF","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::io::RandomAccessFile,25,"seek","(J)V")
J2CPP_DEFINE_METHOD(java::io::RandomAccessFile,26,"setLength","(J)V")
J2CPP_DEFINE_METHOD(java::io::RandomAccessFile,27,"skipBytes","(I)I")
J2CPP_DEFINE_METHOD(java::io::RandomAccessFile,28,"write","([B)V")
J2CPP_DEFINE_METHOD(java::io::RandomAccessFile,29,"write","([BII)V")
J2CPP_DEFINE_METHOD(java::io::RandomAccessFile,30,"write","(I)V")
J2CPP_DEFINE_METHOD(java::io::RandomAccessFile,31,"writeBoolean","(Z)V")
J2CPP_DEFINE_METHOD(java::io::RandomAccessFile,32,"writeByte","(I)V")
J2CPP_DEFINE_METHOD(java::io::RandomAccessFile,33,"writeBytes","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::io::RandomAccessFile,34,"writeChar","(I)V")
J2CPP_DEFINE_METHOD(java::io::RandomAccessFile,35,"writeChars","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::io::RandomAccessFile,36,"writeDouble","(D)V")
J2CPP_DEFINE_METHOD(java::io::RandomAccessFile,37,"writeFloat","(F)V")
J2CPP_DEFINE_METHOD(java::io::RandomAccessFile,38,"writeInt","(I)V")
J2CPP_DEFINE_METHOD(java::io::RandomAccessFile,39,"writeLong","(J)V")
J2CPP_DEFINE_METHOD(java::io::RandomAccessFile,40,"writeShort","(I)V")
J2CPP_DEFINE_METHOD(java::io::RandomAccessFile,41,"writeUTF","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_RANDOMACCESSFILE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
